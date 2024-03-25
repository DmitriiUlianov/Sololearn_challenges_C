/* You want to convert the time from a 12 hour clock to a 24 hour clock. If you are given the time on a 12 hour clock, 
  you should output the time as it would appear on a 24 hour clock.   
 
Task:   
Determine if the time you are given is AM or PM, then convert that value to the way that it would appear on a 24 hour clock. 
 
Input Format:  
A string that includes the time, then a space and the indicator for AM or PM. 
 
Output Format:  
A string that includes the time in a 24 hour format (XX:XX) 
 
Sample Input:  
1:15 PM 
 
Sample Output:  
13:15

Explanation: 
1:00 PM on a 12 hour clock is equivalent to 13:00 on a 24 hour clock. */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    const int size = 256;
    char input[size];
    fgets(input, size, stdin);
    
    char* time[]={"AM","PM"};
    char* output[3];
    int i=0;
    
    for(char* token=strtok (input, " :"); token!=NULL; token=strtok (NULL, " :")){
        output[i++]=token;
    }
    if(strcmp(output[2],time[0])==0)
        printf("%s:%s", output[0], output[1]);
    if(strcmp(output[2],time[1])==0)
        printf("%d:%s", atoi(output[0])+12, output[1]);
        
    return 0;
}
