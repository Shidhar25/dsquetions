#include <bits./stdc++.h>
using namespace std;
int main()
{
    string s = "23+54-*";
    vector<int> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (st.empty() || isdigit(s[i]))
        {
            st.push_back(s[i] - '0');
        }
        else
        {
                int val1 = st.back();
                st.pop_back();
                int val2 = st.back();
                st.pop_back();
                switch (s[i])
                {
                case '+':
                    st.push_back(val1 + val2);
                    break;
                case '-':
                    st.push_back(val1 - val2);
                    break;
                case '*':
                    st.push_back(val1 * val2);
                    break;
                case '/':
                    st.push_back(val1 / val2);
                    break;
                }
            }
    }
    cout << st.back() << endl;
}