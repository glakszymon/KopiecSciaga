#include <iostream>
using namespace std;
int t[32];
int n,a,k,temp;
int main()
{
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        cin>>a;
        t[i]=a;
        k=i;
        while(k>1)
        {
            if(t[k/2]<t[k])
            {
                temp=t[k];
                t[k]=t[k/2];
                t[k/2]=temp;
            }
            k/=2;
        }
    }
    k=1;
    for (int i = 1; i <=n; i++)
    {
        cout<<t[i]<<" ";
        if(i+1>k){cout<<endl;k=k*2+1;}
    }
   

    return 0;
}
