#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <time.h>
void affichage();
void aleatoire();
int menu();
void vachette();
void raz();
void randomdustunfest();
void randomhorizon();


int menu(int*JVJ,int*IA)
{
int choix,choix2,choix3,joueur;
printf("--------------------------\n");
printf("-                        -\n");
printf("-          MENU          -\n");
printf("-                        -\n");
printf("--------------------------\n\n");
printf("Bienvenue dans la Bataille navale!\n\n");
printf("1.Jouer une partie.\n\n");
printf("2.Aide.\n\n");
printf("3.Fin.\n\n");
scanf("%d",&choix);
switch(choix)
{
    case 1:
    printf("1. Joueur contre Joueur?\n");
    printf("2. Joueur contre IA?\n");
    scanf("%d",&choix2);
    switch(choix2)
    {
    case 1:
    joueur=1;
    *JVJ=joueur;
    break;
    case 2 :
    joueur=2;
    *IA=joueur;
    break;
    default:
    printf("Vous etes indecis?\n");
    }
    break;
    case 2:
    printf("Bienvenue dans l'aide mousaillon!\n");
    printf("1.Comment jouer?\n");
    printf("2.Les grilles.\n");
    printf("3.Les navires.\n");
    scanf("%d",&choix3);
    switch(choix3)
    {
        case 1:
            printf("expliquer comment jouer\n");
            break;
        case 2:
            printf("expliquer le mode de fonctionnement des grilles\n");
            break;
        case 3:
            printf("expliquer le mode de fonctionnement des navires\n");
            break;
        default:
        printf("Une erreur?\n");

    }
    break;
    case 3:
    printf("A la revoyure Mousaillon!\n");
    exit(0);
    default:
        do
        {
        printf("Vous vous etes trompes de boutons?\n");
        printf("--------------------------\n");
        printf("-                        -\n");
        printf("-          MENU          -\n");
        printf("-                        -\n");
        printf("--------------------------\n\n");
        printf("1.Jouer une partie\n");
        printf("2.Aide\n");
        printf("3.Fin\n");
        scanf("%d",&choix);
        switch(choix)
            {
        case 1:
            printf("1. Joueur contre Joueur?\n");
            printf("2. Joueur contre IA?\n");
            scanf("%d",&choix2);
            switch(choix2)
                {
                case 1:
                joueur=1;
                *JVJ=joueur;
                break;
                case 2 :
                joueur=2;
                *IA=joueur;
                break;
                default:
                printf("Vous etes indecis?\n");

                }
                break;
                case 2:
                printf("Bienvenue dans l'aide mousaillon!\n");
                printf("1.Comment jouer?\n");
                printf("2.Les grilles.\n");
                printf("3.Les navires.\n");
                break;
                case 3:
                printf("A la revoyure Mousaillon!\n");
                exit(0);

                                }
                }while ((choix!=1)||(choix!=2) ||(choix!=3));
                break;


}
return(0);
}


void pseudo(char* pseudo1,char* pseudo2)
{
    int choix;
    printf("Bienvenue dans le mode Joueur contre Joueur!\n");
    printf("Quel est le nom du premier joueur?\n");
    scanf("%s",pseudo1);
    printf("Bienvenue jeune %s!\n\n",pseudo1);
    printf("Qui est ton valeureux adversaire?\n");
    scanf("%s",pseudo2);
    printf("Bienvenue a toi %s !\n",pseudo2);
    printf("Ainsi ce sera %s contre %s?\n\n",pseudo1,pseudo2);
    printf("1.Oui!\n");
    printf("2.Non,je me suis trompe.\n");
    scanf("%d",&choix);
    while (choix!=1)
    {
     printf("Bienvenue dans le mode Joueur contre Joueur!\n");
    printf("Quel est le nom du premier joueur?\n");
    scanf("%s",pseudo1);
    printf("Bienvenue jeune %s!\n\n",pseudo1);
    printf("Qui est ton valeureux adversaire?\n");
    scanf("%s",pseudo2);
    printf("Bienvenue a toi %s!\n",pseudo2);
    printf("Ainsi ce sera %s contre %s?\n\n",pseudo1,pseudo2);
    printf("1.Oui!\n");
    printf("2.Non,je me suis trompe.\n");
    scanf("%d",&choix);
    }
    printf("Initialisation de la partie.\n");

}


