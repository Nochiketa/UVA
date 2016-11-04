#include<iostream>
using namespace std;
int main()
{
    int T,a,b,sum=0;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        cin>>a>>b;
        cout<<"Case"<<' '<<i<<":"<<' ';
        for(int j=a;j<=b;j++)
        {
            if(j%2!=0)
                sum=sum+j;
        }
        cout<<sum<<endl;
        sum=0;
    }
    return 0;
}
