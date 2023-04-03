#include <bits/stdc++.h>
 
using namespace std;
namespace {
	#define NAME ""

    // Types
    #define ll long long
    #define pii pair<int,int>
    #define pll pair<ll,ll>

    // Shortcuts
    #define el cout << "\n"
    #define ft first
    #define se second
    #define pb push_back
    #define eb emplace_back
    #define fio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
    #define tcase int t; cin >> t; while(t--)

    // Debug
    void DEBUG(int& a){ cerr << a;}
    void DEBUG(long long& a){ cerr << a;}
    void DEBUG(bool& a){ cerr << a;}
    void DEBUG(char& a){ cerr << a;}
    template <class T>void DEBUG(vector<T> v1){cerr << "["; for (T i : v1) { DEBUG(i); cerr << ", ";}; cerr << "\b]" << endl;}
    template <class T>void DEBUG(set<T> s1){cerr << "{"; for (T i : s1) { DEBUG(i); cerr << ", ";}; cerr << "\b}" << endl;}
    template <class T>void DEBUG(unordered_set<T> s2){cerr << "["; for (T i : s2) { DEBUG(i); cerr << " ";}; cerr << "\b]" << endl;}
    template <class T, class V> void DEBUG(map<T,V> m1){cerr << "{\n"; for (auto& i: m1) {DEBUG(i.first); cerr << ": "; DEBUG(i.second); cerr << '\n';}; cerr << "}" << endl;}
    template <class T, class V> void DEBUG(unordered_map<T,V> m2){cerr << "{\n"; for (auto& i: m2) {DEBUG(i.first); cerr << ": "; DEBUG(i.second); cerr << '\n';}; cerr << "}" << endl;}
    #define debug(x)       \
        cerr << #x << " = "; \
        DEBUG(x);         \
        cout << endl;

    // Functions
    #define all(a) a.begin(), a.end()
    #define rall(a) a.rbegin(), a.rend()
    #define FOR(i,a,b) for(int i=(a),_b=(b); i<=_b; i++)
    #define FORD(i,a,b) for(int i=(a),_b=(b); i>=_b; i--)
    void lower(string& s){ for (auto& x: s) if ('A' <= x && x <= 'Z') x += 32; }
    void upper(string& s){ for (auto& x: s) if ('a' <= x && x <= 'z') x -= 32; }

    // Const
    #define MOD 1000000007
    #define PI 3.1415926535897932384626433832795
    const ll inf = LLONG_MAX;
}

const int N = 1e6 + 1;

void solve(){

}
 
int main (){
	fio;
    solve();
	return 0;
}