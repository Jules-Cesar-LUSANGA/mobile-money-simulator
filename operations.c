#include <stdlib.h>
#include <stdio.h>

int operationCurrency()
{
    int devise;

    do
    {
        printf("Choisir la devise : \n");
        printf("0. USD \n");
        printf("1. FC \n");
        printf("Sélectionner une option : ");

        scanf("%d", &devise);
    } while (devise != 0 && devise != 1);

    return devise;
    
}

void getSolde(float solde[])
{
    // Selon la dévise, choisie, renvoyer le solde
    switch (operationCurrency())
    {
    case 0:
        printf("Montant en USD : %f USD\n\n", solde[0]);
        break;
    
    default:
        printf("Montant en CDF : %f CDF\n\n", solde[1]);
        break;
    }
}

void deposerUnMontant(float *solde)
{
    // Récuperer la devise choisie
    int devise = operationCurrency();

    float montant;
    int MIN_USD = 5;
    int MIN_CDF = 5000;

    // Selon la dévise, demander un montant à déposer

    do
    {
        printf("Entrer le montant en %s (Min : %s) : ", devise == 0 ? "USD" : "CDF", devise == 0 ? "5 USD" : "5000 CDF");
        scanf("%f", &montant);

    } while ((devise == 0 && montant < MIN_USD) || (devise == 1 && montant < MIN_CDF));

    // Ayant reçu le solde comme un pointeur, nous avons la possibilité de modifier les solde

    *(solde + devise) = *(solde + devise) + montant;

    printf("\n\nDépot de %f effectué. Solde actuel : %f\n\n", montant, *(solde + devise));

}

void retirerUnMontant(float *solde)
{
    int devise = operationCurrency();

    float montant;

    // Récupérer le solde actuel
    float soldeActuel = *(solde + devise);
    
    // Selon la dévise, retirer le montant
    // Ici, on affiche solde avant de faire le retrait, de façon à ce que
    // l'utilisateur n'entre pas un montant supérieur au solde

    do
    {
        printf("Solde : %f, entrer le montant en %s à rétirer : ", soldeActuel, devise == 0 ? "USD" : "CDF");
        scanf("%f", &montant);

    } while (montant > soldeActuel);

    *(solde + devise) = *(solde + devise) - montant;

    printf("\n\nRetrait de %f effectué. Solde actuel : %f\n\n", montant, *(solde + devise));

}
