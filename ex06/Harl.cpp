/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stalash <stalash@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 13:35:24 by stalash           #+#    #+#             */
/*   Updated: 2025/06/20 13:35:59 by stalash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

void Harl::debug(void) {
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void) {
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger!" << std::endl;
}

void Harl::warning(void) {
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years!" << std::endl;
}

void Harl::error(void) {
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level) {
    std::string levels[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
    void (Harl::*functions[4])(void) = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };

    for (int i = 0; i < 4; ++i) {
        if (levels[i] == level) {
            (this->*functions[i])();
            return;
        }
    }

    std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

// This implementation of the Harl class includes methods for handling different
// complaint levels: debug, info, warning, and error. Each method prints a message
// to the console that corresponds to the complaint level. The `complain` method
// takes a string parameter representing the complaint level and uses an array
// of strings and an array of function pointers to call the appropriate method
// based on the level provided. If the level does not match any of the predefined
// levels, it prints a default message indicating that the complaint is about
// insignificant problems. This design allows for easy management of different
// complaint levels and their associated actions, providing a clear and concise
// interface for handling complaints. The use of function pointers allows for
// dynamic dispatch based on the complaint level, making the code more flexible
// and maintainable. This class can be used in various applications where complaint
// handling is required, providing a structured way to manage different complaint
// levels and their associated behaviors. The methods for each complaint level
// are private, ensuring that they can only be called through the `complain`
// method, which serves as the public interface for interacting with the Harl
// class. This design promotes encapsulation and ensures that the internal
// implementation details of how each complaint level is handled are hidden from
// the user of the class. The Harl class can be used in various applications
// where complaint handling is required, providing a clear and concise way to
// manage different complaint levels and their associated behaviors.