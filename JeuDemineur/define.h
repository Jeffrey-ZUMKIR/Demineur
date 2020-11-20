#ifndef DEFINE_H_INCLUDED
#define DEFINE_H_INCLUDED
#define TAILLECARTE 6



typedef struct carte{
    char tab[6][6];
}carte;

typedef struct coord{
    int x;
    int y;
}coord;

char * initTabGen(char mapGen[TAILLECARTE][TAILLECARTE],struct coord pos);
char * initTabAct(char mapAct[TAILLECARTE][TAILLECARTE]);
void afficheCarte(char mapAct[TAILLECARTE][TAILLECARTE]);
int getCoo(int pos, char axe);
char * checkCase(char mapGen[TAILLECARTE][TAILLECARTE], char mapAct[TAILLECARTE][TAILLECARTE],struct coord pos,int *FinJeu,int *nbZoneSafeRestante);
void checkEnd(int FinJeu);


#endif // DEFINE_H_INCLUDED
