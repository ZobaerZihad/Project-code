/*Problem category :Beginners Problem
Problem name : Hex-a-bonacci
Link : http://lightoj.com/volume_showproblem.php?problem=1006
*/
#include<bits/stdc++.h>
using namespace std;
int ab(int m,int n,int o);
int bc(int m,int n,int o);
int main()
{
    int a,b,c,t,k,l;
    cin>>a>>b>>c;
    k=ab(a,b,c);
    l=bc(a,b,c);
    cout<<k<<endl;
    cout<<l<<endl;
    if(k>l)
        cout<<k<<endl;
    else
        cout<<l<<endl;

}
int ab(int m,int n,int o)
{
    int z=0;
    if(o!=0&&n!=0)
    {
        while(o>=2)
        {
            z+=3;
            n-=1;
            o-=2;
        }

    }
    if(m!=0&&n!=0)
    {
        while(n>=2)
        {
            z+=3;
            m-=1;
            n-=2;
        }
    }
    return z;
}
int bc(int m,int n,int o)
{
    int y=0;
    if(m!=0&&n!=0)
    {
        while(n>=2)
        {
            y+=3;
            m-=1;
            n-=2;
        }
    }
    if(o!=0&&n!=0)
    {
        while(o>=2)
        {
            y+=3;
            n-=1;
            o-=2;
        }

    }
    return y;
}
