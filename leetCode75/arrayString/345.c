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
#define SIZE 100
char* reverseVowels(char* s) {
    char temp[SIZE] = "";
    int i=0;
    //To store the vowels from the string in order
    for(i=0;s[i]!=0;i++){
        if((s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')||
            (s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')){
                temp[i]==s[i];
            }
    }
    //need to reverse
    size=i;
    //reverse the order of the vowels
    for(int i=size;i!=0;i--){
        if((s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')||
            (s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')){
                s[i]==temp[i];
            }
    }
}
int main(){
    char s[SIZE] = "IceCreAm";
    reverseVowels(s);
    printf("Output: %s\n",s);
    return 0;
}