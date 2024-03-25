/* You are a secret agent, and you receive an encrypted message that needs to be decoded. 
The code that is being used flips the message backwards and inserts non-alphabetic characters in the message to make it hard to decipher. 
 
Task:  
Create a program that will take the encoded message, flip it around, remove any characters that are not a letter or a space, and output the hidden message. 
 
Input Format:   
A string of characters that represent the encoded message. 
 
Output Format:  
A string of character that represent the intended secret message. 
 
Sample Input:  
d89%l++5r19o7W *o=l645le9H 
 
Sample Output:  
Hello World

Explanation:  
If you remove everything that isn't a letter or space from the original message and flip it around, you get 'Hello World'. */

#include <stdio.h>
#include <string.h>
int main(){

    char string[100];
    fgets(string, 100, stdin);
    int n = strlen(string);

    char rev_string[100];
    int j=0;
    for(int i=n-1; i>=0; i--){
        rev_string[j++]=string[i];
    }
    
    char new_string[100];
    int k=0;
    for (int i=0; i<n; ++i){
        if (isalpha(rev_string[i]) || isspace(rev_string[i])){
            new_string[k++] = rev_string[i];
    //        ++k;
        }
    }
    new_string[k]='\0';
    printf("%s", new_string);
    
    return 0;
}
