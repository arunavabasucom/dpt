#include <bits/stdc++.h>
#include <functional>
using namespace std;
// function pointers 
// void hello(){
//     cout << "hello\n";
// }
// function as a parameter
void print(int& value){
    cout << value << endl;
} 
// void ds(vector<int>& arr ,  void(*fn)(int&)){
//     for(int num: arr)
//         fn(num);
// }
void ds(vector<int>& arr ,  const function<void(int)> &fn){
    for(int num: arr)
        fn(num);
}




int main() {
    // type->void(*function name)(parameters)
    // typedef void(*fn_t)();
    // fn_t fn = hello;
    // fn();
    // fn();
    // cout << &fn;
    vector<int> arr = {1,2,3,4,5,6};
    // ds(arr,print);
    // using lamda function
    
    // lambda
    // https://en.cppreference.com/w/cpp/language/lambda#Lambda_capture 
    // [] -> capture
    // = -> pass by value(COPY) deafult
    // & -> pass by referance    
    int a = 5;
    auto lambda = [&](int value){
         cout << value << endl;
         cout << a << endl;

    };
    ds(arr,lambda);
    return 0;
}
