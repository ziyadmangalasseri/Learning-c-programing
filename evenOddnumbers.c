
#include <stdio.h>


#include <stdio.h>

int main()
{
    int array[100],even[100],odd[100],e=0,o=0,i,limit;


 printf("enter limit\t");
    scanf("%d",&limit);

    printf("enter your values\n");
      for(i=0;i<limit;i++){
       scanf("%d",&array[i]);
      }

       for(i=0;i<limit;i++){
        if(array[i]%2==0){
          even[e]=array[i];
          e++;
        }else{
          odd[o]=array[i];
          o++;
        }
       }


       printf("even number is :-");
       for(i=0;i<e;i++){
        printf("%d\t",even[i]);

       }printf("\nodd numbers is :-");
       for(i=0;i<o;i++){
        printf("%d\t",odd[i]);
       }

     
       
 return 0;
}