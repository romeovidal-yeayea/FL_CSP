// RV 7th variables Notes!
#include <stdio.h>

int main(void){
    int grade; //4 bytes
    const float pi = 3.14; // 4 bytes
    double long_pi = 3.1415926358; //8 bytes
    char letter_grade; 'A'; // 1 byte
    char name[] = "Romeo";
    //User input
    printf("What is your grade percentage as a whole number: ");
    scanf("%d", &grade);

    printf("What is your letter grade: ");
    scanf(" %c", &letter_grade);

    printf("%s did it!\n", name);
    printf("You have a %d, in the class. That is an %c\n", grade, letter_grade);

    return 0;
}

// 1. What is the main difference between declaring variables in Python and C?
//All variables take some amout of space, in C you have to specify the type of variable that it is
// 2. In C, what is the purpose of specifying a data type when declaring a variable?
// To conserve space                             
// 3. List three common data types used in C and their corresponding format specifiers for printf().
//integers, which which you declare with int. Floats and double
// 4. How do you declare and initialize an integer variable named "age" with the value 25 in C?
// with int
// 5. What is the difference between printf() and scanf() functions in C?
//printf prints and scanf scans
// 6. How do you add comments in C?
// using "//"
// 7. What is the purpose of the #include <stdio.h> line at the beginning of a C program?
// letting c know that youre planning on printing stuff and geting information.
// 8. In C, what is the significance of the main() function?
// cant use function without it
// 9. What is the difference between %d and %f format specifiers in printf()?
//$d is for digits and numbers, $f is for floats 
// 10. How do you print a newline character in C?
// \n
// 11. What is the purpose of the & symbol when using scanf() to get user input?
//to update and int when you input something
// 12. How do you declare a constant in C? Provide an example.
// constant is just when you put a lid in a box, you can't open it