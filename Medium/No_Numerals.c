/* You write a phrase and include a lot of number characters (0-9), but you decide that for numbers 10 and under you would rather write the word out instead. 
Can you go in and edit your phrase to write out the name of each number instead of using the numeral?  
 
Task:  
Take a phrase and replace any instances of an integer from 0-10 and replace it with the English word that corresponds to that integer. 
 
Input Format:  
A string of the phrase in its original form (lowercase). 
 
Output Format:  
A string of the updated phrase that has changed the numerals to words. 
 
Sample Input:  
i need 2 pumpkins and 3 apples 
 
Sample Output:  
i need two pumpkins and three apples

Explanation:  
You would update the phrase to change '2' to 'two' and '3' to 'three'. */

#include <stdio.h>
#include <string.h>
/*
int main() {
    
    const int size=256;
    char input[size];
    fgets(input, size, stdin);
    
    char* numbers[]={"0","1","2","3", "4","5","6","7","8","9","10"};
    char* words[]={"zero","one", "two","three","four","five","six", "seven","eight","nine","ten"};
    char* output[256];
    int j=0;
    
    for(char *token=strtok(input," "); token != NULL;token=strtok(NULL," ")){
        for(int i=0;i<sizeof(numbers)/sizeof(numbers[0]); ++i){
            if(strcmp(token, numbers[i])==0){
                output[j]=words[i];
                break;
            }
            else
                output[j]=token;
        }
        printf("%s ", output[j]);
        ++j;
    }
    return 0;
}

*/
int main(){

    const char* digits[]={"zero", "one","two","three","four","five", "six", "seven","eight", "nine","ten"};
    char input[256];
    fgets(input, sizeof(input)/sizeof(*input), stdin);
    
    
    char* in = input;
    while(*in){
        if(*in =='1'&&*(in+1)=='0'){
            printf ("ten");
            in += 2;
            continue;
        }
        if(*in >='0'&& *in<='9')
            printf("%s", digits [*in-'0']);
        else
            printf("%c", *in);
        ++in;
    }
    return 0;
}
