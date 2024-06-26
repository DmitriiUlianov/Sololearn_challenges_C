/* You need to verify if the given credit card number is valid. For that you need to use the Luhn test. 
 
Here is the Luhn formula: 
1. Reverse the number. 
2. Multiple every second digit by 2.  
3. Subtract 9 from all numbers higher than 9. 
4. Add all the digits together. 
5. Modulo 10 of that sum should be equal to 0.  
 
Task:  
Given a credit card number, validate that it is valid using the Luhn test. Also, all valid cards must have exactly 16 digits. 
 
Input Format: 
A string containing the credit card number you need to verify. 
 
Output Format: 
A string: 'valid' in case the input is a valid credit card number (passes the Luhn test and is 16 digits long), or 'not valid', if it's not. 
 
Sample Input: 
4091131560563988 
 
Sample Output: 
valid

Explanation: Let's run the Luhn test for our input: 
Reverse: 8893650651311904 
Multiplying the even positions by 2: 8 16 9 6 6 10 0 12 5 2 3 2 1 18 0 8 
Subtract 9 from >9: 8 7 9 6 6 1 0 3 5 2 3 2 1 9 0 8 
The sum: 70 
70 Modulo 10 is 0. 
The input passed the Luhn test and contains 16 digits, making it a valid credit card number. */

#include <stdio.h>

int main() {

    char str[17];
    scanf("%s", str);
    int num[16];
    int rev_num[16];
    int sum = 0;
    
    for(int i=0; i<16; ++i){
        num[i] = str[i]-'0';
    }
    for(int i=0; i<16; ++i){
        rev_num[i] = num[15-i];
    }
    for(int i=1; i<16; i+=2){
        rev_num[i] *= 2;
        //++i;
    }
    for(int i=0; i<16; ++i){
        if(rev_num[i]>9)
            rev_num[i] -= 9;
    }
    for(int i=0; i<16; ++i){
        sum += rev_num[i];
    }
    /*
    if(!(sum % 10))
        printf("valid");
    else
        printf("not valid");
    */
    printf(!(sum % 10) ? "valid":"not valid");
    
    return 0;
}
