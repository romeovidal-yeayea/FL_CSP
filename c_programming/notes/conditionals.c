// Rv 7th Conditionals Notes
#include <stdio.h>
#include <string.h>


int main(void){
int grade;
char name[50];
printf("What is your grade percent: ");
scanf("%d", &grade);

printf("What is your name: ");
scanf("%s", &name);

printf("%d\n", strcmp(name, "King von") === 0);
if(name == "King von"){
    printf("You don't get a grade!\n");
}else if(grade >= 90){
printf("You have an A!\n");
}else if(grade >= 80){
    printf("You have a B!\n");
}else if(grade >= 70){
    printf("You hace a C!\n)");
}else{
    printf("Ypu are failing");
}

    return 0;
}

//1. What puts something inside of the “if” statement?
// curly brackets
//2. How are conditions written in C?
//if(name == "King von"){
// printf("You don't get a grade!\n");
//3.How do we write elif conditions in C?
// else if(grade >= 70){
//    printf("You hace a C!\n)");
//4. When do else conditions run?
// when something nefore that was true
//5. What are the 3 logical operators in C?
// && and
// || or
//! not