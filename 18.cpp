#include<bits./stdc++.h>
using namespace std;
int main(){
    string s="[()]{}{[()()]()";
    vector<char> st;
    for(int i=0;i<s.size();i++){
        if(st.empty()){
            st.push_back(s[i]);
        }
        else{
            if((st.back()=='[' || st.back() == '(' || st.back() == '{' )&& (s[i] == ']' || s[i] == ')' || s[i] == '}' )){
                st.pop_back();
            }
            else{
                st.push_back(s[i]);
            }
        }
    }
    if(st.empty()){
        cout << "Balanced" << endl;
    }
    else{
        cout << "NonBalanced" <<endl;
    }
}