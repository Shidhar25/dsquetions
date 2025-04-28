// 3.Given a sorted integer array containing duplicates, count occurrences of a given number. If the element is not found in the array, report that as well. Use Linear Search.

#include<bits./stdc++.h>
using namespace std;

int LinearSearch(vector<int> a,int key){
    int result=0;
    for(int i=0;i<a.size();i++){
        if(a[i]==key){
            result++;
        }
    }
    return result;
}
int main(){
    vector<int> a={1,2,3,3,3,4,5,6};
    int key = 3;
    if(LinearSearch(a,key)!=0){
        cout << LinearSearch(a,key) <<endl;
    }
    else{
        cout << "Result not found \n";
    }
}