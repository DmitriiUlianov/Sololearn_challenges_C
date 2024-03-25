/* You and your friends are going to Europe! You have made plans to travel around Europe with your friends, 
but one thing you need to take into account so that everything goes according to play, 
is that the format of their date is different than from what is used in the United States. Your job is to convert all your dates from MM/DD/YYYY to DD/MM/YYYY. 
 
Task:  
Create a function that takes in a string containing a date that is in US format, and return a string of the same date converted to EU. 
 
Input Format:  
A string that contains a date formatting 11/19/2019 or November 19, 2019. 
 
Output Format:  
A string of the same date but in a different format: 19/11/2019. 
 
Sample Input:  
7/26/2019 
 
Sample Output:  
26/7/2019

Note, that the input can be in two different formats, 11/19/2019 or November 19, 2019. */

#include <stdio.h>
#include <string.h>

int main() {
    
    const int size = 256;
    char input[size];
    fgets(input, size, stdin);
    
    char *month[]={"January", "February","March","April","May", "June","July","August","September", "October","November","December"};
    //char *num_month[]={"1","2","3", "4","5","6","7","8","9","10","11", "12"};
    
    char *output[3];
    int i = 0;
    
    char separator[]=" /,";
    for(char *token=strtok(input, separator); token != NULL; token=strtok(NULL, separator)){
        output[i++] = token;
    }
    for(int j=0; j<12; ++j){
        if(strcmp(output[0], month[j])==0){
            printf("%s/%d/%s", output[1], j+1, output[2]);
            return 0;
        }
    }
    printf("%s/%s/%s", output[1], output[0], output[2]);
    return 0;
}
