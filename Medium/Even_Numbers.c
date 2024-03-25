/* Given a list of numbers, you want to take out all of the odd ones and leave just the even ones. 
 
Task:  
Evaluate each number in your list to see if it is even or odd. Then, output a new list that only contains the even numbers from your original list. 
 
Input Format:  
A string that includes all of the integer values in your list separated by spaces. 
 
Output Format:  
A string that includes all of the even integer values from your first list separated by spaces. 
 
Sample Input:  
8 10 19 25 5 16 12 
 
Sample Output:  
8 10 16 12

Explanation:  
Your new list would only contain the even numbers (8, 10, 16, and 12) and would not include the odd ones (19, 25, and 5). Note, that both, input and output, are strings. */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    int size = 256;
    char input_string[size];
    fgets(input_string, size, stdin);
    int var=0;
    

///writing to an array before printing 
    int i=0;
    char *output_pointer[size];
    for(char *token=strtok (input_string, " "); token != NULL; token = strtok(NULL, " ")){
        var = atoi(token);      
        if(var % 2 == 0){
            output_pointer[i] = token;
            ++i;
        }
    }
    for(int j=0; j<i; ++j){
        printf("%s ", output_pointer[j]);
    }
    
    return 0;
}
   
    
 /*   
 //////////with strcpy()  
    int i=0;
    char output_pointer[size][size];
    for(char *token=strtok (input_string, " "); token != NULL; token = strtok(NULL, " ")){
        var = atoi(token);      
        if(var % 2 == 0){
            strcpy(output_pointer[i], token);
            ++i;
        }
    }
    for(int j=0; j<i; ++j){
        printf("%s ", output_pointer[j]);
    }
    
    return 0;
}

*/
 /*   
 //////// printf() at once

    for(char *token=strtok (input_string, " "); token != NULL; token = strtok(NULL, " ")){
        var = atoi(token);
        if(var % 2 == 0){
            printf("%d ", var);
        }
    }
    return 0;
} */
