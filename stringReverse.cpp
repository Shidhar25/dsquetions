// 17.Given a string, reverse it using stack. 
// Input: str = “MITAOE”                         Output: EOATIM

#include<bits./stdc++.h>
using namespace std;
int main(){
    string s= "MITAOE";
    int start =0;
    int end = s.size()-1;
    while (start<=end)
    {
        swap(s[start],s[end]);
        end--;
        start++;
    }
    for(int i=0;i<s.size();i++){
        cout << s[i] << " " ;
    }
}