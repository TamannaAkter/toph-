#include<bits/stdc++.h>
#define PI acos(-1.0)
using namespace std;
int main()
{
    float t,a,l,r,area,perimtr;
    cin>>t;
    while(t--)
    {
        cin>>a;
        l=sqrt(a);
        r=l/2;
        area=(a-(PI*(r*r)));
        perimtr=2*PI*r;
       printf("%.16f %.16f",area,perimtr);

    }
    return 0;
}
