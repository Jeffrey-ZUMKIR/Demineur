#include "define.h"
#include <time.h>
#define MAX 5
#define MIN 1
#define nbMine 3
#define TAILLECARTE 6

char * initTabGen(char mapGen[TAILLECARTE][TAILLECARTE],struct coord pos){
    for(int i=0;i<TAILLECARTE;i++){
        for(int j=0;j<TAILLECARTE;j++){
            if(i==0){
                mapGen[i][j]=j+'0';
            }else{
                if(j==0){
                    mapGen[i][0]=i+'0';
                }else{
                    mapGen[i][j]='o';
                }
            }
        }
    }

    //Ajout mine
    for (int i=0;i<nbMine;i++){
        pos.x=(rand()%(MAX - MIN + 1)) + MIN;
        pos.y=(rand()%(MAX - MIN + 1)) + MIN;
        do{
           pos.x=(rand()%(MAX - MIN + 1)) + MIN;
            pos.y=(rand()%(MAX - MIN + 1)) + MIN;
        }while(mapGen[pos.x][pos.y]=='b');
        mapGen[pos.x][pos.y]='b';
    }

    return mapGen;

}

char * initTabAct(char mapAct[TAILLECARTE][TAILLECARTE]){

    for(int i=0;i<TAILLECARTE;i++){
        for(int j=0;j<TAILLECARTE;j++){
            if(i==0){
                mapAct[i][j]=j+'0';
            }else{
                if(j==0){
                    mapAct[i][0]=i+'0';
                }else{
                    mapAct[i][j]='o';
                }
            }
        }
    }
    return mapAct;
}
