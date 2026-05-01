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
#define STR_SIZE 1000
char* gcdOfStrings(char*, char*);
int main(){
    char str1[STR_SIZE]="", str2[STR_SIZE]="";  //Proper buffer
    printf("--------------1071. Greatest Common Divisor of String--------------");
    printf("Enter String 1: ");                 //hello
    fgets(str1,STR_SIZE,stdin);//Bounded input  //'h' 'e' 'l' 'l' 'o' '\n' '\0'
    printf("Enter String 2: ");
    fgets(str2,STR_SIZE,stdin);//Bounded input  //
}