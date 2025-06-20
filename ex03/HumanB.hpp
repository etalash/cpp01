/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stalash <stalash@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 13:16:45 by stalash           #+#    #+#             */
/*   Updated: 2025/06/20 13:17:00 by stalash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanB {
private:
    std::string name;
    Weapon* weapon;

public:
    HumanB(std::string name);
    void setWeapon(Weapon& weapon);
    void attack() const;
};

#endif

// HumanB.hpp
// This header file defines the HumanB class, which represents a human character
// that can attack using a weapon. The class includes a constructor that takes
// a string parameter for the human's name and a method to set the weapon using
// a reference to a Weapon object. The `attack` method prints a message indicating
// that the human is attacking with the specified weapon. The use of a pointer to
// the Weapon object allows for flexibility in weapon management, enabling the
// human character to change weapons dynamically.