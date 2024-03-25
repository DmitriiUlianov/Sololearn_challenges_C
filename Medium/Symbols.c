/* There is a problem with your keyboard: it randomly writes symbols when you are typing a text. You need to clean up the text by removing all symbols. 
 
Task:  
Take a text that includes some random symbols and translate it into a text that has none of them. The resulting text should only include letters and numbers. 
 
Input Format:  
A string with random symbols. 
 
Output Format:  
A string of the text with all the symbols removed. 
 
Sample Input:  
#l$e%ts go @an#d@@ g***et #l#unch$$$ 
 
Sample Output:  
lets go and get lunch

Explanation:  
If you take out every symbol and leave only the letters and numbers, your text says 'lets go and get lunch'. */

#include <stdio.h>
#include <string.h>

int main(){

    char string[100];
    char new_string[100]={0};
    fgets(string, 100, stdin);
    int n = strlen(string);
 
    int i = 0, j = 0;
    for(i = 0; i < n; ++i){
        if(string[i]==' ' || string[i]>='A' && string[i]<='Z' || string[i]>='a' && string[i]<='z' || string[i]>='0' && string[i]<='9'){

            new_string[j]=string[i];
            ++j;
         }
    }

    new_string[j]='\0';
    printf("%s", new_string);
    return 0;
}
