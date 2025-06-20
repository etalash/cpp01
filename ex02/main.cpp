/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stalash <stalash@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 13:09:29 by stalash           #+#    #+#             */
/*   Updated: 2025/06/20 13:09:46 by stalash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main() {
    std::string brain = "HI THIS IS BRAIN";

    std::string* stringPTR = &brain;
    std::string& stringREF = brain;

    std::cout << "Memory address of the string variable: " << &brain << std::endl;
    std::cout << "Memory address held by stringPTR:     " << stringPTR << std::endl;
    std::cout << "Memory address held by stringREF:     " << &stringREF << std::endl;

    std::cout << std::endl;

    std::cout << "Value of the string variable:         " << brain << std::endl;
    std::cout << "Value pointed to by stringPTR:        " << *stringPTR << std::endl;
    std::cout << "Value pointed to by stringREF:        " << stringREF << std::endl;

    return 0;
}

// This program demonstrates the use of pointers and references in C++ by
// creating a string variable, a pointer to that string, and a reference to
// the same string. It prints the memory addresses of the string variable,
// the pointer, and the reference, as well as the values they point to.
// The output shows that both the pointer and the reference hold the same
// memory address as the original string variable, and they all point to the
// same value, which is "HI THIS IS BRAIN". This illustrates how pointers
// and references can be used to access and manipulate the same data in C++.