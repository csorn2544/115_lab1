#include <stdio.h>
int main()
{
    int n,i,M=0,position;
    scanf("%d",&n);
    int N[n];
    for(i=1; i<=n; i++)
    {
        scanf("%d",&N[i]);
    }
    for(i=1; i<=n; i++)
    {
        if(M<N[i])
        {
            M = N[i];
            position = i;
        }
    }
    printf("%d %d",position,M);
}
