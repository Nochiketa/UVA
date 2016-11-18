#include<iostream>
#include<cstdio>
using namespace std;
long long int mac91(long long int a)
{
    return a>=101 ? a-10 : mac91(mac91(a+11));
}
int main()
{
    long long int N;
    while(scanf("%lld", &N)==1)
    {
        if(N==0) break;
        cout<<"f91("<<N<<") = "<< mac91(N) <<endl;
    }

    return 0;
}
