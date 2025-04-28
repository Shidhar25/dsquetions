#include <bits/stdc++.h>

using namespace std;


template<typename typC> istream &operator>>(istream &cin,vector<typC> &a) { for (auto &x:a) cin>>x; return cin; }
template<typename typC,typename typD> istream &operator>>(istream &cin,pair<typC,typD> &a) { return cin>>a.first>>a.second; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const pair<typC,typD> &a) { return cout<<a.first<<" "<<a.second; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const vector<pair<typC,typD>> &a) { for (auto &x:a) cout<<x<<" "; return cout; }
template<typename typC> ostream &operator<<(ostream &cout,const vector<typC> &a) { int n=a.size(); if (!n) return cout; cout<<a[0]; for (int i=1; i<n; i++) cout<<" "<<a[i]; return cout; }


void solve() {
    long long a,b,c;
    cin >> a >>b >> c;

    long long co = a+b+c;
    if(a+c<2*b || co%3!=0){
        cout << "NO" <<endl;
    }
    else{
        cout <<"YES" <<endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}