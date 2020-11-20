#include "define.h"
#include <stdio.h>
#define TAILLECARTE 6

//Récupérer les coordonnées
int getCoo(int pos, char axe){
    do{
        printf("\nVeuillez entrer une coordonnee %c : ", axe);
        scanf("%d",&pos);
        fflush(stdin);
    }while(pos>TAILLECARTE-1 || pos<1);
}

char * checkCase(char mapGen[TAILLECARTE][TAILLECARTE], char mapAct[TAILLECARTE][TAILLECARTE], struct coord pos,int *FinJeu,int *nbZoneSafeRestante){
    int nbBombe;
    if(mapGen[pos.y][pos.x]=='b'){
        for(int i=0;i<TAILLECARTE;i++){
            for(int j=0;j<TAILLECARTE;j++){
                if(mapGen[i][j]=='b'){
                    mapAct[i][j]='*';
                }
            }
        }
        *FinJeu=2;
        return mapAct;
    }
    if(mapAct[pos.y][pos.x]=='o'){
        for(int i=-1;i<2;i++){
            if(pos.y+i>0 && pos.y+i<TAILLECARTE){
                for(int j=-1;j<2;j++){
                    if(pos.x+j>0 && pos.x+j<TAILLECARTE){
                        if(mapGen[pos.y+i][pos.x+j]=='b'){
                            nbBombe++;
                        }
                    }
                }
            }

        }
        (*nbZoneSafeRestante)-=1;
        if(*nbZoneSafeRestante==0){
            *FinJeu=1;
        }
    }
    mapAct[pos.y][pos.x]=nbBombe + '0';
    return mapAct;


}

void checkEnd(int FinJeu){
    if(FinJeu==1){
        printf("Victoire\n");
    }else{
        printf("Perdu\n");
    }
}
