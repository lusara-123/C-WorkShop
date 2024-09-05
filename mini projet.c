#include <stdio.h>
#include <stdlib.h>

void addbook(char titre[200][50] , char auteur[200][50] , float prix[200], int quantite[200] , int NL){

    printf("Entrer le titre");
    scanf(" %[^\n]", titre[NL] );
    printf("Entrer le auteur");
    scanf(" %[^\n]", auteur[NL] );
    printf("Entrer le prix");
    scanf(" %f", &prix[NL] );
    printf("Entrer le titre");
    scanf("%d", quantite[NL] );

}

int main()
{
   char titre[200][50];
   char auteur[200][50];
   float prix[200];
   int quantite[200];
   int commande;
   int NL = 0 ; // nombre des livre ;


   while(1){
       printf("==== commencer la gestion par les nombre des commandes =====:\n");
       printf("1 - Ajouter un livre au stock. \n");
       printf("2 - Afficher tous les livres disponibles. \n");
       printf("3 - Rechercher un livre par son titre. \n");
       printf("4 - Mettre à jour la quantité d'un livre. \n");
       printf("5 - Supprimer un livre du stock. \n");
       printf("6 - Afficher le nombre total de livres en stock. \n");
       printf(" veuillez saisire le nombre de commande :");
       scanf("%d", &commande);

       switch (commande) {
    case 1:
        addbook(titre, auteur, prix, quantite, NL);
        break;
    case 2:
        printf("tu choisie le Nombre 2");
        break;
    case 3:
        // Code à exécuter si expression == valeur2
        break;
    case 4:
        // Code à exécuter si expression == valeur2
        break;
    case 5:
        // Code à exécuter si expression == valeur2
        break;
    case 6:
        // Code à exécuter si expression == valeur2
        break;
    // Vous pouvez avoir plusieurs cas...
    default:
        // Code à exécuter si aucune valeur ne correspond
        break;
}










   }
    return 0;
}
