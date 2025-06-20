/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stalash <stalash@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 13:15:46 by stalash           #+#    #+#             */
/*   Updated: 2025/06/20 13:16:04 by stalash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanA {
private:
    std::string name;
    Weapon& weapon;

public:
    HumanA(std::string name, Weapon& weapon);
    void attack() const;
};

#endif

// HumanA.hpp
// This header file defines the HumanA class, which represents a human character
// that can attack using a weapon. The class includes a constructor that takes
// a string parameter for the human's name and a reference to a Weapon object.
// The `attack` method prints a message indicating that the human is attacking
// with the specified weapon. The use of a reference to the Weapon object allows
// for efficient access to the weapon without unnecessary copying, ensuring that
// the weapon can be used directly in the attack method. This class can be used