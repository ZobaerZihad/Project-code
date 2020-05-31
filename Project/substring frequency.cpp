/*Problem category : Knuth-Morris-Pratt
Problem name : Substring Frequency
Problem link : http://lightoj.com/volume_showproblem.php?problem==1255
*/
#include<bits/stdc++.h>
char str[1000000];
char sbstr[1000000];
int b[1000000];
using namespace std;
void prekmp(char *sbstr)
{
    const int m=strlen(sbstr);
    int i=0,j=-1;
    b[i]=-1;
    while(i<m)
    {
        while(j>=0&&sbstr[i]!=sbstr[j])
            j=b[j];
        i++;
        j++;
        b[i]=j;
    }
}
int kmp(char *str,char *sbstr)
{
    int i=0,j=0,cnt=0;
    const int n=strlen(str);
    const int m=strlen(sbstr);
    prekmp(sbstr);
    while(i<n)
    {
        while(j>=0&&str[i]!=sbstr[j])
            j=b[j];
        i++;
        j++;
        if(j==m)
        {
            j=b[j];
            cnt++;
        }
    }
    return cnt;
}
int main()
{
    int t,i;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>str>>sbstr;
        cout<<"Case "<<i+1<<": "<<kmp(str,sbstr)<<endl;
    }
}
