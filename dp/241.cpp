#include "../headers/stdc++.h";
using namespace std;
int operation(int x , int y, char op){
    if(op=='-')
        return x - y;
    if (op == '+')
        return x + y;
    if (op == '*')
        return x * y;
    return 0;
}
vector<int> diffWaysToCompute(string expression){
    vector<int> res;
    bool number = 1; // true
    for (int i = 0; i < expression.size();i++){
        // if it not digit 
        if(!isdigit(expression[i])){
            number = 0;

            vector<int> left = diffWaysToCompute(expression.substr(0, i));
            vector<int> right = diffWaysToCompute(expression.substr(i+1));
            // perfrom operations
            for (int x : left){
                for(int y:right){
                    int result = operation(x, y, expression[i]);
                    res.push_back(result);
                }
            }
        }
    }
    if(number == 1)
        res.push_back(stoi(expression));
    return res;
}
int main(){
    diffWaysToCompute("2-1-1");
    return 0;
}