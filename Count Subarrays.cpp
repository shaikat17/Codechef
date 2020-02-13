//Problem Link: https://www.codechef.com/problems/SUBINC



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

    freopen("input.txt", "r", stdin);

    T
    {
        ll n;
        cin>>n;

        ll ar[n];

        for(ll i=0; i<n; i++)
            cin>>ar[i];

        ll cnt[n] = {0};
        ll sm=0;
        cnt[0] = 1;
        sm += cnt[0];
        for(ll i=1; i<n; i++)
        {
            if(ar[i]>=ar[i-1])
                cnt[i] = 1+cnt[i-1];
            else
                cnt[i]=1;

            sm+=cnt[i];
        }

        cout<<sm<<endl;
    }




    return 0;
}
