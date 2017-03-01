#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;
int main()
{
    char str[1000];
    int n=0;
    while(gets(str))
    {
        for(int i=0;i<strlen(str);i++)
        {
            if(str[i]=='"')
            {
                n++;
                if(n%2==1)
                {
                    cout<<"``";
                }
                else cout<<"''";
            }
            else cout<<str[i];
        }
        cout<<endl;
    }
    return 0;
}
