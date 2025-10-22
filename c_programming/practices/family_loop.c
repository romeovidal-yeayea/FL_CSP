//RV 7th My Family loop

#include <stdio.h>



int main() {


    char *family[] = {"Tiare", "Cristian", "Rafaella", "Me", "Erika"};

    int size = 5; 




    for (int i = 0; i < size; i++) {

        printf("Hello, %s!\n", family[i]);

    }



    return 0;

}