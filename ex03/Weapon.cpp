/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stalash <stalash@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 13:15:17 by stalash           #+#    #+#             */
/*   Updated: 2025/06/20 13:15:36 by stalash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type) {}

const std::string& Weapon::getType() const {
    return this->type;
}

void Weapon::setType(std::string type) {
    this->type = type;
}

// This implementation of the Weapon class includes a constructor that initializes
// the weapon's type, a method to get the type of the weapon, and a method
// to set the type of the weapon. The constructor takes a string parameter to
// set the type of the weapon, allowing for unique identification of each weapon
// instance. The `getType` method returns a constant reference to the weapon's type,
// ensuring that the type can be accessed efficiently without unnecessary copying.
// The `setType` method allows for modifying the weapon's type after it has been
// created, providing flexibility in how weapon instances are managed. This class
// can be used to represent various types of weapons in a program, providing a
// clear and concise way to manage weapon types and their associated behaviors.
// The use of a reference in the `getType` method allows for efficient access to
// the weapon type without unnecessary copying, ensuring that the type can be
// accessed quickly and efficiently. This class can be extended or modified to
// include additional properties or methods as needed, allowing for greater
// flexibility in how weapons are represented and managed within the application.