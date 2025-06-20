/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stalash <stalash@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 12:35:02 by stalash           #+#    #+#             */
/*   Updated: 2025/06/20 12:49:25 by stalash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name) : name(name) {}

Zombie::~Zombie() {
    std::cout << name << " is destroyed." << std::endl;
}

void Zombie::announce(void) {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

// This implementation of the Zombie class includes a constructor that initializes
// the Zombie's name, a destructor that outputs a message when the Zombie is
// destroyed, and an announce method that prints the Zombie's name followed by
// a zombie-like sound. The constructor takes a string parameter to set the name
// of the Zombie, allowing for unique identification of each Zombie instance.
// The destructor is called automatically when a Zombie object goes out of scope
// or is deleted, providing a way to clean up resources or perform any necessary
// finalization tasks. The announce method is used to simulate the Zombie's
// characteristic sound, making it clear when the Zombie is active. This class
// can be used to create Zombie objects that can announce themselves, providing
// a simple yet effective way to represent Zombies in a C++ program. The use of
// the std::cout stream allows for easy output of messages to the console,
// making it straightforward to see the Zombie's actions and lifecycle events.