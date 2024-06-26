/* You aren't paying attention and you accidentally type a bunch of random letters on your keyboard. 
  You want to know if you ever typed the same letter twice, or if they are all unique letters. 
 
Task:  
If you are given a string of random letters, your task is to evaluate whether any letter is repeated in the string or if you only hit unique keys while you typing. 
 
Input Format:  
A string of random letter characters (no numbers or other buttons were pressed). 
 
Output Format:  
A string that says 'Deja Vu' if any letter is repeated in the input string, or a string that says 'Unique' if there are no repeats. 
 
Sample Input:  
aaaaaaaghhhhjkll 
 
Sample Output:  
Deja Vu

Explanation:  
Your program should output 'Deja Vu' because there are many repetitions in 'aaaaaaaghhhhjkll'. */

#include <stdio.h>
#include <string.h>
int main() {

    char word[100];
    scanf("%s", word);
    //fgets(word, 100, stdin);
    int n = strlen(word);
    
    for(int i=0; i<n; ++i){
        for(int j=i+1; j<n; ++j){
            if(word[i] == word[j]){
                printf("Deja Vu");
                return 0;
            }
        }
    }
    printf("Unique");
    return 0;
}
