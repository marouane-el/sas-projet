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
                           break;

                   case 3 :afficher();
                       break;

                    case 4 :
                       break;

                    case 5 :
                       break;

                       case 6 : return 0;
                       break;

            }

}


    return 0;
}
