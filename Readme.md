Parfait ! Voici la **version professionnelle et complète** du README mise à jour pour un **travail de groupe**, avec une mention collective des auteurs.

---

# 🎓 Student Record Manager – Langage C

Ce projet est une application console développée en **langage C**, conçue pour gérer un registre d'étudiants de manière simple et efficace.
Elle permet aux utilisateurs d'ajouter, d'afficher, de trier et de sauvegarder les informations des étudiants dans un fichier texte.
Ce travail met en pratique des concepts fondamentaux de la programmation en C, notamment l'utilisation des **structures**, des **tableaux**, des **fichiers**, et des **algorithmes de tri**.

---

## 🚀 Fonctionnalités

* ➕ **Ajout d’un étudiant** (ID, nom, note)
* 📋 **Affichage de la liste complète des étudiants**
* 🔤 **Tri alphabétique par nom**
* 📈 **Tri décroissant par note**
* 💾 **Sauvegarde des données dans un fichier (`etudiants.txt`)**
* 📂 **Chargement automatique des données depuis le fichier**

---

## 🧩 Architecture du programme

### ✅ Structure de données

```c
struct Student {
    int id;
    char name[50];
    float grade;
};
```

Les étudiants sont stockés dans un tableau global :

```c
struct Student students[MAX_ETUDIANTS];
int count = 0;
```

### ✅ Fonctions principales

* `ajouterEtudiant()` : saisie des données
* `afficherEtudiants()` : affichage formaté de tous les étudiants
* `trierEtudiantsParNom()` : tri alphabétique
* `trierEtudiantsParNote()` : tri décroissant selon la note
* `sauvegarderDansFichier()` : enregistrement dans `etudiants.txt`
* `chargerEtudiantsDepuisFichier()` : chargement automatique au lancement
* `menu()` : interface de navigation en ligne de commande

---

## 💾 Gestion des fichiers

Les données sont sauvegardées dans un fichier texte nommé **`etudiants.txt`**.
Chaque étudiant est représenté sur une ligne au format suivant :

```
<ID> <Nom avec _ si espaces> <Note>
```

Exemple :

```
101 Jean_Dupont 15.5
102 Amina_Diallo 17.8
```

---

## 🧪 Compilation et exécution

### 📌 Compilation (GCC)

```bash
gcc -o gestion_etudiants main.c
```

### ▶️ Exécution

```bash
./gestion_etudiants
```

---

## 🧠 Objectifs pédagogiques

Ce projet permet de :

* Manipuler des **structures (struct)** pour représenter des entités complexes
* Utiliser des **tableaux de structures** pour gérer des collections
* Lire et écrire dans des **fichiers texte**
* Implémenter des **algorithmes de tri simples**
* Construire une **interface CLI** claire et interactive

---

## 🖥️ Interface utilisateur (extrait)

```
===== MENU =====
1. Ajouter un étudiant
2. Afficher les étudiants
3. Trier par nom
4. Trier par note
5. Sauvegarder
6. Charger depuis fichier
0. Quitter
```

---

## 🧑‍🤝‍🧑 Auteurs

Ce projet a été réalisé dans le cadre d’un **travail de groupe**, avec une collaboration axée sur la compréhension des fondamentaux du langage C et des structures de gestion de données.

---

## 🔮 Pistes d’amélioration

* Gestion dynamique des données (via `malloc` et `realloc`)
* Ajout de la suppression/modification d’un étudiant
* Recherche par nom ou ID
* Interface graphique (GTK, Qt)
* Ajout d'une interface en plusieurs langues

