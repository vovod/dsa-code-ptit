#include <bits/stdc++.h>
// #include <iostream>
// #include <map>
// #include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
int main()
{
    string s;
    vector<int> st;
    while (cin >> s)
    {
        int n;
        if (s == "push")
        {
            cin >> n;
            st.push_back(n);
        }
        else if (s == "pop")
        {
            st.pop_back();
        }
        else if (s == "show")
        {
            if (st.size() == 0)
                cout << "empty" << endl;
            else
            {
                for (int i = 0; i < st.size(); i++)
                    cout << st[i] << " ";
                cout << endl;
            }
        }
    }
}