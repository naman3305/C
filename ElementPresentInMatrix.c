#include<stdio.h>

int main()
{
    int mat[10][10],r,c,i,search,j,flag=0,smallest,largest;
    scanf("%d %d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        scanf("%d",&mat[i][j]);
    }
    scanf("%d",&search);
      smallest = mat[0][0], largest = mat[r - 1][c - 1];
    if (search < smallest || search > largest)
       flag=0;;
    // set indexes for top right element
 i = 0, j = c - 1;
    while (i < r && j >= 0) {
        if (mat[i][j] == search) {
            printf("%d %d",i,j);
            flag=1;
        }
        if (mat[i][j] > search)
            j--;
        else
            i++;
    }
 if(flag==0)
 printf("Not Found");
}
