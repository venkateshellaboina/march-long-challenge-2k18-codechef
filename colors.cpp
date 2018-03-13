#include<bits/stdc++.h>
#define ll long long int

using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
 {
     ll n;
     cin>>n;
     int a[n],b[n];
     for(int i=0;i<n;i++) cin>>a[i];
     for(int i=0;i<n;i++) cin>>b[i];

     int f1=1,f2=1;
     for(int i=0;i<n;i++)
     {
         if(a[i]>b[i])
         {
             f1=0;

         }
         if(a[i]>b[n-i-1])
         {

             f2=0;
         }

     }
     if(f1 && f2)
     {

         cout<<"both"<<endl;
     }
     else if(f1)
     {
         cout<<"front"<<endl;
     }
     else if(f2)
     {

         cout<<"back"<<endl;
     }
     else
     {

         cout<<"none"<<endl;
     }

 }
return 0;
}
