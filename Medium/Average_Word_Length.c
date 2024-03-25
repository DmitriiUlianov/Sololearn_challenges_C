/* You are in a college level English class, your professor wants you to write an essay, but you need to find out the average length of all the words you use. 
It is up to you to figure out how long each word is and to average it out. 
 
Task:  
Takes in a string, figure out the average length of all the words and return a number representing the average length. Remove all punctuation. 
Round up to the nearest whole number. 
 
Input Format:  
A string containing multiple words. 
 
Output Format:  
A number representing the average length of each word, rounded up to the nearest whole number. 
 
Sample Input:  
this phrase has multiple words 
 
Sample Output:  
6

Explanation: 
The string in question has five words with a total of 26 letters (spaces do not count). 
The average word length is 5.20 letters, rounding it up to the nearest whole numbers results in 6. */

#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    
    const int size = 256;
    char input[size];
    fgets(input, size, stdin);
    
    float total_length = 0;
    float quantity = 0;
    
    char separator[]=" .:,;?";
    for (char *token=strtok(input, separator); token != NULL; token = strtok(NULL, separator)){
        total_length += strlen(token);
        ++quantity;
    }
    printf("%.0f", ceil(total_length/quantity));
    return 0;
}