void PseudoOrdi(char pseudo[100])
{
    int choix;
    printf("Bienvenue dans le mode Joueur contre l'ordinateur!\n");
    printf("Quel est ton nom?\n");
    scanf("%s",pseudo);
    printf("Bienvenue %s !Est-ce bien toi?\n",pseudo);
    printf("1.Oui!\n");
    printf("2.Non, je me suis trompe.\n");
    scanf("%d",&choix);
    while (choix!=1)
    {
    printf("Quel est ton nom?\n");
    scanf("%s",pseudo);
    printf("Bienvenue %s !Est-ce bien toi?\n",pseudo);
    printf("1.Oui!\n");
    printf("2.Non, je me suis trompe.\n");
    scanf("%d",&choix);
    }
    printf("Initialisation de la partie.\n");
}

void tour(char pseudo1[100],char pseudo2[100])
{
    int choix,choix2;
    printf("%s\n%s\n",pseudo1,pseudo2);
    printf("C'est parti! Avez compris les regles avant de commencer matelot?\n");
    printf("1.Oui, c'est quand que l'on joue?\n");
    printf("2.Non.On peut voir les regles?\n");
    scanf("%d",&choix);
    switch (choix)
    {case 1:
        printf("C'est parti!\n");
        printf("%s commence\n",pseudo1);

        break;
    case 2:
        printf("Bienvenue dans l'aide mousaillon!\n");
    printf("1.Comment jouer?\n");
    printf("2.Les grilles.\n");
    printf("3.Les navires.\n");
    scanf("%d",&choix2);
    switch(choix2)
    {
        case 1:
            printf("expliquer comment jouer\n");
            break;
        case 2:
            printf("expliquer le mode de fonctionnement des grilles\n");
            break;
        case 3:
            printf("expliquer le mode de fonctionnement des navires\n");
            break;
        default:
        printf("Une erreur?\n");
        break;
    }
    }

}

void AltEnter() ///////https://cboard.cprogramming.com/cplusplus-programming/87684-how-make-console-window-fullscreen.html
{
    keybd_event(VK_MENU,
                0x38,
                0,
                0);
    keybd_event(VK_RETURN,
                0x1c,
                0,
                0);
    keybd_event(VK_RETURN,
                0x1c,
                KEYEVENTF_KEYUP,
                0);
    keybd_event(VK_MENU,
                0x38,
                KEYEVENTF_KEYUP,
                0);
    return;
}

int main()
{
int JVJ,IA,round;
char pseudo1[100];
char pseudo2[100];
char pseudo3[100];
char position1[15][15];
char position2[15][15];
char position3[15][15];
char position4[15][15];
srand(time(NULL));
AltEnter();
menu(&JVJ,&IA);
if (JVJ==1)
{
pseudo(pseudo1,pseudo2);
tour(pseudo1,pseudo2);
system("cls");
raz(position1);
raz(position2);
raz(position3);
raz(position4);
affichage(position1);
affichage(position2);
for(round=1;round>0;round++)
{
debut(position1,position3);
printf("TOUR:%d\n",round);
printf("C'est à ton tour %s\n",pseudo1);
choix(position1);
victoire(position2,&round);
//vachette();
//system("cls");
debut(position2,position4);
printf("TOUR:%d\n",round);
printf("C'est à ton tour %s\n",pseudo2);
choix(position2);
victoire(position1,&round);
//vachette();
//system("cls");

}
}
if (IA==2)
{
PseudoOrdi(pseudo3);
system("cls");
raz(position1);
raz(position2);
raz(position3);
raz(position4);
for(round=1;round>0;round++)
{
debut(position1,position3);
printf("TOUR:%d\n",round);
printf("C'est à ton tour %s\n",pseudo3);
choix(position1);
victoire(position2,&round);
debut(position2,position4);
//vachette();
//system("cls");
affichage(position2);

}
}
return 0;
}



