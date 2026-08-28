/*
 * author Prasad Mahabare
 * created on 27-08-2026-20h-48m
 * github: https://github.com/MahabarePS
 * copyright 2026
*/
/*
Given a string s, reverse only all the vowels in the string and return it.

The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower and upper cases, more than once.


Example 1:

Input: s = "IceCreAm"

Output: "AceCreIm"

Explanation:

The vowels in s are ['I', 'e', 'e', 'A']. On reversing the vowels, s becomes "AceCreIm".

Example 2:

Input: s = "leetcode"

Output: "leotcede"

 

Constraints:

1 <= s.length <= 3 * 105
s consist of printable ASCII characters.
*/
#include<stdio.h>
char* reverseVowels(char* s) {
    
}
int main(){
    char s = "IceCreAm";
    char size = sizeof(s);
    printf("Output: %s",reverseVowels(s));
    return 0;
}