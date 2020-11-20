#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "define.h"
#include <windows.h>
#include <time.h>
#define TAILLECARTE 6
#define nbMine 3





int main()
{
    //Init variable
    srand(time(0));

    carte mapGen;
    carte *pmapGen=mapGen.tab;

    carte mapAct;
    carte *pmapAct=mapAct.tab;

    coord pos;

    int nbZoneSafeRestante = (pow(TAILLECARTE-1,2)) -nbMine;

    int FinJeu=0;

    //Init tableau
    pmapGen=initTabGen(mapGen.tab,pos);
    pmapAct=initTabAct(mapAct.tab);

    while(FinJeu==0){
        afficheCarte(mapAct.tab);
        pos.x=getCoo(pos.x, 'x');
        pos.y=getCoo(pos.y, 'y');
        pmapAct=checkCase(mapGen.tab,mapAct.tab,pos,&FinJeu,&nbZoneSafeRestante);



        fflush(stdin);
        system("cls");
    }
    checkEnd(FinJeu);
    afficheCarte(mapAct.tab);

    return 0;
}


