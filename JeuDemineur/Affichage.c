#include "define.h"
#define TAILLECARTE 6

    /*for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            printf("%d", mapGen[i][j]);
        }
        printf("\n");
    }*/

void afficheCarte(char mapAct[TAILLECARTE][TAILLECARTE]){
    for(int i=0;i<TAILLECARTE;i++){
        for(int j=0;j<TAILLECARTE;j++){

            if(mapAct[i][j]=='o' && j!=0){
                printf(" %c", '_');
            }else{
                printf(" %c", mapAct[i][j]);
            }
            /*if(i==0 || j==0){
                printf(" %c", mapAct[i][j]);
            }else{
                if(mapAct[i][j]=='o'){
                    printf(" %c", '_');
                }
            }*/

        }
        printf("\n");
    }
}


