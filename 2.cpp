// 2.Given a sorted integer array containing duplicates, count occurrences of a given number. If the element is not found in the array, report that as well. Use Binary Search.
#include<bits./stdc++.h>
using namespace std;

int lastcount(vector<int> a,int key){
    int lo = 0,hi=a.size()-1,mid,result = -1;
    while (lo<=hi)
    {
        mid = lo+(hi-lo)/2;
        if(a[mid]==key){
            result = mid;
            lo = mid+1;
        }
        else if(a[mid]<key){
            lo= mid+1;
        }
        else{
            hi = mid-1;
        }
    }
    return result;
}
int firstcount(vector<int> a,int key){
    int lo = 0,hi=a.size()-1,mid,result = -1;
    while (lo<=hi)
    {
        mid = lo+(hi-lo)/2;
        if(a[mid]==key){
            result = mid;
            hi = mid-1;
        }
        else if(a[mid]>key){
            hi = mid-1;
        }
        else{
            lo = mid+1;
        }
    }
    return result;
    

}
int main(){
    vector<int> a={1,2,4,5,6};
    int key = 3;
    int first = firstcount(a,key);
    int last = lastcount(a,key);
    if(last!=-1 && first!=-1){
        cout << last-first+1;
    }
    else{
        cout <<"Not found" <<endl;
    }
}