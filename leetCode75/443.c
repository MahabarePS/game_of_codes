/*
 * author Saquib Shaikh
 * created on 10-04-2026-23h-16m
 * github: https://github.com/saquibshaikh14
 * copyright 2026
*/
/*
Given an array of characters chars, compress it using the following algorithm:

Begin with an empty string s. For each group of consecutive repeating characters in chars:

If the group's length is 1, append the character to s.
Otherwise, append the character followed by the group's length.
The compressed string s should not be returned separately, but instead, be stored in the input character array chars. Note that group lengths that are 10 or longer will be split into multiple characters in chars.

After you are done modifying the input array, return the new length of the array.

You must write an algorithm that uses only constant extra space.

Note: The characters in the array beyond the returned length do not matter and should be ignored.

 

Example 1:

Input: chars = ["a","a","b","b","c","c","c"]
Output: 6
Explanation: The groups are "aa", "bb", and "ccc". This compresses to "a2b2c3".
Example 2:

Input: chars = ["a"]
Output: 1
Explanation: The only group is "a", which remains uncompressed since it's a single character.
Example 3:

Input: chars = ["a","b","b","b","b","b","b","b","b","b","b","b","b"]
Output: 4
Explanation: The groups are "a" and "bbbbbbbbbbbb". This compresses to "ab12".
 

Constraints:

1 <= chars.length <= 2000
chars[i] is a lowercase English letter, uppercase English letter, digit, or symbol.
*/
#include<stdio.h>
#include<stdint.h>  // for unsigned int
//---Max size of the chars array
#define MAX_SIZE 2000

//---function declaration
int string_compression(char *);
int main(){
    //---array of characters
    char chars[MAX_SIZE]={'\0'};
    printf("---443. String Compression---");
    printf("Enter a string:");
    //---till user hit enter
    scanf("%[^\n]s",chars);     
    int len = 0;
    //---to store the length of the entered string
    while(chars[len]!='\0'){
        len++;
    }
    //---passing base address of 'chars[]' to the compression function
    unsigned int result = string_compression(chars);
    printf("output: ",result);
    return 0;
}
//---beign with empty string
int string_compression(char *s){

    return 0;
}