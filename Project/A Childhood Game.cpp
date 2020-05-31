/*Problem category :Basic math
Problem name : A childhood game
Link : http://lightoj.com/volume_showproblem.php?problem=1010
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,i=1,j;
    string a,b;
    cin>>t;
    while(t--)
    {
        cin>>n>>a;

        n=n%3;
    if(a=="Alice")
    {
        if(n==0||n==2)
            cout<<"Case "<<i<<": "<<"Alice"<<endl;

        else
            cout<<"Case "<<i<<": "<<"Bob"<<endl;
    }
    else
    {
        if(n==1||n==2)
            cout<<"Case "<<i<<": "<<"Bob"<<endl;

        else
            cout<<"Case "<<i<<": "<<"Alice"<<endl;
    }

        i++;
    }


}
