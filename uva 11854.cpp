#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int a,b,c;
    while(scanf("%d %d %d", &a, &b, &c)==3)
    {
        if(a!=0 || b!=0 || c!=0)
        {
            if((a*a+b*b)==c*c)
                cout<<"right"<<endl;
            else if((a*a+c*c)==b*b)
                cout<<"right"<<endl;
            else if((b*b+c*c)==a*a)
                cout<<"right"<<endl;
            else cout<<"wrong"<<endl;
        }
    }
    return 0;
}
