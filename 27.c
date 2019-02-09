#include <stdio.h>
#include<string.h>
int main() 
{
    char a[10];
    int f=0,i;
    scanf("%s",a);
    int n=strlen(a);
    for(i=0;i<n;i++)
    {
        if(a[i]>='0'&&a[i]<='9')
        {
            f=0;
        }
        else
        {
            f=1;
            printf("no");
            break;
        }
    }
    if(f==0)
    {
        printf("yes");
    }
    return 0;
}
