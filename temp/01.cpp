// map<char, pair<int, int>> keyboardLayout = {
//     // First row 
//     {'1', {0, 0}}, {'2', {1, 0}}, {'3', {2, 0}}, {'4', {3, 0}}, {'5', {4, 0}},
//     {'6', {5, 0}}, {'7', {6, 0}}, {'8', {7, 0}}, {'9', {8, 0}}, {'0', {9, 0}},

//     // Second row
//     {'Q', {0, 1}}, {'W', {1, 1}}, {'E', {2, 1}}, {'R', {3, 1}}, {'T', {4, 1}},
//     {'Y', {5, 1}}, {'U', {6, 1}}, {'I', {7, 1}}, {'O', {8, 1}}, {'P', {9, 1}},

//     // Third row
//     {'A', {0, 2}}, {'S', {1, 2}}, {'D', {2, 2}}, {'F', {3, 2}}, {'G', {4, 2}},
//     {'*', {5, 2}}, {'H', {6, 2}}, {'J', {7, 2}}, {'K', {8, 2}}, {'L', {9, 2}},

//     // Fourth row
//     {'Z', {1, 3}}, {'X', {2, 3}}, {'C', {3, 3}}, {'V', {4, 3}}, {'B', {5, 3}},
//     {'N', {6, 3}}, {'M', {7, 3}}
// };

// int getDistance(string word) {
//     int totalDistance = 0; //total distance 
//     // starting postions
//     int currentRow = 5;
//     int currentCol = 2;
//     for (char c : word) {
//         pair<int, int> keyPosition = keyboardLayout[c];
//         int newRow = keyPosition.first;
//         int newCol = keyPosition.second;
//         totalDistance += abs(newRow - currentRow) + abs(newCol - currentCol);
//         currentRow = newRow;
//         currentCol = newCol;
//     }

//     return totalDistance;
// }