//
// Created by alexi on 13/11/2024.
//

#ifndef UTILS_HPP
#define UTILS_HPP

#include <string>
#include <iostream>
#include <limits>

class Utils {

public:
    static void clearInput() {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    template<typename T>
        static T validateInput(T& val, std::string message) {

        while (true) {
            std::cout << message;
            if (std::cin >> val) {
                break;
            } else {
                std::cout << "Veuillez entrer une option valide !" << std::endl;
                clearInput();
            }
        }
        clearInput(); // Nettoie les caractères restants après validation
        return val;
    }
};



#endif //UTILS_HPP
