//Problem Link: https://www.codechef.com/problems/STICKS

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
       int n;
       cin>>n;
       int arr[n];

       int a[1010]={0}, b[1010]={0};

       int x, k=0;

       for(int i=0; i<n; i++)
       {
           cin>>x;
           a[x]++;

           if(a[x]==2 || a[x]==4) b[k++]=x;
       }


          sort(b, b+k);

          if(k<2) cout<<"-1\n";
          else cout<<b[k-1]*b[k-2]<<endl;
        }



   return 0;
}