void affichage(char positio[15][15])
    {
    int x;
    int y;
    int w;
    int i=0;
    int h;
    int j;
    for (i=0;i<7;i++)
    {
        if (i==0)
        {
        do
        {
            randomdustunfest(&x,&y);
        }while((x>8)||(y>8)||(x<5)||(y<5));
        }
        if (i==0)
        {randomhorizon(&h);}
        {if (h==1)
        {
            positio[x+i][y]='A';
        }
        if (h==0)
        {
            positio[x][y+i]='A';
        }
        }

    }
    for (j=0;j<2;j++)
    {
    i=0;
    for (i=0;i<5;i++)
    {

        if (i==0)
        {
        do
        {
            randomdustunfest(&x,&y);
        }while((positio[x][y]!=' ')||(positio[x+1][y]!=' ')||(positio[x+2][y]!=' ')||(positio[x+3][y]!=' ')||(positio[x+4][y]!=' ')||(positio[x][y+1]!=' ')||(positio[x][y+2]!=' ')||(positio[x][y+3]!=' ')||(positio[x][y+4]!=' ')||(x>9)||(y>9)||(x<4)||(y<4));
        }
        if (j==0)
        {
        if (i==0)
        {randomhorizon(&h);}
        {if (h==1)
        {
            positio[x+i][y]='C';
        }
        if (h==0)
        {
            positio[x][y+i]='C';
        }
        }
        }
        if (j==1)
        {
        if (i==0)
        {randomhorizon(&h);}
        {if (h==1)
        {
            positio[x+i][y]='R';
        }
        if (h==0)
        {
            positio[x][y+i]='R';
        }
        }

    }
    }
    }
    for (j=0;j<3;j++)
    {
    i=0;
    for (i=0;i<3;i++)
    {
        if (i==0)
        {
        do
        {
            randomdustunfest(&x,&y);
        }while((positio[x][y]!=' ')||(positio[x+1][y]!=' ')||(positio[x+2][y]!=' ')||(positio[x][y+1]!=' ')||(positio[x][y+2]!=' ')||(x>12)||(y>12)||(x<3)||(y<3));
        }
        if (j==0)
        {
        if (i==0)
        {randomhorizon(&h);}
        {if (h==1)
        {
            positio[x+i][y]='D';
        }
        if (h==0)
        {
            positio[x][y+i]='D';
        }
        }

    }
    if (j==1)
        {
        if (i==0)
        {randomhorizon(&h);}
        {if (h==1)
        {
            positio[x+i][y]='E';
        }
        if (h==0)
        {
            positio[x][y+i]='E';
        }
        }

    }
    if (j==2)
        {
        if (i==0)
        {randomhorizon(&h);}
        {if (h==1)
        {
            positio[x+i][y]='Y';
        }
        if (h==0)
        {
            positio[x][y+i]='Y';
        }
        }

    }
    }
    }
    for (j=0;j<4;j++)
    {
    i=0;
    for (i=0;i<1;i++)
    {
        if (i==0)
        {
        do
        {
            randomdustunfest(&x,&y);
        }while((positio[x][y]!=' '));
        if (j==0)
        {positio[x][y]='S';}
        if(j==1)
        {positio[x][y]='T';}
        if(j==2)
        {positio[x][y]='U';}
        if(j==3)
        {positio[x][y]='V';}

    }
    }
    }
    }
void debut(char position1[15][15],char position2[15][15])
{
    int i;
    printf("       A   B   C   D   E   F   G   H   I   J   K   L   M   N   O");
    printf("       ");
    printf("       A   B   C   D   E   F   G   H   I   J   K   L   M   N   O\n");
    for(i=0;i<31;i++)
    {
        quadrillage(position1,i);
        printf("    ");
        quadrillage(position2,i);
        printf("\n");
    }
}

void quadrillage(char positio[15][15],int index)
{
    if (index%2==0)
    {
       printf("     --------------------------------------------------------------");
    }
    else
    {
        int i=index/2;
        printf("%2d   | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | ",i, positio[i][0], positio[i][1], positio[i][2], positio[i][3], positio[i][4], positio[i][5], positio[i][6], positio[i][7], positio[i][8], positio[i][9], positio[i][10], positio[i][11], positio[i][12], positio[i][13], positio[i][14]);
    }



}

void randomdustunfest(int*r1,int*r2)
{
    int i,nombre_aleatoire;
	i=rand()%(15);
	nombre_aleatoire=i;
	*r1=nombre_aleatoire;
	i=rand()%(15);
	nombre_aleatoire=i;
	*r2=nombre_aleatoire;

}
void randomhorizon(int*h)
{
    int i;
    i=rand()%2;
    *h=i;

}
void gotoligcol(int* lig, int* col)
{
    COORD mycoord;

    mycoord.X=col;
    mycoord.Y=lig;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),mycoord);
}
void vachette()
{

    gotoligcol(2,8);
    {
    int l=2;
    int c=8;
    gotoligcol(l,c);
    char x;
    x=getch();
    while (1)
    {
    position(x,&l,&c);
    gotoligcol(l,c);
    x=getch();
    if ((l>30)||(c>65))
    {
        break;
    }
    }
    }
}
void position(char x, int* l, int* c)
{
  if((x=='z')||(x=='Z'))
  {
      *l=*l-2;
  }
  if((x=='s')||(x=='S'))
  {
      *l=*l+2;
  }
  if((x=='q')||(x=='Q'))
  {
      *c=*c-4;
  }
  if((x=='d')||(x=='D'))
  {
      *c=*c+4;
  }
}

