#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int x, flag = 0;
    scanf("%d", &x);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(a[i][j]==x)flag=1;
        }
    }

    if(flag)
    {
        printf("will not take number\n");
    }
    else{
        printf("will take number\n");
    }

    return 0;
}