#include "all.h"
#include "message.c"


void loading(){
    for(int loop = 0; loop < 2; ++loop) {
        for(int each = 0; each < 4; ++each) {
            printf("\rloading%.*s   \b\b\b", each, "...");
            fflush(stdout);//force printing as no newline in output
            sleep(1);
        }
    }
}

void prova(){
    
}