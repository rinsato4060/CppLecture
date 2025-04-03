#include <iostream>
#include <string>
#include "scoreboard.h"

void ArrowTest(ScoreBoard *p){
    p->Print();
}

int main() {
    ScoreBoard board ("Shigeo", 35, 100, 89);
    ArrowTest(&board);
}