//
// Created by alexi on 13/11/2024.
//

#include "Utils.hpp"
#include <iostream>
#include <limits>

void Utils::clearInput() {
    std::cin.clear(); // Efface l'état d'erreur
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore les caractères restants dans le tampon
}
