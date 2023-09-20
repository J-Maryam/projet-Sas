#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef struct date{
    int annee;
    int mois;
    int jour;
}date;

typedef struct tache{
    int id;
    char *titre;
    char *description;
    date dl;
    char *statut;
}tache;

// typedef struct statut{
//     "à realiser";
//     "En cours de realiser";
//     "finalisée";
// }statut;

void ajoutt(){
    tache t[100];
    int n = 0;

        printf("\nAjouter une tache");
        t[n].id = n+1;
        printf("\n%d", t[n].id);

        t[n].titre= (char *)malloc(sizeof(char *));
        printf("\ntaper le titre : ");
        scanf("%s", t[n].titre);

        t[n].description= (char *)malloc(sizeof(char *));
        printf("\ntaper la description : ");
        scanf("%s", t[n].description);

        printf("\ntaper le deadline: ");
        scanf("%d/%d/%d ", &t[n].dl.jour, &t[n].dl.mois, &t[n].dl.annee);
        
        t[n].statut= (char *)malloc(sizeof(char *));
        printf("\ntaper le statut (à realiser, en cours de réalisation, finalisée): ");
        scanf("%s", t[n].statut);

        n++;
}

void ajoutpt(){
    tache t[100];
    int i, n;

    printf("\nEntrer le nombre de taches : ");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        ajoutt(); 
    }
}

void afficher(){
    int i;
    printf("La liste de toutes les taches");
    for(i = 0; i < n; i++){
    printf("La tache nmr %d");
    printf("le titre de la tache est: %d", t[n].titre);
    printf("sa description est : %d", t[n].description);

    }
}
void menu(){
    int choix, choix_trie, choix_mod, choix_recherche, choix_statistic;
    printf("***********Menu***********");
    printf("\n1. Ajouter une nouvelle tâche");
    printf("\n2. Ajouter plusieurs nouvelles tâches");
    printf("\n3. Afficher la liste de toutes les tâches");
    printf("\n4. Modifier une tâche");
    printf("\n5. Supprimer une tâche par identifiant");
    printf("\n6. Rechercher les Tâches");
    printf("\n7. Statistiques");
    printf("\0. Quitter");

    printf("\nChoisir un choix: ");
    scanf("%d", &choix);

    while(choix != 0){
        // start: 
        switch (choix)
        {
        case 1:
            ajoutt();    
            break;
        case 2:
            ajoutpt();    
            break;
        case 3:
        // start:
            switch(choix_mod){
                case 1:
                    // modf_des();    
                    break;
                case 2:
                    // modf_statut();    
                    break;
                case 3:
                    // modf_deadln();
                    break;
                default:
                    printf("\nOption invalide. Choisir une option entre (1-3).\n");
                    // goto start ;
                    break;
            }
            // modifier();
            break;
        case 4:
            switch(choix_trie){
                case 1:
                    // trie_a();    
                    break;
                case 2:
                    // trie_d();    
                    break;
                case 3:
                    // trie_3();
                    break;
                default:
                    printf("Option invalide. Choisir une option entre (1-3).\n");
                    // goto start ;
                    break;
            }
            afficher();
            break;
        case 5:
            // supprimer();
            break;
        case 6:
            // start:
            switch(choix_recherche){
                case 1:
                    // search_id();    
                    break;
                case 2:
                    // search_titre();    
                    break;
                default:
                    printf("Option invalide. Choisir une option entre (1-2).\n");
                    // goto start ;
                    break;
            }
            // Rechercher();
            break;
        case 7:
            // start:
            switch(choix_statistic){
                case 1:
                   
                    // affiche_total();    
                    break;
                case 2:
                    // affiche_complete_incomplete();    
                    break;
                case 3:
                    // affiche_rest();    
                    break;
                default:
                    printf("Option invalide. Choisir une option entre (1-3).\n");
                    // goto start ;
                    break;
            }
            // statistique();
            break;
        default:
            printf("Option invalide. Choisir une option entre 1 et 7.\n");
            // goto start ;
            break;
        }
    }

}


int main(){
    int i, n, id, deadline;
    char titre, description, statut;
    tache t[100];
    menu();
    ajoutt();
    // ajoutpt();
    afficher();

    
}