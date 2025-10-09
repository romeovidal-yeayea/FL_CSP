// RV 7th String note
#include <stdio.h>
#include <string.h>

int main(void){
    char name[] = "Andrew";
    char last_name[25];

    printf("Tell me your last name: \n");
    scanf("%s", last_name);
    char full_name[50];
    printf("[%s]\n", full_name);
    strcat(full_name, last_name);
    printf("[%s]\n", full_name);

    printf("%c", last_name[0]);
    last_name[0] = 'R';

    strcat(full_name, " ");
    printf("[%s]\n", full_name);

    strcat(full_name, last_name);
    printf("[%s]\n", full_name);

    printf("Your name is %s %s", name, last_name);
    printf("%zu", strlen(name));
    printf("%zu\n", sizeof(name));

    return 0;
}

//1. What is the difference between a string and a character?
//A character is a single symbol, while a string is a sequence of characters
//2. What types of quotation marks do we need for a string?
//For strings, you need to use a pair of matching quotation marks, either single (') or double (")
//3. What library do we need to include to access the string functions in C?
//To access the standard string functions in C, such as strlen(), strcpy(), strcat(), and strcmp(), you need to include the <string.h> header file at the beginning of your C program.
//4. List functions the library allows us to use.
//Strlen, Sizrof, strcat
//5. How do we concatenate strings in C?
// strcat
// 6.How do we get individual characters from a string in C?
//  printf("%c", last_name[0]);