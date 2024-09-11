#include "../headers/stdc++.h";
using namespace std;

//=================================================================//
//                         RECURSIVE
//=================================================================//

// int check(int day, int last, vector<vector<int>> tasks) {

//   // if the day is 0
//   if (day == 0) {
//     int maxi = 0;
//     for (int i = 0; i < 3; i++) {
//       if (i != last) {
//         maxi = max(maxi, tasks[day][i]);
//       }
//     }
//     return maxi;
//   }
//   // other days
//   int maxi = 0;
//   for (int i = 0; i < 3; i++) {
//     if (i != last) {
//       int points = tasks[day][i] + check(day - 1, i, tasks);
//       maxi = max(maxi, points);
//     }
//   }
//   return maxi;
// }

// int maximumPoints(vector<vector<int>> &arr, int n) {
//     return check(n - 1, 3, arr);
// }

//=================================================================//
//                         MEMOISED
// TC - O(N*4)*3 // 3 LOOPS WITH N(DAYS)*4(TASKS)
// SC - O(N)[STACK SPACE] + O(N*4)[DP ARRAY]
//=================================================================//

// int check(int day, int last, vector<vector<int>> &dparr,vector<vector<int>>
// &tasks) {

//   if(dparr[day][last] !=-1){
//       return dparr[day][last];
//   }

//   // if the day is 0
//   if (day == 0) {
//     int maxi = 0;
//     for (int i = 0; i < 3; i++) {
//       if (i != last) {
//         maxi = max(maxi, tasks[day][i]);
//       }
//     }
//     return dparr[day][last] = maxi;
//   }
//   // other days
//   int maxi = 0;
//   for (int i = 0; i < 3; i++) {
//     if (i != last) {
//       int points = tasks[day][i] + check(day - 1, i, dparr,tasks);
//       maxi = max(maxi, points);
//     }
//   }
//   return dparr[day][last] =  maxi;
// }

// int maximumPoints(vector<vector<int>> &arr, int n) {
//     vector<vector<int>> dparr(n,vector<int>(4,-1)); // n - days 4 - taks s (0
//     1 2 3) return check(n - 1, 3,dparr, arr);
// }

//=================================================================//
//                         TABULATION
//=================================================================//

int maximumPoints(vector<vector<int>> &arr, int n) {
  vector<vector<int>> dparr(n,
                            vector<int>(4, 0)); // n - days 4 - taks s (0 1 2 3)
  dparr[0][0] = max(arr[0][1], arr[0][2]);
  dparr[0][1] = max(arr[0][0], arr[0][2]); // means we
  dparr[0][2] = max(arr[0][1], arr[0][0]);
  dparr[0][3] = max(arr[0][1], arr[0][1], arr[0][2]);

  for (int day = 1; day < n; day++) {
    for (int last = 0; last < 4; last++) {
      dparr[day][last] = 0;
      for (int task = 0; task < 3; task++) {
        if (task != last) {
          int points = arr[day][task] + dparr[day - 1][task];
          dparr[day][last] = max(dparr[day][last], points);
        }
      }
    }
  }
  return dparr[n - 1][3];
}

int main() {
  vector<vector<int>> arr = {{1, 2, 5}, {3, 1, 1}, {3, 3, 3}};
  cout << maximumPoints(arr, 3);
  return 0;
}