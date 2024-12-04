/**
 * 
1                       1 
1 0                   1 0
1 0 1               1 0 1
1 0 1 0           1 0 1 0
1 0 1 0 1       1 0 1 0 1
1 0 1 0 1 0   1 0 1 0 1 0
1 0 1 0 1 0 1 0 1 0 1 0 1
1 0 1 0 1 0   1 0 1 0 1 0
1 0 1 0 1       1 0 1 0 1
1 0 1 0           1 0 1 0
1 0 1               1 0 1
1 0                   1 0
1                       1
 * 
 * 
 */

#include <stdio.h>

void main () {

    int n = 13 ,k=0;

    for(int i=0;i<n;i++){
            int y=1;
        for(int j=0;j<n;j++){
            if(j<=k || j>=n-1-k){
                if(j<6){
                    if(j%2==0){
                    printf("1 ");
                    }else{
                        printf("0 ");
                    }
                }else{
                    // y=1;
                    printf("%d ",y);
                    y = 1-y;
                }
            }else{
                printf("  ");
            }
        }
            i<6?k++:k--;
        printf("\n");
    }
}