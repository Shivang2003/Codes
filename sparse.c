//Sparse Matrix
#include<stdio.h>
#include<conio.h>
int main(){
    int m,n;
    printf("rows: ");
    scanf("%d",&m);
    printf("columns: ");
    scanf("%d",&n);
    int err[3][m*n],arr[m][n];
    printf("\n enter elements: \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int k=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
        if(arr[i][j]!=0){
            err[0][k]=arr[i][j];
            err[1][k]=i;
            err[2][k]=j;
            k++;
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<k;j++){
            printf("%d ",err[i][j]);
        }
        printf("\n");
    }
    return 0;
}