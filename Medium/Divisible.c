/* You need to know if a number is divisible by each of a group of other numbers. If you are given the number and the group of other numbers,
you will test to make sure that it is divisible by all of them.   
 
Task:  
Test your number against all of the other numbers that you are given to make sure that it is divisible by them. 
 
Input Format:  
Two inputs: an integer value (the number you are testing) and a string of variable length of the integers that you should test against separated by spaces. 
 
Output Format:  
A string that says 'divisible by all' or 'not divisible by all'. 
 
Sample Input:  
100 
2 5 10 
 
Sample Output:  
divisible by all

Explanation:  
100 is divisible by 2, 5, and 10. */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    int input_num;
    scanf("%d\n", &input_num);
    
    char input_string[256];
    fgets(input_string, 256, stdin);
    
    int var = 0;
    
    for(char *token=strtok (input_string," "); token != NULL; token = strtok(NULL, " ")){
       var = atof(token);
       if(input_num % var != 0){
           printf("not divisible by all");
            return 0;
       }
        
    }
    
    printf("divisible by all");
    return 0;
}
