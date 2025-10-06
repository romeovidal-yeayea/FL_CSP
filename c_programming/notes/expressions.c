// RV 7th Expression Notes
#include <stdio.h>


int main(void){
    int year = 2025;
    float pi = 3.14;
    double long_pi = 3.14159265359;

    printf("%d\n", year);
    printf("%d\n", 8/3);
    printf("%f.2\n", 8.0/3);
    printf("%d\n", (int) pow(2, 4));

    year += 1; //compound assignment operator 
    printf("%d", year);
    year++; //Incrimentor
    printf("%d", year);

    return 0;
}


//1.What is the difference between an integer and a float in C?
// int is a whole number and float a decimal
//2.How does C handle integer division compared to float division?
// giving you a whole number
//3.List the arithmetic operators available in C and their functions.
// + add, - subtract, * multiply, / divide, % 
//4.What is the modulus operator, and how is it used?
//devides and gives you the reminder
//5.How do you round a float to the nearest integer in C?
// after putting a period and then any number
//6.What is type casting in C? Provide an example of explicit type casting.
//where you change the data type
//7.How do compound assignment operators work in C? List three examples.
// they work the same as python
//8.What is the purpose of the math.h library? Name three functions it provides.
// 1. square roots, 2. power, 3. round
//9.How do you print a float with a specific number of decimal places using printf()?
// printf("%f.2\n", 8.0/3);
//10.What happens when you mix integer and float operations in C?
it becomes a float
