#include<stdio.h>
int main(){
 // int mark1 = 89;
 // int mark2 = 90;
 // int mark3 = 87;
 int mark1;
 int mark2;
 int mark3;
 printf("enter the three marks :\n");
 scanf("%d %d %d",&mark1,&mark2,&mark3);
 int avg = (mark1+mark2+mark3)/3;
 printf("The average marks is %d",avg);
 return 0;
}
