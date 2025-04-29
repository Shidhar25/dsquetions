#include<bits./stdc++.h>
using namespace std;
int main(){
    vector<int> a = {2, 3, 7, 8, 7, 6, 3, 8, 12, 12, 10};
    int freq=0;
    int mini = INT_MIN;
    for(int i=0;i<a.size();i++){
        if(a[i]>6){
            freq++;
            freq = max(mini,freq);
        }
        else{
            freq=0;
        }
        
    }
    cout << freq <<endl;
}