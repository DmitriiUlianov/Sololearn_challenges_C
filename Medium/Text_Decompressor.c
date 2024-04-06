/* You need to decompress text. The compressed version has a number next to each symbol/letter, representing the amount of time that symbol should appear.  
For example, a2b3 is the compressed version of aabbb 
 
Task:  
Write a program that takes the compressed text as input and outputs the decompressed version. 
 
Input Format:  
A single string with letters/symbols, each followed by a number. 
 
Output Format:  
A string, representing the decompressed text. 
 
Sample Input:  
k2&4b1 
 
Sample Output:  
kk&&&&b

Explanation: The letter k appears 2 times, the symbol & - 4 times and the letter b - 1 time. */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    char input[256];
    scanf("%s", &input);
    int length = strlen(input);
    
    for(int i=0; i<length; ++i){
        if(isalpha(input[i])){
            printf("%c", input[i]);
        }
        if(isdigit(input[i])){
            for(int j=1; j<input[i]- '0'; ++j){
                printf("%c", input[i-1]);
            }
        }
    }
    return 0;
}
