/* You are given a list of names for a fundraiser, but you need to keep the names relatively anonymous. You are tasked with getting the initials for each name provided. 
 
Task:  
Given a list of first and last names, take the first letter from each name to create initials and output them as a space-separated string. 
 
Input Format:  
The first input denotes the number of names in the list (N). The next N lines contain the list elements as strings.  
 
Output Format:  
A string containing the initials of each name in the original list, separated by spaces. 
 
Sample Input:  
3  
Nick Dunburry 
Tommy Newborne 
David James 
 
Sample Output:  
ND TN DJ

Explanation: 
Taking the first letter from each name results in the output ND TN DJ. */

#include <stdio.h>

int main() {

    int num;
    scanf("%d", &num);
    
    char firstName[20][20];
    char lastName[20][20];
    
    for(int i=0; i<num; ++i){
        scanf("%s%s", firstName[i], lastName[i]);
    }
    for(int i=0; i<num; ++i){
        printf("%c%c ", firstName[i][0], lastName[i][0]);
    }
    
    return 0;
}
