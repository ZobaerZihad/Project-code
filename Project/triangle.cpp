/*Problem category : Binary search
Problem name : Triangle partitioning
Link : http://lightoj.com/volume_showproblem.php?problem=1043
*/
#include<bits/stdc++.h>
using namespace std;

double triangle(double ab,double ac,double bc,double ad)
{
    double ae,de,s1,s2,largeTriangleArea,smallTriangleArea,trapheziumArea, ratio;
     ae = (ad*ac)/ab;
    de = (ad*bc)/ab;

    s1 = (ab+ac+bc)/2.0;
    s2 = (ad+ae+de)/2.0;
    largeTriangleArea = sqrt(s1 * (s1-ab) * (s1-ac) * (s1-bc));
    smallTriangleArea = sqrt(s2 * (s2-ad) * (s2-ae) * (s2-de));
    trapheziumArea = largeTriangleArea - smallTriangleArea;

    ratio  = smallTriangleArea/trapheziumArea;
    return ratio;
}
double bs(double ab,double ac,double bc,double ratio1)
{
    double low,high,mid,ad;
    low=0.0;
    high=ab;
    for(int i=0;i<100;i++)
    {
        mid=(low+high)/2.0;
        ad=mid;
        if(triangle(ab,ac,bc,ad)>ratio1)
            high=mid;
        else
            low=mid;
    }
    return ad;
}
int main()
{
    double ab,ac,bc,ratio1,ans;
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>ab>>ac>>bc>>ratio1;
    ans=bs(ab,ac,bc,ratio1);
    cout<<"Case "<<i<<": "<<fixed<<setprecision(10)<<ans<<endl;
    }

}
