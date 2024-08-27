#include <stdio.h>
void main(){
    int i,j,a[100],b[100],c[100];
    int limit1,limit2,limit3,t;

    printf("Enter 1st array limit:\n");
    scanf("%d",&limit1);

    printf("Enter 1st array values:\n");
    for(i=0;i<limit1;i++){
        scanf("%d",&a[i]);
    }

    printf("Enter 2nd array limit:\n");
    scanf("%d",&limit2);

    printf("Enter 2nd array values:\n");
    for(i=0;i<limit2;i++){
        scanf("%d",&b[i]);
    }

    limit3=limit1+limit2;

    for(i=0;i<limit1;i++){
        c[i]=a[i];
    }
    for(j=0;j<limit2;j++){
        c[i]=b[j];
        i++;
        
    }
    printf("\nMerged after array is this:\n");
    for(i=0;i<limit3;i++){
        printf("%d\t",c[i]);
    }
}