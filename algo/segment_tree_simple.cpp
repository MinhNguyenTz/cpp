#include <bits/stdc++.h>
 
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

const int N = 50001;
int a[N]; // Init array
int st[4*N]; // Value in tree
int lo[4*N], hi[4*N]; // Range that node i manage
int leaf[N]; // Position of the leaf in the tree

int n; // Array size
int u, v; // Range to query

void init(int i, int l, int r){
	lo[i] = l; hi[i] = r;

    // Reached leaf
	if (l == r) return st[i] = a[l], leaf[l] = i, void();

	int mid = (l + r) >> 1;
	init(i*2, l, mid);
	init(i*2 + 1, mid + 1, r);

    // Update tree
	st[i] = max(st[i*2], st[i*2 + 1]);
}

int get_max(int i){
	int l = lo[i], r = hi[i];
    // Cases when the range that node i manage outside of the range that needed to be query
	if (l > v || r < u) return INT_MIN;

    // Cases when the range that node i mange is completely inside the range that needed to be query
	if (l >= u && v >= r) return st[i];

	return max(get_max(i*2), get_max(i*2 + 1));
}

void update(int pos, int val){
	st[leaf[pos]] = val;
	int i = leaf[pos];

    // Update from the leaf to the father of the node i by divide it by 2
	for (i >>= 1; i > 0; i >>= 1) st[i] = max(st[i*2], st[i*2 + 1]);
}

void solve(){
	int n; cin >> n;
	for (int i = 1; i <= n; i++) cin >> a[i];

    // Build tree
	init(1, 1, n);

	int q; cin >> q;
	while (q--){
		int t; cin >> t;
        // t == 1 -> query
        // t == 0 -> update value at position (pos) to (val)

		if (t){
			cin >> u >> v;
			cout << get_max(1); el;
		} else{
			int pos, val; cin >> pos >> val;
			update(pos, val);
		}
	}
}
 
int main (){
	ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

	solve();  
	return 0;
}
