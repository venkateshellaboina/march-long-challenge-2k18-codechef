#include<bits/stdc++.h>
#include<map>
#define ll long long int
using namespace std;
class node
{
    public:
    int z=0,o=0;

};
int main()
{

     int n,q;
     cin>>n>>q;

      int a[n];
      int d[n][31];
      for(int i=0;i<n;i++)
      {

          for(int j=0;j<31;j++)
          {
              d[i][j]=0;
          }
      }
     for(int i=0;i<n;i++)
     {
         cin>>a[i];
         int t=a[i];
         int k=0;
         int t2=1;
         while(t)
         {

             if(t&1)
             {
                 d[i][k]=1;
             }
             k++;
             t=t>>1;

         }

     }
     /*for(int i=0;i<n;i++)
      {

          for(int j=0;j<32;j++)
          {
              cout<<d[i][j]<<" ";
          }
          cout<<endl;
      }*/
     node sum[n][31];
     for(int i=0;i<n;i++)
     {

         for(int j=0;j<31;j++)
         {
             if(i==0)
             {
             if(d[i][j])
             {
                 sum[i][j].o=1;
                 sum[i][j].z=0;
             }
             else
             {
                 sum[i][j].z=1;
                 sum[i][j].o=0;
             }

             }
             else
             {
                 if(d[i][j])
                {
                 sum[i][j].o=sum[i-1][j].o+1;
                 sum[i][j].z=sum[i-1][j].z;
                }
                 else
                {
                 sum[i][j].z=sum[i-1][j].z+1;
                 sum[i][j].o=sum[i-1][j].o;
                }



             }


         }
     }
     /*for(int i=0;i<n;i++)
     {
         cout<<i<<": ";
         for(int j=0;j<4;j++)
         {
             cout<<sum[i][j].z<<" "<<sum[i][j].o<<"   ";


         }
         cout<<endl;
     }*/





     while(q--)
     {
         int l,r;
         cin>>l>>r;
         l--;r--;
        int zeros[31],ones[31];
         int ans=0;
        if(l==0)
        {
            for(int i=0;i<31;i++)
            {

            zeros[i]=sum[r][i].z;
            ones[i]=sum[r][i].o;
            }

        }
        else
        {


          for(int i=0;i<31;i++)
          {
             zeros[i]=sum[r][i].z-sum[l-1][i].z;
             ones[i]=sum[r][i].o-sum[l-1][i].o;

          }
        }

         for(int i=0;i<31;i++)
         {

             if(zeros[i]>ones[i])
             {

                 ans=ans|(1<<i);
             }


         }
         cout<<ans<<endl;


     }




return 0;
}

