#include <bits./stdc++.h>
using namespace std;

int binarySearch(vector<int> a, int key)
{
    int n = a.size();
    int lo = 0;
    int hi = n - 1;
    int mid;
    while (hi - lo > 1)
    {
        mid = lo+ (hi - lo) / 2;
        if (a[mid] < key)
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid;
        }
    }
    if (a[lo] == key)
    {
        return lo;
    }
    else if (a[hi] == key)
    {
        return hi;
    }
    else
    {
        cout << "not found" << endl;
        return -1;
    }
}
int lower_bound(vector<int> a,int el){
    int n=a.size();
    int hi=n-1;
    int lo=0;
    int mid;
    while (hi-lo>1)
    {
        mid = lo+(hi-lo)/2;
        if(a[mid]<el){
            lo = mid+1;
        }
        else{
            hi = mid;
        }
    }
    if(a[lo]>=el){
        return lo;
    }
    if(a[hi]>=el){
        return hi;
    }
    return -1;
    
}
int upper_bound(vector<int> a,int el){
    int n=a.size();
    int hi=n-1;
    int lo=0;
    int mid;
    while (hi-lo>1)
    {
        mid = lo+(hi-lo)/2;
        if(a[mid]<=el){
            lo = mid+1;
        }
        else{
            hi = mid;
        }
    }
    if(a[lo]>el){
        return lo;
    }
    if(a[hi]>el){
        return hi;
    }
    return -1;
    
}
double eps=1e-6;

void sqrtof(double x){
    double lo=1;
    double hi=x;
    double mid;
    while (hi-lo>eps)
    {
        mid = lo+(hi-lo)/2;
        if(mid*mid < x){
            lo = mid;
        }
        else{
            hi = mid;
        }
    }
    cout << lo << endl;
    
}
int main()
{
    vector<int> a = {10,20,30,40,50,60,70,80};
    // int ans = binarySearch(a, 70);
    // cout << ans;
    int ll=lower_bound(a,50);
    cout << ll << " " << a[ll] <<"\n" ;
    int ub=upper_bound(a,50);
    cout << ub << " " << a[ub] << endl;
    sqrtof(11);
}