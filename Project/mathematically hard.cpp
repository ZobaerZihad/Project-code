/*Problem category :Number theory
Problem name : Mathematically hard
Problem link : http://lightoj.com/volume_showproblem.php?problem==1007
*/
#include<bits/stdc++.h>
#define x 10000000
using namespace std;
long long m[x+2];
long long n[x+2];
void totent()
{
    for(int i=2; i<=x; i++)
        m[i]=i;
    for(int i=2; i<=x; i++)
    {
        if(m[i]==i)
        {
            for(int j=i; j<=x; j+=i)
                m[j]-=m[j]/i;
        }
    }
}
void ab()
{
    n[1]=0;
    for(int i=2; i<=x; i++)
    {
        n[i]=m[i];
        n[i]*=m[i];
        n[i]+=n[i-1];
    }
}
int main()
{
    int t,a,b,sum;
    totent();
    ab();
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        cin>>a>>b;
        cout<<"Case "<<i<<": "<<n[b]-n[a-1]<<endl;
    }
}
