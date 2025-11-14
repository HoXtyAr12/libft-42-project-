# Libft

## 🧾 Description

Libft est une bibliothèque C recréant un ensemble de fonctions fondamentales de la libc, ainsi que des fonctions utilitaires supplémentaires. Ce projet a pour objectif de renforcer la compréhension du langage C, de la gestion mémoire, et des pointeurs.

Ce projet est l’un des premiers piliers de l'école 42 et constitue la base pour les futurs projets.

---

## 🎯 Objectifs du projet

* Reproduire des fonctions essentielles (strlen, memcpy, atoi, etc.)
* Gérer correctement l'allocation et la libération mémoire
* Comprendre la manipulation de pointeurs et structures
* Écrire du code propre, robuste et modulaire

---

## 🔧 Fonctionnalités principales

La libft contient plusieurs catégories de fonctions :

### 🔹 Fonctions de la libc

* `ft_strlen`
* `ft_memcpy`
* `ft_strdup`
* `ft_atoi`
* `ft_memset`
* etc.

### 🔹 Fonctions supplémentaires

* Fonctions de manipulation de chaînes
* Gestion de listes chaînées (`t_list`)
* Fonctions utilitaires diverses

---

## 📁 Structure du projet

```
libft/
│
├── ft_*.c             # Fonctions principales
├── ft_lst*.c          # Fonctions sur les listes chaînées
├── libft.h            # Header principal
├── Makefile           # Compilation de la bibliothèque
└── README.md          # Documentation
```

---

## 🛠️ Compilation

Pour compiler la bibliothèque :

```
make
```

Cela génère un fichier `libft.a` prêt à être utilisé dans vos projets.

Pour supprimer les objets :

```
make clean
```

Pour tout nettoyer :

```
make fclean
```

Pour recompiler entièrement :

```
make re
```

---

## 📌 Utilisation

Dans un projet C :

```c
#include "libft.h"
```

Et compiler avec la bibliothèque :

```
gcc main.c -L. -lft
```

---

## 👤 Auteur

**Gabriel Benetrix**
École 42
