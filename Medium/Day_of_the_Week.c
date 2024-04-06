/* You receive a date and need to know what day of the week it is.  
  
Task:  
Create a program that takes in a string containing a date, and outputs the day of the week. 
 
Input Format:  
A string containing a date in either "MM/DD/YYYY" format or "Month Day, Year" format. 
 
Output Format:  
A string containing the day of the week from the provided date. 
 
Sample Input:  
11/19/2019 
 
Sample Output:  
Tuesday

Explanation:  
19 November 2019 is a Tuesday. */

/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char input[100];
    fgets(input,100,stdin);
    
    char* day_of_week[]={"Sunday", "Monday","Tuesday","Wednesday", "Thursday","Friday","Saturday"};
    
    char* month_of_year[]={"Jan", "Feb","Mar","Apr","May","Jun","Jul", "Aug","Sep","Oсt","Nov","Dec"};
    
    char* date[3];
    int i = 0;
    int year;
    int month;
    int day;
    
    for(char *token=strtok(input, " /,"); token != NULL; token = strtok(NULL, " /,")){
        date[i++] = token;
    }
    month = atoi(date[0]);   // "atoi" returns 0, if the argument is not a number.
    day = atoi(date[1]);
    year = atoi(date[2]);
    
    if(month){
        if(month == 1 || month == 2){
            month += 10;
            year -= 1;
        }
        else
            month -= 2;
    }
        
    else{
        for(int i=0; i<12; ++i){
            if(strncmp(date[0], month_of_year[i],3)==0){  //to compare only first 3 symbols
    
                if(i == 0 || i == 1){
                    month = i+1 + 10;
                    year -= 1;
                    break;
                }
                else{
                    month = i+1 - 2;
                    break;
                }
            }
        }
    }
        
    int res = (day + ((13*month-1)/5) + year + (year/4) - (year/100) + (year/400)) % 7 ;
    printf("%s", day_of_week[res]);

    return 0;
}
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int getMonth(const char* data, int* year)
{
    const char* month_of_year[] = 
    {
        "Jan", "Feb", "Mar", "Apr",
        "May", "Jun", "Jul", "Aug",
        "Sep", "Oсt", "Nov", "Dec" 
    };
    int result = atoi(data);
    
    switch (result) {
        case 0:
            for(int i=0; i<12; ++i){
                if(strncmp(data, month_of_year[i], 3) == 0){
                    if (i > 1) {
                        result = i + 1 - 2;
                    } else {
                        result = i + 1 + 10;
                        --*year;
                    }
                    break;
                }
            }
            break;
        case 1:
        case 2:
            result += 10;
            --*year;
            break;
        default:
            result -= 2;
            break;
    }

    return result;
}

const char* dayOfWeek(int day, int month, int year)
{
    const char* day_of_week[] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
    return day_of_week[(day + ((13*month-1)/5) + year + (year/4) - (year/100) + (year/400)) % 7];
}

int main()
{
    char input[100];
    fgets(input,100,stdin);
    char* date[3];
    int i = 0;
    
    for(char* token=strtok(input, " /,"); token != NULL; token = strtok(NULL, " /,")){
        date[i++] = token;
    }

    int day = atoi(date[1]);
    int year = atoi(date[2]);
    int month = getMonth(date[0], &year);

    printf("%s", dayOfWeek(day, month, year));

    return 0;
}
