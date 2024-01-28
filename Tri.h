//
// Created by Arthur Mathis on 28/01/2024.
//

#ifndef TRI_TRI_H
#define TRI_TRI_H

#include <vector>

/**
 * @brief Fonction de recherche du minimum dans un tableau
 * @param c Le std::vector d'entiers
 * @param pos La position de départ dans le tabelau
 * @return
 */
[[maybe_unused]] inline int rechercheMinimumInt(std::vector<int> &c, int pos);
/**
 * @brief Fonction de recherche du minimum dans un tableau
 * @param c Le std::vector de réels
 * @param pos La position de départ dans le tabelau
 * @return
 */
[[maybe_unused]] inline int rechercheMinimumDouble(std::vector<double> &c, int pos);

/**
 * @brief Fonction de recherche du maximum dans un tableau
 * @param c Le std::vector d'entiers
 * @param pos La position de départ dans le tabelau
 * @return
 */
[[maybe_unused]] inline int rechercheMaximumInt(std::vector<int> &c, int pos);
/**
 * @brief Fonction de recherche du maximum dans un tableau
 * @param c Le std::vector de réels
 * @param pos La position de départ dans le tabelau
 * @return
 */
[[maybe_unused]] inline int rechercheMaximumDouble(std::vector<double> &c, int pos);

/**
 * @brief Fonction triant un std::vector dans l'ordre croissant
 * @param c Le std::vector d'entiers
 */
void triMinimum(std::vector<int> &c);
/**
 * @brief Fonction triant un std::vector dans l'ordre croissant
 * @param c Le std::vector de réels
 */
void triMinimum(std::vector<double> &c);

/**
 * @brief Fonction triant un std::vector dans l'ordre décroissant
 * @param c Le std::vector d'entiers
 */
void triMaximum(std::vector<int> &c);
/**
 * @brief Fonction triant un std::vector dans l'ordre décroissant
 * @param c Le std::vector de réels
 */
void triMaximum(std::vector<double> &c);

/**
 * @brief Fonction de tri par appels récursifs
 * @param c Le std::vector d'entiers
 * @param g Notre position à gauche
 * @param d Notre position à droite
 */
void triFusion(std::vector<int> &c, unsigned g, unsigned d);
/**
 * @brief Fonction de tri par appels récursifs
 * @param c Le std::vector de réels
 * @param g Notre position à gauche
 * @param d Notre position à droite
 */
void triFusion(std::vector<double> &c, unsigned g, unsigned d);

/**
 * @brief
 * @param c Le std::vector à fusionner
 * @param g La borne gauche
 * @param m La borne droite
 * @param d Le millieu
 */
[[maybe_unused]] inline void fusion(std::vector<int> &c, int g, int m, int d);
/**
 * @brief Fonction de tri par appels récursifs
 * @param c Le std::vector d'entiers à trier
 * @param g La borne gauche
 * @param d La borne droite
 */
void triFusion(std::vector<int> &c, int g, int d);

/**
 * @brief
 * @param c Le std::vector à fusionner
 * @param g La borne gauche
 * @param m La borne droite
 * @param d Le millieu
 */
[[maybe_unused]] inline void fusion(std::vector<double> &c, int g, int m, int d);
/**
 * @brief Fonction de tri par appels récursifs
 * @param c Le std::vector de réels à trier
 * @param g La borne gauche
 * @param d La borne droite
 */
void triFusion(std::vector<double> &c, int g, int d);

#endif //TRI_TRI_H
