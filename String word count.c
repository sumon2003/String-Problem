/*//  بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ  //*/
/*//   Md Sumon Hossain Khan   //*/

/*
 Write a program in C to count the total number of words in a string.

Test Data :
Input the string : This is w3resource.com

Expected Output :

Total number of words in the string is : 3 
*/
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Input the string : ");
    fgets(str, sizeof str, stdin);
    int i, count_word = 1;
    while(str[i] != '\0'){
        if(str[i]==' ' || str[i]=='\n' || str[i]=='\t'){
            count_word++;
        }
        i++;
    }
    printf("Total number of words in the string is : %d",count_word-1);
}    
