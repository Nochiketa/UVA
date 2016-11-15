#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    float H,M;
    float angle;
    while(scanf("%f:%f", &H, &M)==2)
    {
        if(H==0 && M==0 ) break;
        else{
            angle=(((11*M)-(60*H))/2);
            if(angle < 0) angle = 360+angle;
            if(angle>180) angle = 360 - angle;
            printf("%.3f\n", angle);
            angle=0;
        }
    }
    return 0;
}
