#include "all.h"

void single_beep(){
    Beep(750, 800);
}

void douple_beep(){
    for(int x = 0; x < 2; x++) {
            Beep(523, 500);
        }
}

void life_up(){
    for(int x = 0; x < 3; x++) {
            Beep(520+(100*x), 100);
        }
    Beep(850, 110);
}

void welcome_jingle(){
    //todo: find a cool jingle
    single_beep();
}