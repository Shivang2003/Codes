#include<stdio.h>
#include<conio.h>
int main ()
{
    int m,n,a[10][10];
    printf("enter the no. of rows: ");
    scanf("%d",&m);
    printf("enter the no. of columns: ");
    scanf("%d",&n);
    printf("enter the elements: ");
    for(int i=0;i<m;i++){
        printf("\nrow %d\n",i+1);
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\ntraspose of matrix is:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}