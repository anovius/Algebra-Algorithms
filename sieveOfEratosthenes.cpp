/*
Sieve of Eratosthenes is an algorithm for finding all the prime numbers in a segment [2;n] using O(nloglogn) operations.
*/
#include <bits/stdc++.h>
using namespace std;

void printPrime(int end){
    vector<int> primes;
    for(int i=2; i<=end; i++){
        primes.push_back(i);
    }
    for(int i=0; i<=primes.size(); i++){
        int n = primes[i];
        for(int j=i+1; j<primes.size(); j++){
            if(!(primes[j]%n))
                primes.erase(primes.begin() + j);
        }
    }
    for(int i=0; i<primes.size(); i++){
        cout << primes[i] << ' ';
    }
    cout << '\n';
}
int main(){
    printPrime(1000);
    return 0;
}