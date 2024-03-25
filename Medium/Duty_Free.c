/* You make a purchase of souvenirs priced in Euros at a duty free store in the Rome airport. You didn't want to spend any more than 20 US Dollars on any specific item.  
Can you go through your list and make sure you stayed under your limit? The conversion rate on this day is 1.1 US Dollars to 1 Euro. 
 
Task:  
Evaluate each item that you purchased to make sure that you didn't spend more than $20 on that particular item.  
If you did, you will need to go back to the store to return it.   
 
Input Format:  
An string of numbers separated by spaces that represent the prices of each of your items in Euros. 
 
Output Format:  
A string that says 'On to the terminal' if you stayed under your cap, or 'Back to the store' if you spent too much money. 
 
Sample Input:  
18 15.50 2 14 
 
Sample Output:  
On to the terminal

Explanation:  
You stayed under your cap because your most expensive item only cost $19.80 in US dollars (1 Euro = 1.1 USD). */

#include <stdio.h>

int main() {

    float prices[4];
    for(int i=0; i<4; i++)
        scanf("%f", &prices[i]);
    for(int i=0; i<4; i++){
        prices[i] *= 1.1;
//multiplying each element of array by 1.1
        if (prices[0] < prices[i])
            prices[0] = prices[i]; 
     //writing max value to prices[0]
    }
    if (prices[0] < 20)
        printf ("On to the terminal");
    else
        printf ("Back to the store");
    
    
    return 0;
}
