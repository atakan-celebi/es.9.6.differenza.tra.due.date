#include <stdio.h>

#include "cmake-build-debug/funzioni.h"


int main(void) {

    int anno,anno1,mese,mese1,giorno,giorno1;

    printf("inserisci anno mese e giorno");
    scanf("%d %d %d", &anno,&mese,&giorno);
    printf("inserisci gli altri anni mesi e giorni");
    scanf("%d %d %d", &anno1,&mese1,&giorno1);

    //operazioni
    mese = gmesi(mese,anno);
    mese1 = gmesi(mese1,anno1);
    anno = anno * 365;
    anno1 = anno1 * 365;

    int tot = anno+mese+giorno;
    int tot1 = anno1+mese1+giorno1;

    int a;
    if (tot<tot1) {
        a = tot;
        tot = tot1;
        tot1 = a;
    }
    int diff = tot - tot1;
    int anno2=0;
    int giorno2=0;
    int mese2=1;

    while (diff>31) {
        if (diff > 365)
            anno2++;
            diff = diff - 365;
    }
    if (diff > gmesi(mese2,anno2)) {
        diff=diff-gmesi(mese2,anno2);
    } else {
        giorno2 = diff;
    }
    printf("la differanza tra le due date e' di: %d anno/anni, %d mese/mesi, e di %d giorno/giorni",anno2,mese2,giorno2);
}
