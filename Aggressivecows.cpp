#include<bits./stdc++.h>
using namespace std;
const int N = 1e5+10;
int n,cows;
int position[N];


bool canPlacecows(int minDist){
    int lastdist=-1;
    int cow_ct = cows;
    for(int i=0;i<n;i++){
        if(position[i]-lastdist>=minDist || lastdist==-1){
            cow_ct--;
            lastdist = position[i];
        }
        if(cow_ct==0) break;
    }
    return cow_ct==0;
}
int main(){
    int t;
    cin >> t;
    
    while (t--)
    {
        cin >> n >> cows;
        for(int i=0;i<n;i++){
            cin >> position[i];
        }
        sort(position,position+n);
        int lo=0, hi=1e9,mid;
        while (hi-lo>1)
        {
            int mid = lo+(hi-lo)/2;
            if(canPlacecows(mid)){
                lo = mid;
            }else{  
                hi = mid-1  ;
            }
        }
        if(canPlacecows(hi)){
            cout << hi <<endl;
        }
        else{
            cout << lo <<endl;  
        }
        

    }
    

}