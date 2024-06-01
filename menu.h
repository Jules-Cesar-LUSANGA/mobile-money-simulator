#include <stdio.h>
#include <stdlib.h>

int menu()
{
    int choix;

    do
    {
        printf("\n\t--------- Mobile Money -------\t\n");
        printf("\t--------- By Jules-César LUSANGA -------\t\n\n");
        printf("1. Vérifier le solde \n");
        printf("2. Faire un dépot \n");
        printf("3. Faire un retrait \n");
        printf("4. A Propos \n");
        printf("5. Quitter le programme \n");
        printf("\nSélectionner une option : ");

        scanf("%d", &choix);

        switch (choix)
        { 
        case 1:
            printf("Vérification du solde \n");
            return 1;
            break;
        case 2:
            printf("Déposer de l'argent \n");
            return 2;
            break;
        case 3:
            printf("Rétirer de l'argent \n");
            return 3;
            break;
        case 4:
            printf("\n Je suis Jules-César LUSANGA, développeur WEB. \nMon Portfolio : https://ljcesar.vercel.app \n");
            return 4;
            break;
        case 5:
            printf("Au revoir \n");
            return 5;
            break;
        }


    } while (choix < 1 || choix > 5);
    
}