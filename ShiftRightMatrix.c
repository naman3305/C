#include<stdio.h>

int main()
{
    int mat[10][10],i,j,n;
    int k;

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    scanf("%d",&k);
      j = 0;
    while (j < n) {

        // Print elements from index k
        for ( i = k; i < n; i++)
            printf("%d ", mat[j][i]);

        // Print elements before index k
        for ( i = 0; i < k; i++)
            printf("%d ", mat[j][i] );

        printf("\n");
        j++;
    }
    return 0;
}
