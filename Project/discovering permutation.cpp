/*Problem category :Basic Recursion
Problem name :Discovering permutation
Link:http://lightoj.com/volume_showproblem.php?problem==1023
*/
#include<bits/stdc++.h>
#define Fastread ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int n,k;
int main()
{
    Fastread
    int t,m=1;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        cout<<"Case "<<m++<<": "<<endl;
        string c="";
        for(int i=0;i<n;i++)
            c+=('A'+i);
        do{
            for(int i=0;i<n;i++)
                cout<<c[i];
                cout<<endl;
                k--;

        }
        while(next_permutation(c.begin(),c.end())&&k);
    }
}

