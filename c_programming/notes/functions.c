// RV 7th Function Notes
#include <stdio.h>
void birthday(char* name, int age){
    printf("Happy Birthday to you!\n");
    printf("Happy Birthday to you!\n");
    printf("Happy Birthday dear %s!\n", name);
    printf("Happy Birthday to %s you are %d!\n", name, age);
}

int mul(int x, int y){
    return x *y;
}

float get_number(char* type){
    float value;
    printf("How many percent %s do youy have: ");
    scanf("%f", &value);
    return value;
}

int main(void){
    birthday("Jesus", 15);
    birthday("Gwen", 14);
    birthday("Cecily", 16);
    int product = mul(8,5);
    printf("%d\n", product);
    printf("%d\n", mul(4,6));
    float pencils = get_number("pencils");
    float notebooks = get_number("notebooks");
    printf("You have %.2f pencils and %.2f notebooks!", pencils, notebooks);
    return 0;
}
//1 What a function is
// a section of code that won't work until it's called
//2 Why we use functions
//so we can use one thing multiple times
//3 How to write a function in C
//void birthday(void){
//    printf("Happy Birthday to you!\n");
//    printf("Happy Birthday to you!\n");
//    printf("Happy Birthday dear Jesus!\n");
//    printf("Happy Birthday to Jesus you are 15!\n");
//}
//4 What are arguments and parameters?
//perameters is when we define and arguments when we call
//5 How do arguments and parameters work together?
//perameter are variables in the functions, argument sets the variables
//6 How to use parameters and arguments in C
//void birthday(char* name, int age){
//    printf("Happy Birthday to you!\n");
//    printf("Happy Birthday to you!\n");
//    printf("Happy Birthday dear %s!\n", name);
//    printf("Happy Birthday to %s you are %d!\n", name, age);
//}
//7 What are return statements?
// where we take a specific value and we place it where we call the function
//8 How do return statements change how you define a function in C?
//if you dont return something you type void, if you do you type float or char
//9 What do return statements do with the information?
/// They return it to the location where they were called
