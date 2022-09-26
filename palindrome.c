//making an array palindrome and askig no. of attempts required to do so.
#include<stdio.h>
#include<conio.h>
int main(){
    int n,arr[10],m=0;
    printf("no. of elements in an array: ");
    scanf("%d",&n);
    printf("\nenter array elements\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
   for (int i=0,j=n-1; i<=j;)
    {
        if (arr[i] == arr[j])
        {
            i++;
            j--;
        }
        else if (arr[i] > arr[j])
        {
            j--;
            arr[j] += arr[j+1] ;
            m++;
        }
        else   //arr[i]<arr[j]
        {
            i++;
            arr[i] += arr[i-1];
            m++;
        }
    }
printf("\n");
for(int i=0;i<n;i++){
    printf("%d",arr[i]);
}
printf("\nattempts: %d",m);
return 0;
}