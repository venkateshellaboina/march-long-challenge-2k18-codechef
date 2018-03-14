#include<bits/stdc++.h>
#define ll long long int

using namespace std;
int main()
{
  ll t;
  cin>>t;
  while(t--)
 {
     ll n;
     cin>>n;
      ll a[n];

      ll sum[n]={0};
     for(int i=0;i<n;i++)
     {
           cin>>a[i];
         if(i==0)
         {
             sum[0]=a[0];
         }
         else
         {
             sum[i]=a[i]+sum[i-1];
         }


     }
     if(n==1)
      {
          cout<<0<<endl;
          continue;
      }
     /*for(int i=0;i<n;i++)
     {

         cout<<sum[i]<<" ";
     }
     cout<<endl;*/
      ll cnt[n]={0};
       for(int i=0;i<n;i++)
     {
         if(i==0 || i==n-1)
         {
             cnt[i]+=1;
         }
         else
         {
          cnt[i]+=2;
         }
     }
     for(int i=0;i<n;i++)
     {
         for(int j=i+2;j<n;j++)
         {

             if(a[j]>=(sum[j-1]-sum[i]))
             {
                 cnt[i]++;
             }

         }
     }
     for(int i=0;i<n;i++)
     {

         sum[i]=0;
     }
      ll b[n]={0};
     for(int i=0;i<n;i++)
     {
         b[i]=a[n-i-1];
     }

     sum[0]=b[0];
     for(int i=1;i<n;i++)
     {
         sum[i]=b[i]+sum[i-1];
     }
     /*for(int i=0;i<n;i++)
     {

         cout<<sum[i]<<" ";
     }
     cout<<endl;*/
     for(int i=0;i<n;i++)
     {
         for(int j=i+2;j<n;j++)
         {

             if(b[j]>=(sum[j-1]-sum[i]))
             {
                 cnt[n-i-1]++;
             }


         }
     }

     for(int i=0;i<n;i++)
     {
        cout<<cnt[i]<<" ";
     }
     cout<<endl;
 }
return 0;
}

