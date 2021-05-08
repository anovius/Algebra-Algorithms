/*
This algorithm will do factorization of given number in prime numbers
*/
#include <bits/stdc++.h>
using namespace std;

//Trial Factorization
vector<long long> trial_division(long long n) {
    vector<long long> factorization;
    for (long long d = 2; d * d <= n; d++) {
        while (n % d == 0) {
            factorization.push_back(d);
            n /= d;
        }
    }
    if (n > 1)
        factorization.push_back(n);
    return factorization;
}

//Wheel Factorization
vector<long long> wheel_division(long long n) {
    vector<long long> factorization;
    for(int d: {2, 3, 5}){
        while (n % d == 0) {
            factorization.push_back(2);
            n /= 2;
        }
    }
    for (long long d = 7; d * d <= n; d += 2) {
        while (n % d == 0) {
            factorization.push_back(d);
            n /= d;
        }
    }
    if (n > 1)
        factorization.push_back(n);
    return factorization;
}
int main(){
    vector<long long> ans = trial_division(213123223);
    for(int i=0; i<ans.size();i++)
        cout << ans[i] << ' ';
    cout << '\n';
    ans = wheel_division(234234234234324234);
    for(int i=0; i<ans.size();i++)
        cout << ans[i] << ' ';
    cout << '\n';
    return 0;
}