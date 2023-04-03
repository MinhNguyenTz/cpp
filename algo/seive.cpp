#include <bits/stdc++.h>
#include "benchmark.cpp"
 
using namespace std;
namespace {
    #define ll long long
    #define el cout << "\n"
    #define ft first
    #define se second
    #define all(a) a.begin(), a.end()
    #define FOR(i,a,b) for(int i=(a),_b=(b); i<=_b; i++)
    #define FORD(i,a,b) for(int i=(a),_b=(b); i>=_b; i--)
    #define pb push_back
}

const int N = 1e8;
ll p[N/64 + 1], ONES[64];
// Bits that are 1 means that it's not a prime number
// Each position in p has 64 slot for 1 and 0;

void mark(int& val) {p[val >> 6] |= ONES[val & 63];} // val&63 == val % 64
bool check(int& val) {return val > 1 && (val == 2 || (val & 1 && !(p[val >> 6] & ONES[val & 63])));} // check if is prime

void seive(){
    FOR(i, 0, 63) ONES[i] = (1LL << i); // ONES[i] == 2^i == 1 << i

    // Only looking for odd numbers
    for (int i = 3; i*i <= N; i += 2){
        if (check(i)){
            int i2 = i+i;
            for (int j = i*3; j <= N; j += i2) mark(j);
        }
    }
}

 
int main (){
	ios::sync_with_stdio(0); 
	cin.tie(0); cout.tie(0);

    // Total runtime written in benchmark.cpp
    runtime(seive); el; el;

    FOR(i, 1, 1000) if (check(i)) cout << i << " ";
	return 0;
}