/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stalash <stalash@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 13:01:33 by stalash           #+#    #+#             */
/*   Updated: 2025/06/20 13:02:01 by stalash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie {
private:
    std::string name;

public:
    Zombie();
    ~Zombie();

    void setName(std::string name);
    void announce(void);
};

Zombie* zombieHorde(int N, std::string name);

#endif

// zombie.hpp
// This header file defines the Zombie class, which includes a default constructor,
// a destructor, a method to set the Zombie's name, and a method to announce
// the Zombie's presence by printing its name followed by a zombie-like sound.
// Additionally, it declares a function `zombieHorde` that creates an array of
// Zombie objects, allowing for the creation of multiple Zombies with the same
// name. The class encapsulates the behavior and properties of a Zombie, allowing
// for the creation of Zombie objects that can be announced. The `zombieHorde`
// function is designed to create a horde of Zombies, each with the specified
// name, and return a pointer to the array of Zombies. This allows for easy
// management of multiple Zombie instances, enabling the creation of a group of
// Zombies that can all announce themselves with the same name. The use of dynamic
// memory allocation in the `zombieHorde` function allows for flexibility in
// creating a variable number of Zombie objects, making it suitable for scenarios
// where the number of Zombies needed is not known at compile time. This approach
// provides a straightforward way to create and manage Zombie objects in a C++
// program, leveraging dynamic memory allocation to ensure that each Zombie can
// be uniquely identified and controlled throughout the program's lifecycle.