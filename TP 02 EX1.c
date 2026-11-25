#include <stdio.h>

int main()
{
    int age;

    printf("Entrez votre age : ");
    scanf("%d", &age);

    if (age < 0)
    {
        printf("Age invalide.\n");
    }
    else if (age == 18)
    {
        printf("Vous avez exactement 18 ans : bienvenue dans la majorite !\n");
    }
    else if (age >= 18)
    {
        printf("Vous etes majeur.\n");
    }
    else
    {
        printf("Vous etes mineur.\n");
    }

    return 0;
}





#include <stdio.h>

int main()
{
    int nombre;

    printf("Entrez un nombre entier : ");
    scanf("%d", &nombre);

    if (nombre % 2 == 0)
    {
        printf("%d est pair.\n", nombre);
    }
    else
    {
        printf("%d est impair.\n", nombre);
    }

    if (nombre % 3 == 0)
    {
        printf("%d est divisible par 3.\n", nombre);
    }

    if (nombre % 3 == 0 && nombre % 5 == 0)
    {
        printf("%d est divisible par 3 et par 5.\n", nombre);
    }

    return 0;
}




#include <stdio.h>

int main()
{
    int premier;
    int second;

    printf("Premier nombre : ");
    scanf("%d", &premier);

    printf("Second nombre : ");
    scanf("%d", &second);

    if (premier > second)
    {
        printf("Le plus grand nombre est : %d\n", premier);
    }
    else if (second > premier)
    {
        printf("Le plus grand nombre est : %d\n", second);
    }
    else
    {
        printf("Les deux nombres sont egaux.\n");
    }

    return 0;
}





#include <stdio.h>

int main()
{
    float note;

    printf("Entrez la note sur 20 : ");
    scanf("%f", &note);

    if (note < 0 || note > 20)
    {
        printf("Note invalide.\n");
    }
    else if (note < 10)
    {
        printf("Mention : Ajourné\n");

        if (note >= 8)
        {
            printf("Ajourné - oral de rattrapage possible\n");
        }
    }
    else if (note < 12)
    {
        printf("Mention : Passable\n");
    }
    else if (note < 14)
    {
        printf("Mention : Assez bien\n");
    }
    else if (note < 16)
    {
        printf("Mention : Bien\n");
    }
    else
    {
        printf("Mention : Très bien\n");
    }

    return 0;
}







#include <stdio.h>

int main()
{
    float montant;
    float tauxRemise;
    float montantRemise;
    float netAPayer;
    float fraisLivraison;
    float totalFinal;

    printf("Montant des achats : ");
    scanf("%f", &montant);

    if (montant < 50)
    {
        tauxRemise = 0;
    }
    else if (montant < 100)
    {
        tauxRemise = 5;
    }
    else if (montant < 200)
    {
        tauxRemise = 10;
    }
    else
    {
        tauxRemise = 15;
    }

    montantRemise = montant * tauxRemise / 100;
    netAPayer = montant - montantRemise;

    if (netAPayer >= 80)
    {
        fraisLivraison = 0;
    }
    else
    {
        fraisLivraison = 5.90;
    }

    totalFinal = netAPayer + fraisLivraison;

    printf("Montant : %.2f euros\n", montant);
    printf("Remise (%.0f %%) : %.2f euros\n", tauxRemise, montantRemise);
    printf("Net a payer : %.2f euros\n", netAPayer);
    printf("Frais de livraison : %.2f euros\n", fraisLivraison);
    printf("Total final : %.2f euros\n", totalFinal);

    return 0;
}






#include <stdio.h>

int main()
{
    float montant;
    float tauxRemise;
    float montantRemise;
    float netAPayer;
    float fraisLivraison;
    float totalFinal;

    printf("Montant des achats : ");
    scanf("%f", &montant);

    if (montant < 50)
    {
        tauxRemise = 0;
    }
    else if (montant < 100)
    {
        tauxRemise = 5;
    }
    else if (montant < 200)
    {
        tauxRemise = 10;
    }
    else
    {
        tauxRemise = 15;
    }

    montantRemise = montant * tauxRemise / 100;
    netAPayer = montant - montantRemise;

    if (netAPayer >= 80)
    {
        fraisLivraison = 0;
    }
    else
    {
        fraisLivraison = 5.90;
    }

    totalFinal = netAPayer + fraisLivraison;

    printf("Montant : %.2f euros\n", montant);
    printf("Remise (%.0f %%) : %.2f euros\n", tauxRemise, montantRemise);
    printf("Net a payer : %.2f euros\n", netAPayer);
    printf("Frais de livraison : %.2f euros\n", fraisLivraison);
    printf("Total final : %.2f euros\n", totalFinal);

    return 0;
}







#include <stdio.h>

int main()
{
    int jour;

    printf("Numero du jour (1 a 7) : ");
    scanf("%d", &jour);

    switch (jour)
    {
        case 1:
            printf("Lundi\n");
            printf("C'est un jour de semaine.\n");
            break;

        case 2:
            printf("Mardi\n");
            printf("C'est un jour de semaine.\n");
            break;

        case 3:
            printf("Mercredi\n");
            printf("C'est un jour de semaine.\n");
            break;

        case 4:
            printf("Jeudi\n");
            printf("C'est un jour de semaine.\n");
            break;

        case 5:
            printf("Vendredi\n");
            printf("C'est un jour de semaine.\n");
            break;

        case 6:
            printf("Samedi\n");
            printf("C'est le week-end !\n");
            break;

        case 7:
            printf("Dimanche\n");
            printf("C'est le week-end !\n");
            break;

        default:
            printf("Numero de jour invalide.\n");
    }

    return 0;
}







#include <stdio.h>

int main()
{
    float nombre1;
    float nombre2;
    float resultat;
    char operateur;

    printf("Entrez un calcul (ex : 12 * 4) : ");
    scanf("%f %c %f", &nombre1, &operateur, &nombre2);

    switch (operateur)
    {
        case '+':
            resultat = nombre1 + nombre2;
            printf("%.2f + %.2f = %.2f\n", nombre1, nombre2, resultat);
            break;

        case '-':
            resultat = nombre1 - nombre2;
            printf("%.2f - %.2f = %.2f\n", nombre1, nombre2, resultat);
            break;

        case '*':
        case 'x':
            resultat = nombre1 * nombre2;
            printf("%.2f %c %.2f = %.2f\n",
                   nombre1, operateur, nombre2, resultat);
            break;

        case '/':
            if (nombre2 == 0)
            {
                printf("Erreur : division par zero impossible.\n");
            }
            else
            {
                resultat = nombre1 / nombre2;
                printf("%.2f / %.2f = %.2f\n",
                       nombre1, nombre2, resultat);
            }
            break;

        default:
            printf("Operateur inconnu.\n");
    }

    return 0;
}







