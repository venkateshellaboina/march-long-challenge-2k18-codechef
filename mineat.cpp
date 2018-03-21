#include<bits/stdc++.h>
#define ll long long int

using namespace std;
int ans=0;
int solve(int l,int r,int*a,int h,int n)
{
    if(l>r )
    {

        return ans;
    }
    int mid=(l+r)/2,cnt=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%mid!=0)
        {

            cnt+=(a[i]/mid)+1;
        }
        else
        {

            cnt+=(a[i]/mid);
        }

    }
    if(cnt<=h)
    {
        ans=mid;
        return solve(l,mid-1,a,h,n);
    }
    else if(cnt>h)
    {
       return solve(mid+1,r,a,h,n);
    }


}

int main()
{
  int t;
  cin>>t;
  while(t--)
 {
     int n,h;
     cin>>n>>h;
     int a[n],mx=INT_MIN,mi=INT_MAX;
     int sum=0;
     for(int i=0;i<n;i++)
     {

         cin>>a[i];
         sum+=a[i];
         if(a[i]>mx) mx=a[i];


     }
     sort(a,a+n);
     if(n==h)
     {

         cout<<mx<<endl;
     }
     else if(h>n)
    {
        
         int res=solve(1,mx,a,h,n);
         cout<<res<<endl;

     }

 }
return 0;
}

