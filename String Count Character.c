/*//  بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ  //*/
/*//   Md Sumon Hossain Khan   //*/

/*
 Write a program in C to count the total number of alphabets, digits and special characters in a string.

Test Data :
Input the string : Welcome to w3resource.com

Expected Output :

Number of Alphabets in the string is : 21 
Number of Digits in the string is : 1 
Number of Special characters in the string is : 4 ['\0' is also a secial Character]
*/
#include<stdio.h>
#include<string.h>

int main() {
    char str[100];
    int alphabets = 0, digits = 0, specials = 0;

    // Input the string
    printf("Input the string : ");
    fgets(str, sizeof str, stdin);

    // Count the characters
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            alphabets++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        } else {
            specials++;
        }
    }

    // Display the results
    printf("Number of Alphabets in the string is : %d\n", alphabets);
    printf("Number of Digits in the string is : %d\n", digits);
    printf("Number of Special characters in the string is : %d\n", specials);

    return 0;
}
