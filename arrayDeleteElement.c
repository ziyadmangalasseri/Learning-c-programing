  int main()
  {
    int limit,num,array[100],i,position;

 printf("enter limit\t");
    scanf("%d",&limit);

    printf("\nenter your values\n");
      for(i=0;i<limit;i++){
       scanf("%d",&array[i]);
      }
      printf("enter position");
      scanf("%d",&position);

     

      if(position>limit){
            printf("it's not availeble");
      }
      for(i=position-1;i<limit;i++){
        array[i]=array[i+1];
      }
      for(i=0;i<limit-1;i++){
        printf("%d\t",array[i]);
      }
        
        
        
        



      return 0;
  }