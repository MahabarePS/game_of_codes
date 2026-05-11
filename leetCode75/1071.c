/*
 * author Prasad Mahabare
 * created on 30-04-2026-21h-56m
 * github: https://github.com/MahabarePS
 * copyright 2026
*/
/*
For two strings s and t, we say "t divides s" if and 
only if s = t + t + t + ... + t + t 
(i.e., t is concatenated with itself one or more times).

Given two strings str1 and str2, return the largest string x such that 
x divides both str1 and str2.

Example 1:

Input: str1 = "ABCABC", str2 = "ABC"

Output: "ABC"

Example 2:

Input: str1 = "ABABAB", str2 = "ABAB"

Output: "AB"

Example 3:

Input: str1 = "LEET", str2 = "CODE"

Output: ""

Example 4:

Input: str1 = "AAAAAB", str2 = "AAA"

Output: ""​​​​​​​

 

Constraints:

1 <= str1.length, str2.length <= 1000
str1 and str2 consist of English uppercase letters.
*/
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define STR_SIZE 1000
char* gcdOfStrings(char*, char*);
char* strSanitization(char*);
int main(){
    char str1[STR_SIZE]="", str2[STR_SIZE]="";//Proper buffer
    printf("\n--------------1071. Greatest Common Divisor of String--------------\n");
    printf("Enter String 1: ");                 //hello
    fgets(str1,STR_SIZE,stdin);//Bounded input  //'h' 'e' 'l' 'l' 'o' '\n' '\0'
    printf("\nEnter String 2: ");
    fgets(str2,STR_SIZE,stdin);//Bounded input  //
    //sanitize strings '\n' with '\0'
    strSanitization(str1);
    strSanitization(str2);
    //Now process the GCD of String 
    char* ptr = gcdOfStrings(str1,str2);
    if(ptr!=NULL){
        printf("Output: %s",ptr);
        free(ptr);
    }else{
        printf("Output: " "");
    }
}
char* strSanitization(char* san){
    unsigned int index=0;
    while(san[index]!='\0'){
        if(san[index]=='\n'){
            san[index]='\0';
            break;
        }
        index++;
    }
    return san;
}
char* gcdOfStrings(char* str1, char* str2){
    //need to find the length of the string
    unsigned int str1_size = 0, str2_size=0,index=0;
    //Finding the length of str1
    while(str1[str1_size]!='\0'){
        str1_size++;
    }
    //Finding the length of str2
    while(str2[str2_size]!='\0'){
        str2_size++;
    }
    //Allocate result buffer
    char* result = calloc(STR_SIZE,sizeof(char));
    if(result==NULL){
        printf("Not enough memory!!");
        return NULL;
    }
    //Start from smaller length
    unsigned int min_len;

    if(str1_size<str2_size){
        min_len = str1_size;
    }else{
        min_len = str2_size;
    }
    //Try the largest possible pattern first
    for(unsigned int pattern_len=min_len;pattern_len>0;pattern_len--){
        //Pattern length must divide BOTH strings
        if((str1_size%pattern_len!=0)||(str2_size%pattern_len!=0)){
            continue;
            //SKIP Everything BELOW
            //and move to the next pattern_len
        }
        bool valid = true;
        //Validate str1
        for(index=0;index<str1_size;index++){
            unsigned int pattern_index = index%pattern_len;
            if(str1[index]!=str1[pattern_index]){
                valid=false;
                break;
            }
        }
        //Validate str2 only if str1 passed
        if(valid){
            for(index=0;index<str2_size;index++){
                unsigned int pattern_index = index%pattern_len;
                if(str2[index]!=str1[pattern_index]){
                    valid=false;
                    break;
                }
            }
        }
        //If valid pattern found
        if(valid){
            for(index=0;index<pattern_len;index++){
                result[index] = str1[index];
            }
            result[pattern_len]='\0';

            return result;
        }
    }
    //No common pattern
    result="";
    return result;
}