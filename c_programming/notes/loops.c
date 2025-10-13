// Rv 7th Loops notes
#include <stdio.h>

int main(void){
    int nums[] = {1,654,4,56,8,742,5}; //Arrays
    char candies[][20] = {"Kitkat", "Skittles", "Milky way", "Milk", "Water candy", "Grass", "carpet"};

    for(int x = 0; x < 7; x++){
        printf("%d\n", nums[x]);

        for(int i = 0; i < 5; i++){
            printf("%s, is my favorite candy!\n", candies[1]);
        }
        for(int num = 1; num < 11; num++){
            printf("%d\n", num);
        }

        int num = 0;
        while(num < 11){
            printf("%d\n", num);
            num++;
        }
    }

    return 0;
}

//Notes
//1 What is a loop? 
//something repeating
//2 What are the two types of loops?
//For and While
//3 What is iteration
// A variable to keep track of how many times it runs
//4 What are arrays? 
//Lists
//5 How do you make lists in C? 
//int nums[] = {1,654,4,56,8,742,5};
//6 How do you make for loops in C? 
//for(int num = 1; num < 11; num++){
//            printf("%d\n", num);
//7 How do you make while loops in C?
//int num = 0;
//        while(num < 11){
//            printf("%d\n", num);
//            num++;
//        }