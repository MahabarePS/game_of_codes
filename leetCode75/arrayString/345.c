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
int isVowel(char c){
    return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
            c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
}
char* reverseVowels(char* s) {
    int left = 0;
    int right = 0;
    //find the end of the string
    while(s[right]!='\0'){
        right++;
    }
    right--;
    while(left<right){
        //find the vowel from the left
        while(left<right && !isVowel(s[left])){
            left++;
        }
        //find the vowel from the right
        while(left<right && !isVowel(s[right])){
            right--;
        }
        //swap vowels
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }
    return s;
}
int main(){
    char s[] = "IceCreAm";
    reverseVowels(s);
    printf("Output: %s\n", s);
    return 0;
}