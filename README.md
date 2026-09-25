# TD-et-TP-C-DUT-1

Exercices de **programmation en C++** réalisés en TD/TP dans le cadre du **DUT Informatique**. Le fil rouge est la gestion d'une journée d'initiation technologique au **Centre Numérique Horizon (CNH)**.

## Structure du dépôt

| Élément | Description |
| --- | --- |
| `main1.cpp` → `main7.cpp` | 7 programmes autonomes (avec binaires pré-compilés `main1`…`main7`) |
| `CNH/` | Version structurée des exercices CNH, un programme par module |

## Les exercices (`CNH/`)

| Programme | Rôle |
| --- | --- |
| `ecran_accueil_centre` | Écran d'accueil du centre |
| `controle_inscription` | Vérification de l'inscription d'un participant |
| `controle_code_catégorie` | Contrôle du code catégorie du participant |
| `verification_age_profit` | Vérification de l'âge et du profil |
| `calcul_tarif` | Calcul du tarif d'inscription |
| `reduction_profil` | Application de réductions selon le profil |
| `facturation_kit_pédagogique` | Facturation du kit pédagogique |
| `calcul_notes_ateliers` | Calcul des notes des ateliers |
| `affichage_ateliers` | Affichage du programme des ateliers |
| `fiche_participant` | Génération de la fiche participant |
| `decision_finale` | Décision finale d'admission / validation |
| `programme_final` | Programme final de la journée |
| `bilan_participant` | Bilan par participant |
| `simulation_caisse` | Simulation de la caisse |

## Compilation

Les programmes utilisent `iostream` et la saisie console.

```bash
# Compiler un exercice, par exemple le programme principal N°1
g++ main1.cpp -o main1
./main1

# Ou depuis le dossier CNH
g++ CNH/calcul_tarif.cpp -o CNH/calcul_tarif
./CNH/calcul_tarif
```

Chaque source possède son binaire pré-compilé (`main1`, `CNH/calcul_tarif`, …) prêt à exécuter.

## Prérequis

- Compilateur C++ (`g++`) disponible en ligne de commande (Linux / WSL).

## Note

Les programmes reposent sur des données saisies en console ; aucun fichier de configuration externe n'est requis.