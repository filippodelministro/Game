// #include "all.h"
#include "functions.c"
#include "sounds.c"
#include "messages.c"


int main(){

    char buffer[NAME_LENGHT];

    loading_bar();
    printf("\t\t\tHello! You are playing at Story Game!\n\t\t\tInsert your name to continue...\n\t\t\t");
    scanf("%s", buffer);

    user_name = malloc(sizeof(buffer));
    strcpy(user_name, buffer);

    printf("Hello %s!\n", user_name);
    welcome_jingle();

    return 0;
}