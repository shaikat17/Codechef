Problem Link: https://www.codechef.com/problems/DEVUGRAP

#include<bits/stdc++.h>
using namespace std;

#define T int t; cin>>t; while(t--)
#define vll vector<long long>
#define ll long long
#define read(t) ll t; cin>>t;
#define FAST ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)


int main()
{
    

    FAST;
    //cout<<fixed<<setprecision(2);


   T
   {
       long long n, k;
       cin>>n>>k;

       long long ans=0, r, x;

       for(int i=0; i<n; i++)
       {
           r=0;
           cin>>x;

           r = x%k;

           if(x>=k) ans += min(r, k-r);
           else ans += (k-r);
       }

       cout<<ans<<endl;


          }


   return 0;
}
