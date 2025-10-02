// RV 7th variables Notes!
#include <stdio.h>

int main(void){
    int grade = 95; //4 bytes
    float pi = 3.14; // 4 bytes
    double long_pi = 3.1415926358; //8 bytes
    char letter_grade = 'A'; // 1 byte
    char name[] = "Romeo";
    printf(("%s I did it!", name));
    printf("You have a %d, in the class. That is an %c", grade, letter_grade);

    return 0;
}

// 1. What is the main difference between declaring variables in Python and C?
//All variables take some amout of space, in C you have to specify the type of variable that it is
// 2. In C, what is the purpose of specifying a data type when declaring a variable?
// To conserve space                             
// 3. List three common data types used in C and their corresponding format specifiers for printf().
//integers, which which you declare with int. Floats and double
// 4. How do you declare and initialize an integer variable named "age" with the value 25 in C?
//