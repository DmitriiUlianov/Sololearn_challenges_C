/* You are given a word and want to split it into even parts based on a number that is provided, each half being the size of the number. 
 
Task:  
Write a program that takes in a string, and a number as input.  
Split the string into even parts sized by the number, and output the parts separated by hyphens.  
The last part of the output will be any leftover, as the input string might not split into the provided parts evenly. 
 
Input Format:  
Two inputs: a string and an integer. 
 
Output Format:  
A string, representing the hyphen-separated parts. 
 
Sample Input:  
hello 
2 
 
Sample Output:  
he-ll-o

Explanation: 
We split the word "hello" into 2-sized parts. The last letter o was leftover, resulting in the output he-ll-o. */

#include <stdio.h>
#include <string.h>

int main() {
/*
    char input[256];
    scanf("%s", input);
    int num;
    scanf("%d", &num);
    int j=0;
    char output[256]={0};
    
    int num_original = num;
    int length = strlen(input);
    
    for(int i=0; i<length; ++i){
        if(i < num){
            output[j++]=input[i];
            //printf ("%c", input[i]);
        }
        if(i == num){
            //printf ("-");
            //printf ("%c", input[i]);
            output[j++]='-';
            output[j++]=input[i];
            num=num+num_original;
        }
    }
    printf ("%s", output);
    return 0;
}

*/

///// with while
/*
    char input[256];
    int number;
    scanf("%s %d", input, &number);

    int length = strlen(input);
    char* output = input;       
    int counter = 0;            
    while (*output) {     
        printf("%c", *output++);
        ++counter;              
        if (counter == number && output<input+length){
            counter = 0;        
            printf("-");        
        }                       
    }                           
    return 0;
}
*/

/// with for
/*
char input[256];
    int number;
    scanf("%s %d", input, &number);

    int length = strlen(input);
    char* output;       
    int counter = 0;                
    for(output = input; output<input+length;){  
        printf("%c", *output++);
        ++counter;              
        if (counter == number && output<input+length){
            counter = 0;        
            printf("-");        
        }                       
    }                           
    return 0;
}
*/

    char input[256];
    int number;
    scanf("%s %d", input, &number);

    char* output = input;
    int counter = number + 1;
    while (*output) {
        if (!--counter) {
            printf("-");
            counter = number;
        }
        printf("%c", *output++);
    }

    return 0;
}
