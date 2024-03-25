/* Your favorite store is having a sale! You pay full price for the most expensive item that you get, 
but then you get 30% off of everything else in your purchase! How much are you going to save?  
Sales tax is 7%.  
Also, you leave anything below a dollar in your saving as a tip to the seller. If your saving is a round amount, you don't leave any tips. 
 
Task:  
Given the prices of items you want to purchase, determine how much you will save during your shopping!  
 
Input Format:  
An string of numbers separated by commas that represent the prices for all of the items that you want to purchase (without tax). 
 
Output Format:  
An integer number that represents the total savings that you got for shopping during the sale. 
 
Sample Input:  
100.25,80.99,40.00 
 
Sample Output:  
38

Explanation:  
With the sale, you would get 30% off of the second two items. The amount you save is $36.297, and $38.83779 when you consider the 7% tax. 
After leaving the 0.83779 as a tip, your final saving is $38. */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    const int buffer = 256;
    char string[buffer];
    fgets(string, buffer, stdin);
    
    float price[buffer];
    float price_with_tax[buffer];
    int i = 0;
    float price_max = 0;
    float total_with_discount = 0;
    float total_without_discount = 0;
    
    char separator[]=",";
    for (char *token=strtok(string, separator); token != NULL; token=strtok(NULL, separator)){
        price[i] = atof(token);
        i++;
    }
    
    for (int j=0; j<i; ++j){
        if(price_max < price[j])
            price_max = price[j];
    }
    
    for (int j=0; j<i; ++j){
        price_with_tax[j] = 1.07*price[j];
        total_without_discount += price_with_tax[j]; 
    }
    
    for (int j=0; j<i; ++j){
        if(price[j] < price_max){
            price[j] = 1.07*0.7* price[j];
        }
        else
            price[j]= 1.07*price[j];
        total_with_discount+=price[j];
    }
    
    int total_savings = total_without_discount - total_with_discount;
    
    printf("%d", total_savings);
    return 0;
} 
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    const int size = 256;
    char string[size];
    fgets(string, size, stdin);
    
    float price[size];
    float* price_max = &price[0];
    float summ = 0.0f;

    char separator[]=",";
    int i = 0;
    
    for (char *token=strtok(string, separator); token != NULL; token=strtok(NULL, separator)) {
        price[i] = atof(token);
        if (price[i] > *price_max) {
            price_max = &price[i];
        }        
        ++i;
    }
    
    *price_max = 0.0f;
    
    for (; i >= 0; --i) {
        summ += price[i];
    }
    
    printf("%d", (int)(summ * 0.3 * 1.07));
    return 0;
} */
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    const int size = 256;
    char string[size];
    fgets(string, size, stdin);
    
    float price[size];
    float* price_max = &price[0];
    float* current_price = &price[0];
    float summ = 0.0f;

    char separator[]=",";
    
    for (char *token = strtok(string, separator); token != NULL; token = strtok(NULL, separator)) {
        *current_price = atof(token);
        if (*current_price > *price_max) {
            price_max = current_price;
        }
        ++current_price;
    }

    // *price_max = 0.0f;

    while(--current_price >= price) {
        if (*current_price < *price_max) {
            summ += *current_price;
        }
    }

    printf("%d", (int)(summ * 0.3 * 1.07));
    return 0;
}*/
