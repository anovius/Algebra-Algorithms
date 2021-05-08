/*
This algo caclculates power of given number with O(logn) complexity
Concept:
    3^13 = 3^8 . 3^4 . 3^2 . 3^1
*/
#include <bits/stdc++.h>
using namespace std;

long long binaryExponentiation(long long num, long long pow){
    if(pow == 0)
        return 1;
    long long ans = binaryExponentiation(num, pow/2);
    if(pow % 2)
        return ans*ans*num;
    else
        return ans*ans;
}

int main(){
    cout << binaryExponentiation(3,5) << '\n';
    cout << binaryExponentiation(2,5) << '\n';
    return 0;
}