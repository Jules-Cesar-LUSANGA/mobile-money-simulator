#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "operations.c"

int main()
{
    // Variable qui va récuperer le choix du menu
    int choix = 0;

    // Solde en USD et CDF&
    float solde[] = {0, 0};

    // Tant que l'utilisateur ne choisi pas 4 pour quitter
    while (choix < 5)
    {  
        // Récupérer le choix du menu
        choix = menu();
        
        switch (choix)
        {
        case 1:
            // Verification du solde
            getSolde(solde);
            break;
        case 2:
            // Faire un dépôt
            deposerUnMontant(solde);
            break;
        case 3:
            // Faire un retrait
            retirerUnMontant(solde);
        case 4:
            printf("Contactez-moi pour plus d'informations\n");
            break;
        }
    }
    
    return 0;
}