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
   ll a[n];
   for(int i=0;i<n;i++) cin>>a[i];
   sort(a,a+n);
   ll ans=0;
   for(int i=1;i<n;i++)
   {
       if(a[i]==a[i-1]) ans++;

   }
   cout<<ans<<endl;



 }
return 0;
}

