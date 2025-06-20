/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stalash <stalash@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 13:16:12 by stalash           #+#    #+#             */
/*   Updated: 2025/06/20 13:16:33 by stalash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : name(name), weapon(weapon) {}

void HumanA::attack() const {
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}

// This implementation of the HumanA class includes a constructor that initializes
// the human's name and a reference to a Weapon object. The `attack` method prints
// a message indicating that the human is attacking with the specified weapon.
// The use of a reference to the Weapon object allows for efficient access to the
// weapon without unnecessary copying, ensuring that the weapon can be used directly
// in the attack method. This class can be used to represent human characters that
// can attack using various weapons, providing a clear and concise way to manage
// human characters and their associated behaviors. The `HumanA` class can be
// extended or modified to include additional properties or methods as needed,
// allowing for greater flexibility in how human characters are represented and
// managed within the application. It serves as a foundational component for
// building more complex character systems, enabling developers to create and
// manage human characters in a structured and organized manner.