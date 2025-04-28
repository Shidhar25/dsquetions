#include<bits./stdc++.h>
using namespace std;


void selection_sorting(vector<int> a){
    int n= a.size();
    for(int i=0;i<n-1;i++){
        int mini=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[mini]){
                mini=j;
            }
        }
        swap(a[mini],a[i]);
    }
    for(int i=0;i<n;i++){
        cout << a[i] <<" " ;
    }
    cout << "\n" ;
}
    void bubble_sorting(vector<int> a){
        int n= a.size();
        for(int i=n-1;i>=1;i--){
            int didswap=0;
            for(int j=0;j<=i-1;j++){
                if(a[j]>a[j+1]){
                    swap(a[j],a[j+1]);
                    didswap=1;
                }
            }
            if(!didswap){
                break;
            }
        }
    for(int i=0;i<n;i++){
        cout << a[i] <<" " ;
    }
    cout << "\n" ;
}

void insertion_sorting(vector<int> a){
    int n= a.size();
    for(int i=0;i<=n-1;i++){
        int j=i;
        while (j>0 && a[j-1]>a[j])
        {
            swap(a[j-1],a[j]);
            j--;
        }
        
    }
    for(int i=0;i<n;i++){
        cout << a[i] <<" " ;
    }
    cout << "\n" ;
}
int main(){
    vector<int> a = {10,30,2,3,4,6,7};
    insertion_sorting(a);

}