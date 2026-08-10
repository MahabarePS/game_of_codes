/*
 * author Prasad Mahabare
 * created on 31-07-2026-22h-48m
 * github: https://github.com/MahabarePS
 * copyright 2026
*/
/*
In Hash Table:
1. searching adding and, deleting data is fast compared to Array and linkedlist.
2. with hash tables you can directly access the element by its location using hash function.

Creating a simple hash table:
1. Starting with an array.
2. Storing names using a hash function.
3. Looking up an element using a hash function.
4. Handling collisions.
5. The basic hash set code example and simulation.
*/
#include<stdio.h>
#include<string.h>
char* myHashSet[10]={NULL, "Jones", NULL, "Lisa", NULL, "Bob", NULL, "Siri", "Pete", NULL};
//to store names
int hashFunction(const char* value)
{
    int sumOfChars = 0;
    while(*value){
        sumOfChars += (int)*value;
    }
    return sumOfChars % 10;
}
//to check if present
int contains(const char* name){
    int index = hashfunction(name);
    if(myHashSet[index]!=NULL && strcmp(myHashSet[index],name)==0){
        return 1; //true
    }
    return 0; //flase
}
int main(){
    printf("'Pete' is in the Hash Set: %s\n");
    contains("Pete"? "true": "flase");
    return 0;
}