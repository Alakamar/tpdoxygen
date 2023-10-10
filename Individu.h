/**
 * @file Individu.h
 * @author Philippe Lopistéguy
 * @brief Spécifie une classe Individu en relation réciproque avec sa Voiture.
 * @version 0.1
 * @date 2022-12-08
 *
 */

#ifndef INDIVIDU_H
#define INDIVIDU_H

using namespace std;

#include "Voiture.h" // Utilisée ci-dessous
#include <iostream>

class Voiture; /* Annonce une définition ultérieure de Voiture
                   permet de faire référence aux membres de Voiture dans la classe Individu */

/**
 * @brief Cette classe définit un Individu par un nom, un prénom et éventuellement une Voiture qu'il conduit.
 *
 * @details Au delà de représenter un Individu par son nom et son prénom, la classe Individu permet également
 * de renseigner la Voiture qu'il conduit.
 *
 * La Voiture associée à l'Individu est représentée par un pointeur vers un objet Voiture, qui peut être un NULL
 * si l'Individu ne possède pas de Voiture.
 * 
 * @warning Un Individu ne peut être associée à au plus une Voiture.
 * 
 * @deprecated Utiliser la classe Personne à la place.
 * 
 * @remark Wow c'est un Individu qui a une Voiture.
 */

class Individu
{
  // ATTRIBUTS
public:
  /**
   * @brief Le nom de l'individu
   *
   */
  string nom;
  /**
   * @brief Le prénom de l'individu
   *
   */
  string prenom;
  /**
   * @brief Lien avec la voiture de l'individu
   *
   */
  Voiture *maVoiture;

  // MÉTHODES
public:
  /**
   * @brief Construit un objet Individu à partir de son nom (premier paramètre)
   * et de son prénom (deuxième paramètre)
   *
   */
  Individu(string = "", string = "");
  /**
   * @brief Détruit un objet Individu
   *
   */
  ~Individu();

  /**
   * @brief Affiche l'identité de l'individu
   *
   * @return string sous la forme nom prénom
   */
  string toString();
  /**
   * @brief Affiche l'identité de l'individu et de sa voiture s'il en a une
   *
   * @return string
   * 
   * @bug Un espace en trop entre nom et prénom
   * 
   * @todo Ajouter un paramètre permettant de spécifier si on veut un affichage
   * du type "nom prénom" ou "prénom nom"
   */
  string toStringAndLink();

  // Méthodes spécifiques
  void majMaVoiture(Voiture *voiture);
  /**
   * @brief Définit la Voiture conduite par l'Individu
   * 
   * @param [in] voiture Pointeur vers l'objet Voiture conduit par l'Individu
   */
  void setMaVoiture(Voiture *voiture);
  void supprimerLien();
};

#endif // INDIVIDU_H