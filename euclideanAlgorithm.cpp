/*
This algo caclculates GCD of given numbers with  O(log min(a,b)) complexity
Concept:
    if one number is 0 of two numbers then gcd will be 2nd Number
*/
#include <bits/stdc++.h>
using namespace std;

int euclideanAlgorithm(int num1, int num2){
    if(num2 == 0)
        return num1;
    return euclideanAlgorithm(num2, num1%num2);
}

int main(){
    cout << euclideanAlgorithm(10, 95) << '\n';
    cout << euclideanAlgorithm(27, 9) << '\n';
    return 0;
}