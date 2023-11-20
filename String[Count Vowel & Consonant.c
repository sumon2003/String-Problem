/*
Write a program in C to count the total number of vowels or consonants in a string.

Test Data :
Input the string : Welcome to w3resource.com

Expected Output :

The total number of vowel in the string is : 9 
The total number of consonant in the string is : 12 
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define str_size 100 //Declare the maximum size of the string

int main()
{
    char str[str_size];
    int i, length, vowel, consonant;
	
       printf("\n\nCount total number of vowel or consonant :\n");
       printf("----------------------------------------------\n"); 	
       printf("Input the string : ");
       fgets(str, sizeof str, stdin);	

    vowel = 0;
    consonant = 0;
    length = strlen(str);

    for(i=0; i<length; i++)
    {

        if(str[i] =='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        {
            vowel++;
        }
        else if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            consonant++;
        }
    }
    printf("\nThe total number of vowel in the string is : %d\n", vowel);
    printf("The total number of consonant in the string is : %d\n\n", consonant);
}
