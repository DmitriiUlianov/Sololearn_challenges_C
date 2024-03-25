/* You are shopping at a store that is having a special where you do not have to pay the tax on anything that costs 20 dollars or more!  
If you have a list of prices for all of your items, what is your total once the tax is added in? Tax is 7% on the items that you would still need to pay tax on. 
 
Task:  
Determine the total cost once you include tax of 7% on the items that are still taxed. 
 
Input Format:  
A string of numbers, separated by commas, that represent to price of each item that you are going to buy. 
 
Output Format:  
A number, rounded to two decimal places, of the total for your purchase once tax is included on items under 20 dollars. 
 
Sample Input:  
5,18,25,34 
 
Sample Output:  
83.61

Explanation:  
You would only have to pay the tax on the 5 and 18 dollar items and that bring your total to $83.61. */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int const size = 256;
    char string[size];
    fgets(string, size, stdin);
    float number = 0;
    float sum = 0;
    for(char *token=strtok(string, ","); token != NULL; token= strtok(NULL, ",")){
        number = atof(token);
        if(number<20)
            sum += 1.07*number;
        else
            sum += number;    
    }
    printf("%0.2f", sum);
    return 0;
}
