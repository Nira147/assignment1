//array in reverse order
#include<stdio.h>
int main(){

    int n;
    printf("enter the number of elements");
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++){

        printf("enter elements",i);
        scanf("%d",&arr[i]);

    }

    printf("number in reversen order");
    for(int i=0;n<n;i--){

        printf("%d",arr[i]);
    }

    printf("\n")

    return 0;

    

}