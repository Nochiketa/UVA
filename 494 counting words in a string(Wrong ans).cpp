#include <string.h>
#include <stdio.h>
int main()
{
    char str[1000];
    char *token;
    int count=0;

    while(scanf("%[^\n]",str)==1)
    {
        getchar();
        token = strtok(str, " .!,#$%^&*:;'{}@");

        while( token != NULL )
        {
            if(strlen(token)>0)
            {
                 count++;
            }
            token=strtok(NULL," .!,#$%^&*:;'{}@");
        }
        printf("%d\n", count);
        count=0;
    }
    return 0;
}


