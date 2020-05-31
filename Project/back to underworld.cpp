/*Problem category :Bfs
Problem name :back to the underworld
Link:http://lightoj.com/volume_showproblem.php?problem==1009
*/
#include<bits/stdc++.h>
#include<list>
#define SIZE 20005
using namespace std;
list<int>adj[SIZE];
int color [SIZE];
enum {not_visited,b,r};
int main()
{
    int tc,t=0,i,j,k,m,n,mx=0,x,y,q,value,node;
    char ch;
    long long sum;
    cin>>tc;
    for(t=1; t<=tc; t++)
    {
        cin>>n;
        memset(color,0,sizeof color);
        for(i=0; i<SIZE; i++)
            adj[i].clear();
        for(i=0; i<n; i++)
        {
            cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        mx=0;
        for(i=0; i<SIZE; i++)
        {
            if(!adj[i].empty()&&color[i]==not_visited)
            {
                int bl=0,rd=0;
                queue<int>q;
                q.push(i);
                color[i]=b;
                bl++;
                while(!q.empty())
                {
                    node=q.front();
                    q.pop();
                    for(list<int>::iterator it=adj[node].begin(); it!=adj[node].end(); it++)
                    {
                        if(color[*it]==not_visited)
                        {
                            q.push(*it);
                            if(color[node]==b)
                            {
                                color[*it]=r;
                                rd++;

                            }
                            else
                            {
                                color[*it]=b;
                                bl++;
                            }
                        }
                    }
                }
                mx+=max(rd,bl);
            }
        }
        cout<<"Case "<<t<<": "<<mx<<endl;
    }
}
