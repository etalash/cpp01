/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stalash <stalash@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 13:36:07 by stalash           #+#    #+#             */
/*   Updated: 2025/07/17 10:06:51 by stalash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int getLevelIndex(std::string level) {
    std::string levels[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
    for (int i = 0; i < 4; i++) {
        if (levels[i] == level)
            return i;
    }
    return -1;
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <level>" << std::endl;
        return 1;
    }

    Harl harl;
    int levelIndex = getLevelIndex(argv[1]);

    switch (levelIndex) {
        case 0:
            harl.complain("DEBUG");
            /* FALLTHROUGH */
        case 1:
            harl.complain("INFO");
            /* FALLTHROUGH */
        case 2:
            harl.complain("WARNING");
            /* FALLTHROUGH */
        case 3:
            harl.complain("ERROR");
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }

    return 0;
}

// complaint levels and how it can be used to manage different complaint
// levels in a structured manner. The program expects a single command-line
// argument representing the complaint level, and it uses a switch statement
// to call the appropriate method based on the level provided. If the level
// does not match any of the predefined levels, it prints a default message
// indicating that the complaint is about insignificant problems. This design
// allows for easy extension and modification of the Harl class to handle
// additional complaint levels or behaviors in the future, making it a flexible
// and reusable component for managing complaints in a C++ program. The use of
// the `getLevelIndex` function simplifies the process of determining which
// complaint level to handle, allowing for a clean and organized way to manage
// the different complaint levels and their associated actions. This approach
// promotes better code organization, readability, and maintainability, making
// it easier for developers to work with complex object hierarchies and
// relationships in their C++ programs. The main function serves as a simple
// test of the Harl class functionality, allowing developers to see how the
// Harl class behaves when handling different complaint levels.