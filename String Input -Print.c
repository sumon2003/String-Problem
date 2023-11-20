/*
Write a program in C to input a string and print it.

Test Data :
Input the string : Welcome, w3resource

Expected Output :

The string you entered is : Welcome, w3resource 
*/
#include<stdio.h>
#include<string.h>
int main(){
    
    char str[100];
    printf("Input the string : ");
    fgets(str, sizeof str, stdin);
    printf("The string you entered is : %s\n",str);

  return 0;  
}