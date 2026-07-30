/*
 * author Prasad Mahabare
 * created on 30-07-2026-12h-18m
 * github: https://github.com/MahabarePS
 * copyright 2026
*/
/*
Making a function call itself.
Adding two numbers together is easy to do
but, adding a range of numbers in more complicatied.
*/
#include<stdio.h>
int sum (int k);
int main(){
    int result = sum(10);
    printf("%d", result);
    return 0;
}
int sum(int k){
    if(k > 0){
        return k + sum(k-1);
    }else{
        return 0;
    }
    return 0;
}