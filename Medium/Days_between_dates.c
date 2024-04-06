/* You need to calculate exactly how many days have passed between two dates. 
 
Task:   
Calculate how many days have passed between two input dates, and output the result.  
 
Input Format:  
Two strings that represent the dates, first date should be the older date.  
Date format: Month DD, YYYY 
 
Output Format:  
A number representing the number of days between the two dates. 
 
Sample Input:  
August 15, 1979 
June 15, 2018 
 
Sample Output:  
14184

Explanation:  
14184 days have passed between the two input days. */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int *calendar(char input[100])
{
    
    char* month[12]={"Jan","Feb", "Mar","Apr","May","Jun","Jul","Aug", "Sep","Oct","Nov","Dec"};
    int num_month[12]={1,2,3,4,5,6,7, 8,9,10,11,12};
    
    char* date[3];
    int i=0;
    for (char* token=strtok(input, " ,");token!=NULL; token=strtok(NULL, " ,")){
        date[i]=token;
        ++i;
    }
    int* int_date = malloc(sizeof(int) * 3);
    for(int k=0; k<12; ++k){
        if(strncmp(date[0], month[k],3)==0){
            int_date[0]=num_month[k];
            break;
        }
    }
    int_date[1]=atoi(date[1]);
    int_date[2]=atoi(date[2]);
    
    return int_date;
}

int main()
{
    char input1[100];
    fgets(input1,100,stdin);
    char input2[100];
    fgets(input2,100,stdin);
    
    int *res1;
    res1 = calendar(input1);
    int *res2;
    res2 = calendar(input2);

    struct tm tm1 = { 0 };
    struct tm tm2 = { 0 };

    /* date 1: */
    tm1.tm_year = res1[2] - 1900;
    tm1.tm_mon = res1[0] - 1;
    tm1.tm_mday = res1[1];
    tm1.tm_hour = tm1.tm_min = tm1.tm_sec = 0;
    tm1.tm_isdst = -1;

    /* date 2: */
    tm2.tm_year = res2[2] - 1900;
    tm2.tm_mon = res2[0] - 1;
    tm2.tm_mday = res2[1];
    tm2.tm_hour = tm2.tm_min = tm2.tm_sec = 0;
    tm2.tm_isdst = -1;

    time_t t1 = mktime(&tm1);
    time_t t2 = mktime(&tm2);

    double dt = difftime(t2, t1);
    int days = round(dt / 86400);

    printf("%d\n", days);
    
    free(res1);
    free(res2);
    return 0;
}
