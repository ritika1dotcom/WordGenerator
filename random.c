#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    const char* word[5] = {"Random","Hello","Goodday","Welcome","Anime"};
    srand(time(NULL));
    const char* input;
    input = word[rand() % 5];
    printf("%s\n",input);
    return 0;
}