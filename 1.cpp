// 1.Given a sorted array of non-negative distinct integers, find the smallest missing non-negative element in it. Use Binary Search.
#include<bits./stdc++.h>
using namespace std;

int binarySearch(vector<int> a){
    int lo=0 , hi=a.size()-1;
    while (hi-lo>=0)
    {
        int mid = lo+(hi-lo)/2;
        if(a[mid]==mid){
            lo = mid+1;
        }
        else{
            hi = mid-1;
        }
    }
    return lo;

    
}

int main(){
    vector<int> a = {0, 1, 2, 6, 9, 11, 15};
    cout << binarySearch(a) <<endl;
}