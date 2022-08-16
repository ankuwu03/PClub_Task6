#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    map<int, pair<int, int>>m;   //used maps
    for (int i=0; i<n; i++){
        int u;
        cin >> u;
        if(m.count(u)==0) 
            m[u].first = i;
        m[u].second = i;
    }
    for (int i = 0; i<k; i++){
        int a, b;
        cin >> a >> b;
        if(!m.count(a) or !m.count(b) or m[a].first > m[b].second) {
            cout << "NO\n"; //equals = 0 = wrong
        }
        else cout << "YES\n";
    }
}

int main(){
    //uncomment below for inputting from input_for_solution.txt and outputting in answer.txt(make files in same directory)
// #ifndef ONLINE_JUDGE
// 	freopen("input_for_solution.txt", "r", stdin);
// 	freopen("answer.txt", "w", stdout);
// #endif
    ////////////START////////////////
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}