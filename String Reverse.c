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