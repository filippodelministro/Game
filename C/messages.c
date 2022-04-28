#include "all.h"

void loading(){

    //todo: uncomment to loading
    /*
    for(int i = 0; i < 2; ++i) {
        for (int j = 0; j < 4; ++j) {
            printf("\rloading%.*s   \b\b\b", j, "...");
            fflush(stdout);//force printing as no newline in output
            sleep(1);
        }
    }
    */
    system("cls");
    // printf("\n");
}

void loading_bar()
{
    // 0 - black background,
    // A - Green Foreground
    system("cls");
    system("color 08");
  
    // Initialize char for printing
    // loading bar
    char a = 177, b = 219;
  
    printf("\n\n\t\t\tLoading...\n");
    printf("\t\t\t");
  
    // Print initial loading bar
    for (int i = 0; i < 26; i++)
        printf("%c", a);
  
    // Set the cursor again starting
    // point of loading bar
    printf("\r");
    printf("\t\t\t");
  
    // Print loading bar progress
    for (int i = 0; i < 26; i++) {
        printf("%c", b);
  
        // Sleep for 1 second
        Sleep(100);
    }
    printf("\n");
    system("cls");
    system("color 0F");
}

