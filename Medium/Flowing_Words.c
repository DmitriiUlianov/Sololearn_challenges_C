/* If a sentence flows, the first letter of each word will be the same to the last letter of the previous word.  
 
Task: 
Write a program that takes in a string that contains a sentence, checks if the first letter of each word is the same as the last letter of the previous word. If the condition is met, output true, if not, output false.  
Casing does not matter. 
 
Input Format:  
A string containing a sentence of words. 
 
Output Format:  
A string: true or false. 
 
Sample Input: 
this string gets stuck 
 
Sample Output:  
true

Explanation:  
Each word begins with the letter that the previous word ends with, therefore the output is true. */

#include <stdio.h>
#include <string.h>

int main() {

    char input[256];
    fgets (input, 256, stdin);
    char output[256];
    int i=0;
/*   
    for(char *token=strtok(input," "); token!=NULL; token=strtok(NULL," ")){
        int n = strlen(token);
        output[i++]=token[0];
        output[i++]=token[n-1];
    }
    for(int j=1; j<i-2; j+=2){
        if (output[j]!=output[j+1]){
            printf("false");
            return 0;
        }
    }
*/
////////
    int n = strlen(input);
    for(i=0; i<n; ++i){
        if(input[i]==' '){
           if(input[i-1]!=input[i+1]){
               printf("false");
               return 0;
           }
        }
    }

////////
    printf("true");
    return 0;
}
