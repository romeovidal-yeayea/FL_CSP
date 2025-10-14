// Rv 7th Silly Sentences
#include <stdio.h>
#include <string.h>


int main(void){
    char adjective[60];
    printf("Ay wsg, Give me a noun:\n");
    scanf("%s", adjective);
   
    char noun[60];
    printf("Yo bro give me a verb:\n");
    scanf("%s",noun);

    char verb[60];
    printf("Give me a noun:\n");
    scanf("%s", verb);

    printf("The %s %s %sed happily.\n", adjective, noun, verb);

    return 0;
}
