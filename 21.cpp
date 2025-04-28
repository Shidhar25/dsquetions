#include<bits/stdc++.h>
using namespace std;

int main() {
    string s = "[ABC[23]][89]";
    stack<char> st;
    int index = -1;

    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '[') {
            st.push('[');
        }
        else if(s[i] == ']') {
            st.pop();
            if(st.empty()) {
                index = i;
                break;
            }
        }
    }
    
    cout << index << endl;
}
