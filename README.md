# Projet d'entrainement pour apprendre C++

## Description

Ce projet est un projet d'entrainement pour apprendre le C++.
Il s'agit d'un projet de gestion de personnel.
Chaque personne peut definir s'il teletravaille ou non chaque jour.
Le manager peut suivre les teletravailleurs et les non teletravailleurs.
Les données sont stockées dans une base de données sqlite3.

## installation de sqlite3 sur windows
Dans le dossier de sqlite3, exécuter les commandes suivantes :

```bash
gcc -c sqlite3.c
```

```bash
gcc -shared -o sqlite3.dll sqlite3.o
```

-> mettre le fichier sqlite3.dll dans le répertoire bin de mingw

```bash
ar rcs libsqlite3.a sqlite3.o
```

-> mettre le fichier libsqlite3.a dans le répertoire lib de mingw