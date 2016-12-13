#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int a[1000], T, N,count=0, bount=0;
    cin>>T;
    for(int k=1;k<=T;k++)
    {
        //getchar();
        cin>>N;
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<N-1;i++)
        {
            //if(a[i]==a[i+1]) continue;
            if (a[i]<a[i+1]) count++;
            else if (a[i]>a[i+1]) bount++;
        }
        cout<<"Case "<<k<<": ";
        cout<<count<<' '<<bount<<endl;
        count=0; bount=0;
    }
    return 0;
}
