#include <stdio.h>
int main()
{
    int n,m,M;
    scanf("%d",&n);
    int N[n];
    for (int i=0; i<n; i++)
    {
        scanf("%d",&N[i]);
    }
    for(int i=0; i<n; i++)
    {
        if(M<N[i])
        {
            M = N[i];
        }
        if(N[i] < m)
        {
            m = N[i];
        }
    }
    printf("%d %d",m,M);
}
