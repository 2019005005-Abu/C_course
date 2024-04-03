#include<stdio.h>
/*r w >  */
int main(){
      int i,sum=0;
    printf("For Loope\n");
    for (i = 0; i <=6; i++){
       printf("I am a full stack develope =%d\n",i);
    }
     printf("\n\n");
    for ( i = 10; i>=0; i--)
    {
        printf("I am a full stack develope =%d\n",i);
        if (i%2==0){
            printf("Even=%d\n",i);
        }else{
            printf("Odd=%d\n",i);
        }
    }
     printf("\n\n");

     for ( i = 0; i <5; i++)sum+=i;
     printf("Sum of 5 num %d\n",sum);

     for ( i = 0; i <10; i++){
        if (i%2==0){
            printf("%d=Even\n",i);
        }else{
             printf("%d=Odd\n",i);
        }
     }

     for ( i = 0; i <20; i++)
     {
        if (i==15){
            printf("%d",i);
            continue;
        }
        else if (i==19){
            printf("%d",i);
            break;
        }else{
            printf("\nUnvalid\n");

        }
        
     }

     //while

     int J=0;
     while (J<5){
        printf("%d\n",J);
        J++;
     }
     printf("\n");
     do{
      printf("%d\n",J);
      J++;
     }while(J<10);

 printf("Quizes:::\n");
     int k;
    for (k = -3; k < -5; k++)
        printf("Hello ");
    
    while (i < 3) {
        i++;
    }
   printf("%d\n",i);
   
    return 0;


}
