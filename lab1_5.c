#include <stdio.h>
int main()
{
    int n,N,i,M=0,position;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&N);
        if(M<N)
        {
            M = N;
            position = i;
        }
    }
    printf("%d %d",position,M);
}
