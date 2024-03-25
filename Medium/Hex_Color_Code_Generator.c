/* You are starting a new company and unfortunately that means you can no longer rely on the free hex-color code software you used to rely on. 
It’s time to put your skills to the test and create one from the ground up! 
 
Task:  
Create a function that accepts three integers that represent the RGB (red, green, blue) values and outputs the hex-code representation. 
 
Input Format:  
Three integers that represent RGB values. 
 
Output Format:  
The hexadecimal color code string that corresponds with the entered RGB values. 
 
Sample Input:  
100  
200  
233 
 
Sample Output:  
#64c8e9

Explanation:  
Hex color codes work within 15 characters, 0-9 and a-f. RGB goes into hex color codes as such # (red) 00 (green) 00 (blue) 00. 
Hex color codes work by rolling over the value of 09 to 0a. Once 0f is hit (15) the following value (16) would be represented as 10 instead of (16). 
This means the RGB values (16, 32, 161) would evaluate to #1020a1 (10, 20, a1). */

#include <stdio.h>
/*
void toHex(int x)
{
    int res1;
    int res2;
    int i = 0;
    
    int digits[]={10,11,12,13,14,15};
    char *letters[]={"a","b","c","d", "e","f"};
    
    if (x >=0 && x <=9){
        printf("0%d", x);
    }
/////////////////////////////////
    if (x >=10 ){
        if (x >=10 && x <=15){
            for (i=0; i<6; ++i){
                if (x==digits[i])
                    printf("0%s", letters[i]);
            }
        }
/////////////////////////////////        
        if (x>= 16){
            res2 = (x/16)%16;
            for (i=0; i<6; ++i){
                if (res2==digits[i]){
                    printf("%s", letters[i]);
                    break;
                }
            }
            if (i == 6)
                printf("%d", res2);
/////////////////////////////////            
            res1 = x%16;
            for (i=0; i<6; ++i){
                if (res1==digits[i]){
                    printf("%s", letters[i]);
                    break;
                }
            }
            if (i == 6)
                printf("%d", res1);
        }
    }   
}

int main()
{
    int R;
    int G;
    int B;
    scanf("%d%d%d", &R,&G,&B);
    
    printf("\n#");
    toHex(R);
    toHex(G);
    toHex(B);

    return 0;
}

*/

int main()
{
    int R;
    int G;
    int B;
    scanf("%d%d%d", &R,&G,&B);
    printf("#%02x%02x%02x", R, G, B);

    return 0;
}
