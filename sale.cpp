#include<bits/stdc++.h>
#define ll long long int

using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
 {
    cout<<fixed<<setprecision(10);
     int n;
     cin>>n;

     double p[n],q[n],d[n];
     double loss=0;
     for(int i=0;i<n;i++)
     {
         cin>>p[i]>>q[i]>>d[i];
         //p[i]*=q[i];
         double temp=(p[i]*(d[i]/100));
         temp+=p[i];
         temp=(temp-(temp*(d[i]/100)));
         temp=(p[i]-temp)*q[i];
         loss+=temp;
     }
     cout<<loss<<endl;
 }
return 0;
}

