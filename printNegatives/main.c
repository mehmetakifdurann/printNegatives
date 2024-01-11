//This 'C' program gets the elements from the user and prints the negative ones.
/*
 Example output :
    Input size:
    Enter the elements:
    10
    20
    211
    -9
    -44
    -1234
    14
    -5
 
 Output:
    The negative numbers in your array:
        -9,-44,-1234,-5.
 ! ! ! THE PROGRAM ENDS ! ! !
 */
// Created by Mehmet Akif DURAN, 11 January, 2024.


#include <stdio.h>
#include <stdlib.h>
#define ARRAY_SIZE 1000

int main(void){ //beginnig of the main function
    
    //variable decleration(s).
    int counter;
    int userArray[ARRAY_SIZE];
    int userSize;
    
    //executable statement(s).
    
    //getting the array size of the user and the elements of the array.
    
    printf("Input size: \n");
        scanf("%d", &userSize);
    
    printf("Enter the elements of the array: \n");
    
    for(counter=0; counter<userSize; counter++)
        scanf("%d", &userArray[counter]);
    
    //checking the negative elements of the array and printing them.
    
    printf("The negative numbers in your array : \n");
    
    for(counter=0 ; counter<userSize; counter++)
    {
        if(userArray[counter]<0)
            printf("%d ", userArray[counter]);
    }
    
        printf("\n");
    
    printf("! ! ! THE PROGRAM ENDS ! ! !\n");
    
    return 0;
}//end of the main function.
