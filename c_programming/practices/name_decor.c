// Rv 7th Name Decorator
#include <stdio.h>
#include <string.h>

    int main(void){
    char name[30];
    char decorated_name[30] = "///)" ;
    char name_decor[20] = "LLLL";
   
    printf("What{s your name\n");
    scanf("%s", decorated_name, name);
    strcat(decorated_name,name_decor);
    printf("%s",decorated_name);

}
