#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int T,a,b,c;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
            cin>>a>>b>>c;
            cout<<"Case "<<i<<": ";
            if(a>b && a<c) cout<<a<<endl;
            else if(a<b && a>c) cout<<a<<endl;
            else if(b<a && b>c) cout<<b<<endl;
            else if(b>a && b<c) cout<<b<<endl;
            else if(c<b && c>a) cout<<c<<endl;
            else if(c>b && c<a) cout<<c<<endl;

    }
    return 0;
}

