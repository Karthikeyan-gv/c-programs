#include<stdio.h>
int main(){
 int num;
 printf("Enter the Number to check:");
 scanf("%d",&num);
 if(num>0){
 printf("The number is Postive");
 }
 else if(num<0){
 printf("The number is Negative");
 }
 else{
 printf("The entered number is Zero");
 }
 return 0
