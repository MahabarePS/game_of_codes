/*
 * author Prasad Mahabare
 * created on 27-07-2026-21h-18m
 * github: https://github.com/MahabarePS
 * copyright 2026
*/
/*
Break statement is used to "jump out" of a "switch" statement and out of loop.
*/
#include<stdio.h>
int main(){
    int i;
    for(i=0;i<10;i++){
        if(i==4)
        break;
        printf("%d\n",i);
    }
    return 0;
}