 #include <stdio.h>

int main()
{


     

  int limit,values[100],i,j,searchkey,flag=0;

  printf("enter limit\t");
  scanf("%d",&limit);
  printf("enter your values\n");

   for(i=1;i<=limit;i++){
    scanf("%d",&values[i]);

   }
   printf("enter search number ");
   scanf("%d",&searchkey);

   for(j=1;j<=limit;j++){
    if(searchkey==values[j]){
        flag=1;
        break;
    }
   }
   if(flag==1){
    printf("your searched number is : %d position",j);
   }else{
    printf(" not found");

   }



    return 0;

}