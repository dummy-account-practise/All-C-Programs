#include<stdio.h>
#include<conio.h>
void main(){
    int row,i,j,k=1;
    printf("Enter number of rows to get Floyds triangle: ");
    scanf("%d",&row);
    for(i=0;i<row;i++){
        for(j=0;j<=i;j++){
             printf("%d ",k);
             k++;
        }
        printf("\n");
    }
}
