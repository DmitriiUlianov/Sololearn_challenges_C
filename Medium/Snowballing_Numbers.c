/* You are given a list of numbers in a particular order. You need to check to see if each number is greater than the sum of all the previous number of the list.   
If they are, you have created successful snowball numbers. 
 
Task:  
Create a program that takes in an array of numbers, check if each number is greater than the sum of all previous numbers, and output true if the condition is met, and false, if not. 
 
Input Format:  
The first input denotes the length of the list (N). The next N lines contain the list elements as integers.  
 
Output Format:  
A string, true or false. 
 
Sample Input:  
4 
1 
3 
7 
58 
 
Sample Output:  
true

Explanation:  
Each number in the input list is greater than the sum of the previous numbers: 3>1, 7>3+1, 58>7+3+1 */

#include <stdio.h>

int main(){
    
    int num, sum, i=0;
    int arr[256];
    scanf("%d", &num);
    
    for(i=0; i<num; ++i)
        scanf("%d", &arr[i]);
        
    sum = arr[0];
        
    for(i=1; i<num; ++i){
        if (sum >= arr[i]){
            printf ("false");
            return 0;
        }   
        sum += arr[i];
    }
    printf ("true");
    
    return 0;
}
