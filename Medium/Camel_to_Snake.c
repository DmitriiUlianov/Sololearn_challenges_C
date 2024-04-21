/* The company you are working for is refactoring its entire codebase. It's changing all naming conventions from camel to snake case (camelCasing to snake_casing).  
Every capital letter is replaced with its lowercase prefixed by an underscore _, except for the first letter, which is lowercased without the underscore,
so that SomeName becomes some_name. 
 
Task:  
Write a program that takes in a string that has camel casing, and outputs the same string but with snake casing. 
 
Input Format:  
A string with camelCasing. 
 
Output Format:  
The same string but with snake_casing. 
 
Sample Input:  
camelCasing 
 
Sample Output: 
camel_casing

Explanation: 
The capital C was lowercased and prefixed by an underscore. */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    
    char string[100];
    char new_string[100];
    fgets(string, 100, stdin);
    int n = strlen(string);
    
 // without pointers    
    
    new_string[0]=string[0];
    if (new_string[0] >= 65 && new_string[0] <= 90)
        new_string[0] += 32;
        
    int i=1, j=1;
    for(; i<n; ++i, ++j){
        if (string[i] >= 65 && string[i] <= 90){
            new_string[j++]='_';
            new_string[j]=string[i]+ 32;    
        }
        else
            new_string[j]=string[i];
        
    }
    new_string[j]='\0';
      
  
/*  // with pointers and while

    char *in = string;
    char *out = new_string;
    *out++ = isupper(*in) ? tolower(*in) : *in;
    while (*++in){
        if(isupper(*in)){
            *out++ = '_';
            *out++ = tolower(*in);
        } else 
            *out++ = *in;
    }
    *out = '\0';
*/
  
/*  // with pointers and for
  
    char *in = string;
    char *out = new_string;
    *out++ = isupper(*in) ? tolower(*in) : *in;
    for(in=string+1; in<string+n;     ++in, ++out){
        if(isupper(*in)){
            *out++ = '_';
            *out = tolower(*in);
        } else 
            *out = *in;
    }
    *out = '\0';
*/  
    
    printf ("%s", new_string );
    return 0;
}
