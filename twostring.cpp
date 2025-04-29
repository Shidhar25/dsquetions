#include<bits./stdc++.h>
using namespace std;
int main(){
    string s1="computer";
    string s2 = "cat";
    for(int i=0;i<s1.size();i++){
        for(int j=0;j<s2.size();j++){
            if(s2[j]==s1[i]){
                s1[i] = '1';
            }
        }
    }
    for(auto c:s1){
        if(c!='1'){
        cout << c <<endl;
        }
    }
}