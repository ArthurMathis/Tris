//
// Created by Arthur Mathis on 28/01/2024.
//

#include "Tri.h"

#include <iostream>

[[maybe_unused]] inline int rechercheMinimumInt(std::vector<int> &c, int pos){
    // On vérifie que le tableau est non-vide
    if(c.empty()) return -1;

    // On stocke le minimum et sa valeur
    int iMin = pos;
    int min = c[pos];
    // On recherche le minimum du tbealu et son indice
    for(int i{pos}; i < c.size(); i++){
        // On compare la valeur au minimum actuel
        if(c[i] < min){
            // On met-à-jour nos valeurs
            min = c[i];
            iMin = i;
        }
    }
    return iMin;
}

[[maybe_unused]] inline int rechercheMinimumDouble(std::vector<double> &c, int pos){
    // On vérifie que le tableau est non-vide
    if(c.empty()) return -1;

    // On stocke le minimum et sa valeur
    int iMin = pos;
    double min = c[pos];
    // On recherche le minimum du tbealu et son indice
    for(int i{pos}; i < c.size(); i++){
        // On compare la valeur au minimum actuel
        if(c[i] < min){
            // On met-à-jour nos valeurs
            min = c[i];
            iMin = i;
        }
    }
    return iMin;
}

[[maybe_unused]] inline int rechercheMaximumInt(std::vector<int> &c, int pos){
    // On vérifie que le tableau est non-vide
    if(c.empty()) return -1;

    // On stocke le minimum et sa valeur
    int iMax = pos;
    int max = c[pos];
    // On recherche le minimum du tbealu et son indice
    for(int i{pos}; i < c.size(); i++){
        // On compare la valeur au minimum actuel
        if(c[i] > max){
            // On met-à-jour nos valeurs
            max = c[i];
            iMax = i;
        }
    }
    return iMax;
}

[[maybe_unused]] inline int rechercheMaximumDouble(std::vector<double> &c, int pos){
    // On vérifie que le tableau est non-vide
    if(c.empty()) return -1;

    // On stocke le minimum et sa valeur
    int iMax = pos;
    double max = c[pos];
    // On recherche le minimum du tbealu et son indice
    for(int i{pos}; i < c.size(); i++){
        // On compare la valeur au minimum actuel
        if(c[i] > max){
            // On met-à-jour nos valeurs
            max = c[i];
            iMax = i;
        }
    }
    return iMax;
}

void triMinimum(std::vector<int> &c){
    // On lance le tri du tableau
    for(int i{0}; i < c.size(); i++)
        // On échange la case actuelle avec le minimum à compter de cette dernière
        std::swap(c[i], c[rechercheMinimumInt(c, i)]);

}

void triMinimum(std::vector<double> &c){
    // On lance le tri du tableau
    for(int i{0}; i < c.size(); i++)
        // On échange la case actuelle avec le minimum à compter de cette dernière
        std::swap(c[i], c[rechercheMinimumDouble(c, i)]);
}

void triMaximum(std::vector<int> &c){
    // On lance le tri du tableau
    for(int i{0}; i < c.size(); i++)
        // On échange la case actuelle avec le minimum à compter de cette dernière
        std::swap(c[i], c[rechercheMaximumInt(c, i)]);
}

void triMaximum(std::vector<double> &c){
    // On lance le tri du tableau
    for(int i{0}; i < c.size(); i++)
        // On échange la case actuelle avec le minimum à compter de cette dernière
        std::swap(c[i], c[rechercheMaximumDouble(c, i)]);
}

[[maybe_unused]] inline void fusion(std::vector<int> &c, int g, int m, int d){
    std::vector<int> aux;
    // allocation d’un tableau de d-g+1
    aux.reserve(d-g+1);

    // éléments indicés de 0 à d-g
    int i = g, j = m+1;
    // tant que aucun des deux sous-tableaux n’est vide
    while (i <= m && j <= d){
        if (c[i] <= c[j]){
            aux.push_back(c[i]);
            i++;
        } else {
            aux.push_back(c[j]);
            j++;
        }
    }

    // le sous-tableau gauche n’est pas vide
    while (i<=m) {
        aux.push_back(c[i]);
        i++;
    }
    // le sous-tableau droit n’est pas vide
    while (j<=d) {
        aux.push_back(c[j]);
        j++;
    }
    // Il reste à recopier aux[0…d-g] dans T[g…d]
    for (int i{g}, j{0}; i<=d; i++, j++)
        c[i] = aux[j];
}

void triFusion(std::vector<int> &c, int g, int d){
    if(g < d){
        int m = (g+d)/2;
        // On trie le sous-tableau gauche
        triFusion(c,g,m);
        // On trie le sous-tableau droit
        triFusion(c,m+1,d);
        // On fusionne les deux tableaux
        fusion(c,g,m,d);
    }
}

[[maybe_unused]] inline void fusion(std::vector<double> &c, int g, int m, int d){
    std::vector<int> aux;
    // allocation d’un tableau de d-g+1
    aux.reserve(d-g+1);

    // éléments indicés de 0 à d-g
    int i = g, j = m+1;
    // tant que aucun des deux sous-tableaux n’est vide
    while (i <= m && j <= d){
        if (c[i] <= c[j]){
            aux.push_back(c[i]);
            i++;
        } else {
            aux.push_back(c[j]);
            j++;
        }
    }

    // le sous-tableau gauche n’est pas vide
    while (i<=m) {
        aux.push_back(c[i]);
        i++;
    }
    // le sous-tableau droit n’est pas vide
    while (j<=d) {
        aux.push_back(c[j]);
        j++;
    }
    // Il reste à recopier aux[0…d-g] dans T[g…d]
    for (int i{g}, j{0}; i<=d; i++, j++)
        c[i] = aux[j];
}

void triFusion(std::vector<double> &c, int g, int d){
    if(g < d){
        int m = (g+d)/2;
        // On trie le sous-tableau gauche
        triFusion(c,g,m);
        // On trie le sous-tableau droit
        triFusion(c,m+1,d);
        // On fusionne les deux tableaux
        fusion(c,g,m,d);
    }
}