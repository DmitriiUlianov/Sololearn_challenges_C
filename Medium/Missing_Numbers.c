/* You are given a list of whole numbers in ascending order. You need to find which numbers are missing in the sequence. 
 
Task:  
Create a program that takes in a list of numbers and outputs the missing numbers in the sequence separated by spaces. 
 
Input Format:  
The first input denotes the length of the list (N). The next N lines contain the list elements as integers.  
 
Output Format:  
A string containing a space-separated list of the missing numbers. 
 
Sample Input:  
5 
2 
4 
5 
7 
8 
 
Sample Output:  
3 6

Explanation:  
The input list is missing the numbers 3 and 6. */

#include <stdio.h>

int main() {

    int num;
    scanf("%d", &num);
    
    int input[100];
    for(int i=0; i<num; ++i){
        scanf("%d", &input[i]);
    }
    
    int counter = input[0];
    for(int i=1; i<num; ++i){
        ++counter;
        while(input[i] > counter){
            printf("%d ", counter++);
        }       
    }

    return 0;
}
