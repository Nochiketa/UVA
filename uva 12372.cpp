#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int T,L,W,H;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        cin>>L>>W>>H;
        cout<<"Case "<<i<<": ";
        if(L>20 || W>20 || H>20) cout<<"bad"<<endl;
        else cout<<"good"<<endl;
    }
    return 0;
}
