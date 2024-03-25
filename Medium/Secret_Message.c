/* You are trying to send a secret message, and you've decided to encode it by replacing every letter in your message 
with its corresponding letter in a backwards version of the alphabet.  
What do your messages look like? 
 
Task:  
Create a program that replaces each letter in a message with its corresponding letter in a backwards version of the English alphabet. 
 
Input Format:  
A string of your message in its normal form. 
 
Output Format:  
A string of your message once you have encoded it (all lower case). 
 
Sample Input:  
Hello World 
 
Sample Output:  
svool dliow

Explanation:  
If you replace each letter in 'Hello World' with the corresponding letter in a backwards version of the alphabet, you get 'svool dliow'. */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {

    char string[100];
    fgets(string, 100, stdin);
    int n=strlen(string);
    char res[100];
    int num[100];
    
    // with pointers
    char* in = string;
    char* out = res;
    int* number = num;
    
    for(in=string; in<string+n; ++in, ++out){
        if(isspace(*in))
            *out = *in;
        if(isupper(*in))
            *in = tolower(*in);
        if(isalpha(*in)){
            *number = *in - 97;
            *out = 122 - *number;
        }
    }
    *out = '\0';
        
/*  // without pointers
    for(int i=0; i<n; ++i){
        if (isspace(string[i]))
            res[i] = string[i];
        if (isupper(string[i]))
            string[i] = tolower(string[i]);
        if (isalpha(string[i])){
            num[i] = string[i]-97;
            res[i] = 122 - num[i];
        }
    }
*/
    printf ("%s", res);
    return 0;
}
