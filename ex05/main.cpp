/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stalash <stalash@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 13:30:44 by stalash           #+#    #+#             */
/*   Updated: 2025/06/20 13:30:53 by stalash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main() {
    Harl harl;

    harl.complain("DEBUG");
    std::cout << std::endl;
    harl.complain("INFO");
    std::cout << std::endl;
    harl.complain("WARNING");
    std::cout << std::endl;
    harl.complain("ERROR");

    return 0;
}

// This main function demonstrates the usage of the Harl class by creating an
// instance of Harl and calling the `complain` method with different complaint
// levels: "DEBUG", "INFO", "WARNING", and "ERROR". Each call to `complain`
// triggers the corresponding method in the Harl class, which prints a message
// to the console based on the complaint level. The output is separated by
// newlines for clarity. This showcases how the Harl class can handle different