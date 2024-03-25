/* You are robbing a bank, but you’re not taking everything. You are looking for a specific item in the safety deposit boxes and
you are going to drill into each one in order to find your item. Once you find your item you can make your escape, but how long will it take you to get to that item? 
 
Task 
Determine the amount of time it will take you to find the item you are looking for if it takes you 5 minutes to drill into each box. 
 
Input Format  
A string that represent the items in each box that will be drilled in order (items are separated by a comma), and secondly, a string of which item you are looking for. 
 
Output Format  
An integer of the amount of time it will take for you to find your item. 
 
Sample Input 
'gold,diamonds,documents,Declaration of Independence,keys' 
'Declaration of Independence' 
 
Sample Output  
20

Explanation 
It will take you 20 minutes before you drill into the 4th box, which contains your item, the Declaration of Independence. */

#include <stdio.h>
#include <string.h>

int main() {

    const int buffer = 256;
    char string1[buffer];
    char string2[buffer];
    fgets(string1, buffer, stdin);
    fgets(string2, buffer, stdin);
    int t = 0;
    
    char sep[]=",";
    for(char *token=strtok(string1, sep); token != NULL; token=strtok(NULL, sep)){
        t += 5;
        if (!strcmp(token,string2)){
            break;
        }
    }
    printf("%d", t);
    return 0;
}
