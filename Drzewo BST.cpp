#include <iostream>
#include <cmath>

using namespace std;
int t[10000000];


int main()
{
   int n,a,x,l=0,p=1;
   cin>>n;
   cin>>t[1];
   for(int i=1;i<n;i++)
   {
       cin>>a;
       x=1;
       while(t[x]>0)
       {
           if(a<t[x])
           {
               x=x*2;
           }
           else if(a>=t[x])
           {
               x=x*2+1;
           }
           
           
       }
       t[x]=a;
       p=max(p,x);
   }
   
   l=(log(p))/(log(2));
   for (int i = 1; i < pow(2,l+1); i++)
   {
       cout<<t[i]<<" ";
   }

    return 0;
}
