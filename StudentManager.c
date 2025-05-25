#include <stdio.h>      // Bibliothèque standard pour les entrées/sorties
#include <string.h>     // Pour la fonction strcmp utilisée dans le tri par nom

#define MAX_ETUDIANTS 100  // Nombre maximum d'étudiants pouvant être stockés

// Structure représentant un étudiant
struct Student {
    int id;              // ID unique de l'étudiant
    char name[50];       // Nom de l'étudiant (chaîne de caractères)
    float grade;         // Note de l'étudiant
};

// Tableau global pour stocker les étudiants
struct Student students[MAX_ETUDIANTS];
int count = 0; // Nombre actuel d'étudiants enregistrés

// Déclarations (prototypes) des fonctions utilisées dans le programme
void ajouterEtudiant();
void afficherEtudiants();
void trierEtudiantsParNom();
void trierEtudiantsParNote();
void sauvegarderDansFichier();
void chargerEtudiantsDepuisFichier();
void menu();

// Fonction pour ajouter un nouvel étudiant
void ajouterEtudiant() {
    if (count >= MAX_ETUDIANTS) { // Vérifie si on atteint la limite
        printf("❌ Liste pleine, impossible d'ajouter un étudiant.\n");
        return;
    }
    // Saisie des informations de l'étudiant
    printf("Entrez l'ID de l'étudiant : ");
    scanf("%d", &students[count].id);

    printf("Entrez le nom de l'étudiant : ");
    scanf(" %[^\n]", students[count].name);  // Lit une ligne entière (avec espaces)

    printf("Entrez la note de l'étudiant : ");
    scanf("%f", &students[count].grade);

    count++;  // Incrémente le nombre total d'étudiants
    printf("✅ Étudiant ajouté.\n");
}

// Fonction pour afficher tous les étudiants enregistrés
void afficherEtudiants() {
    if (count == 0) {
        printf("La liste est vide.\n");
        return;
    }
    printf("\nListe des étudiants :\n");
    for (int i = 0; i < count; i++) {
        printf("ID : %d, Nom : %s, Note : %.2f\n", students[i].id, students[i].name, students[i].grade);
    }