void raz(char position[15][15])
{   int i,j;
    for(i=0;i<15;i++)
        {
            for(j=0;j<15;j++)
            {
                position[i][j]=' ';
            }



        }
}

int victoire(char position[15][15],int* win)
{
    int i,j;
    for (i=0;i<15;i++)
    {
        for(j=0;j<15;j++)
        {
            if ((position[i][j]!=' ')&&(position[i][j]!='0'))
            {
                return 0;
            }

        }
    }
    printf("VICTOIRE\n");
    *win=-1;
    return 0;


}




void deplacement(char position[15][15])
{
    char choix,direction;
    int i,j,k;
    int verif;
    printf("\n\n\n\n\n");
    printf("Quel bateau souhaitez-vous deplacer Moussaillon?\n");
    scanf(" %c",&choix);
    do{
    verif=1;
    printf("Quelle direction?\n");
    scanf(" %c",&direction);
    switch(direction)
                {
                case 'Z':
                {for(i=0;i<15;i++)
                {for(j=0;j<15;j++)
                {if (position[i][j]==choix)
                {
                {if((position[i-1][j]==' ')&&(i-1>=0))
                {
                position[i-1][j]=choix;
                position[i][j]=' ';
                }
                else
                {
                    for (i=14;i<=0;i--)
                    {for (j=14;j<=0;j--)
                    {if(position[i][j]==choix)
                    {
                        position[i+1][j]='A';
                        position[i][j]=' ';
                    }
                    }
                    }
                    printf("ERREUR\n");
                    verif=0;
                }

                }
                }
                }
                }
                break;
                }
            case 'S':
                {for(i=14;i>=0;i--)
                {for(j=14;j>=0;j--)
                {if (position[i][j]==choix)
                {
                {if((position[i+1][j]==' ')&&(i+1<15))
                {
                position[i+1][j]=choix;
                position[i][j]=' ';
                }
                else
                {

                    for (i=0;i<=14;i++)
                    {for(j=0;j<=14;j++)
                    {if(position[i][j]==choix)
                    {printf("[%d][%d]\n",i,j);

                        position[i-1][j]=choix;
                        position[i][j]=' ';
                    }
                    }
                    }
                    printf("ERREUR\n");
                    verif=0;
                }

                }
                }
                }
                }
                break;
                }
            case 'Q':
                {for(i=0;i<15;i++)
                {for(j=0;j<15;j++)
                {if (position[i][j]==choix)
                {if((position[i][j-1]==' ')&&(j-1>=0))
                {
                position[i][j-1]=choix;
                position[i][j]=' ';
                }
                else
                {
                    for (i=14;i<=0;i--)
                    {for (j=14;j<=0;j--)
                    {if(position[i][j]==choix)
                    {
                        position[i][j+1]=choix;
                        position[i][j]=' ';
                    }
                    }
                    }
                    printf("ERREUR\n");
                    verif=0;
                }

                }
                }
                }
                break;
                }
            case 'D':
                {for(i=14;i>=0;i--)
                {for(j=14;j>=0;j--)
                {if (position[i][j]==choix)
                {
                {if((position[i][j+1]==' ')&&(j+1<15))
                {
                position[i][j+1]=choix;
                position[i][j]=' ';
                }
                else
                {

                    for (i=0;i<15;i++)
                    {for (j=0;j<15;j++)
                     {if (position[i][j]==choix)
                       {
                        position[i][j-1]=choix;
                        position[i][j]=' ';
                       }
                    }
                    }
                    printf("ERREUR\n");
                    verif=0;
                }

                }
                }
                }
                }
                break;
                }
            default:
            {
              verif=0;
            }

    }
    }while(verif==0);
    }
void choix(char position[15][15])
{
int choix,verif;
printf("Voulez-vous Tirer ou vous deplacer?\n");
printf("1.Tirer\n");
printf("2;Deplacer\n");
do{
scanf("%d",&choix);
if (choix==1)
{
    //tirer();
    verif=0;
}
if (choix==2)
{
    deplacement(position);
    verif=0;
}

}while(verif!=0);
}
