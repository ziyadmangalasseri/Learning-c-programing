
  #include <stdio.h>

 int main(){

  int limit,array[100],i,j,temp,k;

  printf("limit");
  scanf("%d",&limit);
  printf("values");
    for(i=0;i<limit;i++){
      scanf("%d",&array[i]);
    }
    printf("enter k");
    scanf("%d",&k);

    for(i=0;i<k;i++){
      temp=array[0];
      for(j=0;j<limit-1;j++){
        array[j]=array[j+1];
      }array[j]=temp;
    }for(i=0;i<limit;i++){
      printf("%d\t",array[i]);
    }




 }




   