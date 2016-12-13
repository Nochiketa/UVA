#include<iostream>
#include<cstdio>
#include<iomanip>
using namespace std;
int main()
{
    int n,t,r,k;
    int a,b,c,d,e,f;
    cin>>t;
    while(t--)
    {
        cin>>n;
        a=(n*567);
        b=a/9;
        c=b+7492;
        d=c*235;
        e=d/47;
        f=e-498;
        r=f%100;
        k=r/10;
        if(k<0) k=k*(-1);
        cout<<k<<endl;
    }

    return 0;
}
