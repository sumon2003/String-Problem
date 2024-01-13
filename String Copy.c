/*//  بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ  //*/
/*//   Md Sumon Hossain Khan   //*/

/*
Write a program in C to copy one string to another string.

Test Data :
Input the string : This is a string to be copied.

Expected Output :

The First string is : This is a string to be copied.
The Second string is : This is a string to be copied. 
Number of characters copied : 31 
*/
#include<stdio.h>
#include<string.h>

int main() {
    char source[100], destination[100];
    int i;

    // Input the string
    printf("Input the string : ");
    fgets(source, sizeof source, stdin);

    // Copy the string
    for (i = 0; source[i] != '\0'; ++i) {
        destination[i] = source[i];
    }
    destination[i] = '\0'; // Null-terminate the destination string

    // Display the original and copied strings
    printf("The First string is : %s", source);
    printf("The Second string is : %s", destination);

    // Display the number of characters copied
    printf("Number of characters copied : %d", i);

    return 0;
}
