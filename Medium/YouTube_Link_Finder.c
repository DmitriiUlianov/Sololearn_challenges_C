/* You and your friends like to share YouTube links all throughout the day. You want to keep track of all the videos you watch in your own personal notepad, 
but you find that keeping the entire link is unnecessary.  
Keep the video ID (the combination of letters and numbers at the end of the link) in your notepad to slim down the URL. 
 
Task:  
Create a program that parses through a link, extracts and outputs the YouTube video ID. 
 
Input Format:  
A string containing the URL to a YouTube video. The format of the string can be in "https://www.youtube.com/watch?v=kbxkq_w51PM" 
or the shortened "https://youtu.be/KMBBjzp5hdc" format. 
 
Output Format:  
A string containing the extracted YouTube video id. 
 
Sample Input:  
https://www.youtube.com/watch?v=RRW2aUSw5vU 
 
Sample Output:  
RRW2aUSw5vU

Note that the input can be in two different formats. */

#include <stdio.h>
#include <string.h>

int main() {
    
    const int size = 256;
    char input[size];
    fgets(input, size, stdin);
 /*   
    char *output;
    
    char separator[]="/=";
    for (char *token=strtok(input, separator); token != NULL; token = strtok(NULL, separator)){
        output = token;
    }
    printf("%s", output);
*/
///////
    char *output=input+strlen(input);
//перемещаем указатель за строку, на символ конца строки
    
    do
        --output;
    while (*output!='/' && *output!='=');
    printf("%s", output+1);   
    
 ///////
    
    return 0;
}
