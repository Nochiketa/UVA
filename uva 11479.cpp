#include<iostream>
using namespace std;
int main()
{
    long int T,a,b,c;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        cin>>a>>b>>c;
        cout<<"Case"<<' '<<i<<":"<<' ';
        if((a+b)<=c || (b+c)<=a || (c+a)<=b || a<=0 || b<=0 || c<=0)
            cout<<"Invalid"<<endl;
        else
        {
        if(a==b && b==c)
            cout<<"Equilateral"<<endl;
        else if(a==b || b==c || c==a)
            cout<<"Isosceles"<<endl;
        else
            cout<<"Scalene"<<endl;
        }
    }
    return 0;
}
