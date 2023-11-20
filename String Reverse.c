/*
Write a program in C to print individual characters of a string in reverse order.

Test Data :
Input the string : w3resource.com

Expected Output :

The characters of the string in reverse are :
m  o  c  .  e  c  r  u  o  s  e  r  3  w 
*/
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Input the string : ");
    fgets(str, sizeof str, stdin);
    int length = strlen(str);
    int i;
    printf("The characters of the string in reverse are : ");
    for(i=length; i>=0; i--){
        printf("%c ",str[i]);
    }
  return 0;  
}
