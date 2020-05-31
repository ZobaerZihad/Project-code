/*Problem category : Basic math
Problem name :Integer divisibility
Link : http://lightoj.com/volume_showproblem.php?problem=1078
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,t,i=1,j=10,c,d=1;
    cin>>c;
    while(c--)
    {
        cin>>a>>b;
        t=b;
        while((b%a)!=0)
        {
            b=(b*10+t)%a;
            i++;



        }
        cout<<"Case "<<d<<": "<<i<<endl;
        i=1;

        d++;
    }


}
