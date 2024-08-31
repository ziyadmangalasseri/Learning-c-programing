 #include <stdio.h>

 int main(){
  
 int limit,array[100],i,j,flag;

 printf("enter limit\t");
    scanf("%d",&limit);

    printf("\nenter your values\n");
      for(i=0;i<limit;i++){
       scanf("%d",&array[i]);
     } 
      for(i=0;i<limit;i++){
        flag=0;
        for(j=2;j<array[i];j++){
           if( array[i]%j==0){
             flag=1;
             break;
           }
        }
        if(flag==0){
          printf("%d\t",array[i]);
        }
       }
       return 0;
       }
      