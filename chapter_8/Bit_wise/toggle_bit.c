#include<stdio.h>
int main()
{

   unsigned int num,pos; 
   printf("Enter the values of number and position: ");
   scanf("%u %u",&num,&pos);
   printf("Before toggling: \n");

   // Display loop
   for(int i=sizeof(num)*8-1;i>=0;i--)
   {
    printf("%d",(num>>i)&1);
    if(i%4==0) printf(" ");
   }
   printf("\n After toggling: \n");
   num ^= (1 << pos);   // Flips bit at pos


   for(int i=sizeof(num)*8-1;i>=0;i--)
   {
    printf("%d",(num>>i)&1);
    if(i%4==0) printf(" ");
   }
   printf("\n");
return 0;
}