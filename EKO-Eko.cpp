#include<bits/stdc++.h>
using namespace std;
const int N =1e9;
int n;
long long m;
vector<int> tree(n);
bool searchwood(int h){
    long long wood=0;
    for(int i=0;i<n;i++){
        if(tree[i]>=h){
        wood+=tree[i]-h;
        }
    }
    return wood>=m;

}
int main(){
    cin >> n >> m;
    tree.resize(n);
    for(int i=0;i<n;i++){
        cin >> tree[i];
    }
    long long lo=0,hi= 1e9 ,mid;
    while (hi-lo>1)
    {
        mid = lo+(hi-lo)/2;
        if(searchwood(mid)){
            lo=mid;
        }
        else{
            hi=mid;
        }
    }
    if(searchwood(hi)){
        cout << hi <<endl;
    }
    else{
        cout << lo <<endl;
    }
    
}