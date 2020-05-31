/*Problem category :Beginners Problem
Problem name : Knights in Chessboard
Link : http://lightoj.com/volume_showproblem.php?problem=1020
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long m,n,i,j=1,ans,big,t;
    cin>>t;
    while(t--)
    {
        cin>>m>>n;
          cout << "Case " << j++ << ": " ;
    ans=m*n;
    if(m==1||n==1)
    {
      //ans=max(m,n);
      cout<<max(m,n)<<endl;
    }
    else if(m==2||n==2)
    {
            big=max(m,n);
            ans=big;
            if(big%4==1||big%4==3)ans++;
             if(big%4==1)ans+=2;
             cout<<ans<<endl;
    }
    else if(ans%2==1)
        {
            ans=ans/2+1;
        cout<<ans<<endl;
        }
        else
            cout<<ans/2<<endl;
    }


}
