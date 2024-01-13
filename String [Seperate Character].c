/*//  بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ  //*/
/*//   Md Sumon Hossain Khan   //*/

/*
Write a program in C to separate individual characters from a string.

Test Data :
Input the string : w3resource.com

Expected Output :

The characters of the string are : 
w  3  r  e  s  o  u  r  c  e  .  c  o  m 
*/
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Input the string : ");
    fgets(str, sizeof str, stdin);
    int i;
    printf("The characters of the string are : ");
    for(i = 0; str[i] != '\0'; i++){
        printf("%c ",str[i]);
    }
  return 0;  
}
