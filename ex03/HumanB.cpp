/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stalash <stalash@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 13:17:15 by stalash           #+#    #+#             */
/*   Updated: 2025/06/20 13:17:39 by stalash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(NULL) {}

void HumanB::setWeapon(Weapon& weapon) {
    this->weapon = &weapon;
}

void HumanB::attack() const {
    if (weapon)
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    else
        std::cout << name << " has no weapon to attack with!" << std::endl;
}

// This implementation of the HumanB class includes a constructor that initializes
// the human's name and sets the weapon pointer to NULL. The `setWeapon` method
// allows for setting the weapon using a reference to a Weapon object, storing
// the address of the weapon in the pointer. The `attack` method checks if the
// weapon pointer is not NULL before attempting to access the weapon's type.
// If the weapon is set, it prints a message indicating that the human is attacking
// with the specified weapon. If no weapon is set, it prints a message indicating
// that the human has no weapon to attack with. This class can be used to represent
// human characters that can attack using various weapons, providing a clear and
// concise way to manage human characters and their associated behaviors. The use
// of a pointer to the Weapon object allows for flexibility in weapon management,
// enabling the human character to change weapons dynamically. The `HumanB` class
// can be extended or modified to include additional properties or methods as needed,
// allowing for greater flexibility in how human characters are represented and
// managed within the application. It serves as a foundational component for
// building more complex character systems, enabling developers to create and
// manage human characters in a structured and organized manner.