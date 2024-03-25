/* You are walking from your house to a pond that is down your street.  
How many blocks over will you have to walk until you get to the pond? 
 
Task:  
Evaluate how many blocks you will have to walk if you are given a representation of your street where H represents your house, 
  P represents the pond, and every B represents a block in between the two. 
 
Input Format:  
A string of letters representing your house, the pond, and blocks on your street. 
 
Output Format:  
An integer value that represents the number of blocks between your house and the pond. 
 
Sample Input:  
BBHBBBBPBBB 
 
Sample Output:  
4

Explanation:  
There are 4 blocks between your house and the pond on your street. */

#include <stdio.h>
#include <string.h>

int main() {

    int count = 0;
    char items[100];
    fgets(items, 100, stdin);
    int n = strlen(items);
    
    for(int i=0; i<n; ++i){
        if (items[i] == 'H'){
            for(int k=i+1; k<n; ++k){  
                if (items[k] == 'B')
                    count = count + 1;
                if (items[k] == 'P'){
                    printf("%d", count); 
                    return 0;  
                }
            }
        }
        if (items[i] == 'P'){
            for(int k=i+1; k<n; ++k){  
                if (items[k] == 'B')
                    count = count + 1;
                if (items[k] == 'H'){
                    printf("%d", count); 
                    return 0;  
                }
            }
        } 
    }  
    return 0;
}
