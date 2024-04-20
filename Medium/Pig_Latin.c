/* You have two friends who are speaking Pig Latin to each other! Pig Latin is the same words in the same order except 
that you take the first letter of each word and put it on the end, then you add 'ay' to the end of that. ("road" = "oadray")  
 
Task 
Your task is to take a sentence in English and turn it into the same sentence in Pig Latin!  
 
Input Format  
A string of the sentence in English that you need to translate into Pig Latin. (no punctuation or capitalization) 
 
Output Format  
A string of the same sentence in Pig Latin. 
 
Sample Input  
"nevermind youve got them" 
 
Sample Output  
"evermindnay ouveyay otgay hemtay"

Explanation 
The output should be the original sentence with each word changed so that they first letter is at the end and then -ay is added after that. */

#include <stdio.h>
#include <string.h>

int main() {
    char string[100];
    fgets(string, 100, stdin);
    
    char sep[]=" \n";
    for(char *token=strtok(string, sep); token != NULL; token = strtok(NULL, sep)){
        int n = strlen(token);
        char new_token[100];
        for(int i=0; i<n; ++i)
            new_token[i]=token[i+1];
        new_token[n-1]=token[0];
        new_token[n]='a';
        new_token[n+1]='y';
        new_token[n+2]='\0';
        printf("%s ", new_token );
    }
    return 0;
}
