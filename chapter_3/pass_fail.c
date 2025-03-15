//Pass or fail

#include<stdio.h>
int main()
{
int sub1,sub2,sub3,total;
float average;
printf("Enter the marks of subjects 1,2,3: ");
scanf("%d%d%d",&sub1,&sub2,&sub3);
total= sub1+sub2+sub3;
average= total/3;
printf("Total marks of three subjects is: %d\n",total);
printf("Average of three subjects is: %.2f\n",average);
if(sub1<33||sub2<33||sub3<33)
{
    printf("You are failed due to less marks in individual subjects\n");
}
else if(average>40.0){
    printf("You are passed due to average marks\n");
}
else{
    printf("You are failed due to average marks\n");
}
return 0;
}