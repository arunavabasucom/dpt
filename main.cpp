#include "./headers/stdc++.h";
using namespace std;
// f(n) -> f(n-1) + f(n-2)
// 2451637
int fibo(int n){
  if(n<=1)
    return n;
  return fibo(n - 1) + fibo(n - 2);
}
// memoziation - we need to store the sub problen 
// for not more computation 
int main(){
  int a = fibo(4);
  cout << a;
  return 0;
}

int search(Node *head,int number){
    Node *temp = head;
    while (temp)
    {
        if(number == temp->data) return 1;
        else temp = temp->next;
        
    }
     return 0;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    Node *head = converToLinklist(arr);
    Node *temp = head;
    cout <<  search(head,15);
    return 0;
}
