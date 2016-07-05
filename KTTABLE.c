#include<stdio.h>
int main()
{
    int t,n,b,i,c,s;
    scanf("%d",&t);
    while(t!=0)
    { c=0;

        scanf("%d",&n);
        int a[n];
        a[0]=0;
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);

        }
        for(i=1;i<=n;i++)
        {
            s=a[i]-a[i-1];
            scanf("%d",&b);
            if(s>=b)
                c++;
        }
        printf("\n%d",c);
        t--;
    }

return 0;
}
