#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct date {
    int jour;
    int mois;
    int annee;

} date;

 typedef struct etudiant {
       int numero_unique ;
       char nom [50];
       char prenom [50];
       date date_naissance;
       char departement [50];
       float note_generale;
    } etudiant;

    struct etudiant etu [100];
    int nbretu=0;
    int i ;
    int numsupp;
    int n;
void ajouter (){
    printf("entrer le numero unique d etudiant:");
    scanf(" %d",&etu[nbretu].numero_unique);
    printf("entrer le nom: ");
    scanf(" %s",&etu[nbretu].nom);
    printf("entrer le prenom: ");
    scanf(" %s",&etu[nbretu].prenom);
    printf("entrer la date de naissance: ");
    scanf(" %d %d %d",&etu[nbretu].date_naissance.jour,&etu[nbretu].date_naissance.mois,&etu[nbretu].date_naissance.annee);
    printf("entrer le departement: ");
    scanf(" %s",&etu[nbretu].departement);
    printf("entrer la note generale: ");
    scanf(" %f",&etu[nbretu].note_generale);
    nbretu++;
               }

void supprimer(){
for(i=0;i<nbretu;i++){
        if(etu[i].numero_unique==numsupp){
            etu[i].numero_unique=etu[i+1].numero_unique;
            strcpy(etu[i].nom,etu[i+1].nom);
            strcpy(etu[i].prenom,etu[i+1].prenom);
            etu[i].date_naissance.jour,etu[i].date_naissance.mois,etu[i].date_naissance.annee=etu[i+1].date_naissance.jour,etu[i+1].date_naissance.mois,etu[i+1].date_naissance.annee;
            strcpy(etu[i].departement,etu[i+1].departement);
            etu[i].note_generale=etu[i+1].note_generale;
                                         }
         printf("le numero et supprimer\n");
         nbretu--;
                }
                 }
                 
void afficher (){
    if (nbretu==0){
    printf("il n ya pas d etudiant\n");
    }
    else{
    for(i=0;i<nbretu;i++){
    printf("les information d etudiant : [%d] \n",i+1);
    printf("le numero unique d etudiant: %d \n",etu[i].numero_unique);
    printf("le nom d etudiant: %s \n",etu[i].nom);
    printf("le prenom d etudiant: %s \n",etu[i].prenom);
    printf("le date de naissance d etudiant:%d /%d /%d\n",etu[i].date_naissance.jour,etu[i].date_naissance.mois,etu[i].date_naissance.annee);
    printf("departement: %s \n",etu[i].departement);
    printf("la note general: %f \n",etu[i].note_generale);
    printf("_____________________________________________\n");
                        }
        }
}

void modifier(){
    int numero;
    int Trouver = 0;
    printf("Entrer le numero unique de l etudiant a modifier: ");
    scanf("%d", &numero);

    for (i = 0; i < nbretu; i++) {
        if (etu[i].numero_unique == numero) {
            Trouver = 1;
            printf("Modifier le nom (actuel: %s): ", etu[i].nom);
            scanf("%s", etu[i].nom);
            printf("Modifier le prenom (actuel: %s): ", etu[i].prenom);
            scanf("%s", etu[i].prenom);
            printf("Modifier la date de naissance (actuel: %d/%d/%d):\n", etu[i].date_naissance.jour, etu[i].date_naissance.mois, etu[i].date_naissance.annee);
            printf("Jour: ");
            scanf("%d", &etu[i].date_naissance.jour);
            printf("Mois: ");
            scanf("%d", &etu[i].date_naissance.mois);
            printf("Annee: ");
            scanf("%d", &etu[i].date_naissance.annee);
            printf("Modifier le departement (actuel: %s): ", etu[i].departement);
            scanf("%s", etu[i].departement);
            printf("Modifier la note generale (actuel: %f): ", etu[i].note_generale);
            scanf("%f", &etu[i].note_generale);
            printf("Les informations ont ete modifiees.\n");
            break;
    }else{
                printf("Aucun etudiant trouve avec le numero %d.\n",&numero);
           }
    }
    }


int main() {
    int choix;
while(1){
    printf("------------------menu-----------------\n");
    printf("1_ ajouter un etudiant: \n");
    printf("2_ supprimer un etudiant: \n");
    printf("3_ afficher les details d un etuduant: \n");
    printf("4_ modifier un etudiant: \n");
    printf("5_ calculer la moyenne generale: \n");
    printf("6_ statistiques: \n");
    printf("7_ rechercher un etudiant: \n");
    printf("8_ trier un etudiant par: \n");
    printf("taper votre choix: \n");
    scanf("%d",&choix);
    switch(choix){
                    case 1 :
                            ajouter();
                          break;

                    case 2 :
                            supprimer();
                           break;

                    case 3 :
                            afficher();
                           break;

                    case 4 :
                            modifier();
                           break;

                    case 5 : 
                            do{
                            printf("afficher le nombre total d etudiants inscrits")
                             printf("afficher le nombre d etudiants dans chaque departement")
                             printf("afficher les etudiants ayant une moyenne generale superieure a un certain seuil")
                             printf("afficher les 3 etudiants ayant les meilleures notes")
                             printf("afficher le nombre d etudiants ayant reussi dans chaque departement note superrieur ou  egal 10/20")
                            } while (choix2<6);
                           break;

                    case 6 : return 0;
                           break;

            }

}


    return 0;
}
