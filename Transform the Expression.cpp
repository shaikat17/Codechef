//Problem Link: https://www.codechef.com/problems/ONP


#include<bits/stdc++.h>
using namespace std;

#define T int t; cin>>t; while(t--)
#define vll vector<long long>
#define ll long long
#define read(t) ll t; cin>>t;
#define FAST ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)

vll vec;
vector<bool> arr;


int main()
{
    //freopen("input.txt", "r", stdin);

    FAST;
    T
    {
        string s;

        cin>>s;

        stack<char> st;

        for(int i=0; i<s.size(); i++)
        {
            if(s[i]>=97 && s[i]<=122)
            {
                cout<<s[i];
            }
            if(s[i]==42 || s[i]==43 || s[i]==45 || s[i]==47 || s[i]==37 || s[i]==94) st.push(s[i]);

            if(s[i]==')')
            {
                cout<<st.top();
                st.pop();
            }
        }
        cout<<endl;
    }
    return 0;
}
