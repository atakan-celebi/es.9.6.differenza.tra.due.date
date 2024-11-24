//
// Created by Atakan Celebi on 24/11/2024.
//

#include "funzioni.h"

int bis(int anno) {
    if (anno % 400 == 0 ) {
        return 1;
    } else if (anno % 100 == 0) {
        return 0;
    } else if (anno % 4 == 0) {
        return 1;
    }
    return 0;
}

int gmesi(int mese, int anno) {
    if (mese == 2) {
        if (bis(anno)) {
            return 29;
        } else {
            return 28;
        }
    } if(mese == 11 || mese == 9 || mese == 6 || mese == 4 ) {
        return 30;
    }
    if(mese == 1 || mese == 3 || mese == 5 || mese == 7 || mese == 8 || mese == 10 || mese == 12) {
        return 31;
    }
    return 0;
}