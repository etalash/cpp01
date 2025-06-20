/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stalash <stalash@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 13:03:12 by stalash           #+#    #+#             */
/*   Updated: 2025/06/20 13:05:36 by stalash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int main() {
    int count = 5;
    Zombie* horde = zombieHorde(count, "HordeZombie");

    if (!horde)
        return 1;

    for (int i = 0; i < count; i++) {
        horde[i].announce();
    }

    delete[] horde;

    return 0;
}

// This main function demonstrates the usage of the Zombie class by creating a
// horde of Zombie objects using the `zombieHorde` function, announcing each
// Zombie in the horde, and then deleting the allocated memory to free up resources.
// It first checks if the horde was created successfully, and if so, it iterates
// through the horde, calling the `announce` method on each Zombie to print its
// name followed by a zombie-like sound. Finally, it deletes the horde using
// `delete[]` to ensure that all allocated memory is properly released, preventing
// memory leaks in the application. This showcases both dynamic memory management
// and the ability to create multiple Zombie instances with the same name, allowing
// for flexible Zombie object creation and management in a C++ program. The use of
// the `zombieHorde` function allows for easy creation of a group of Zombies,
// each with the specified name, and the `announce` method provides a way to
// simulate the Zombies' characteristic sounds, making it clear when they are active.
// This approach is essential for building robust and flexible applications that
// require dynamic object management, such as games, simulations, and other
// interactive applications where the creation and management of objects like
// Zombies are crucial for the overall functionality and user experience of the
// program. By using this main function, developers can easily create and manage
// Zombie instances, ensuring that each Zombie has a unique name and can be
// interacted with independently of other Zombie objects in the program. This
// pattern is widely used in C++ programming to create objects that require
// specific initialization parameters, such as names in the case of Zombie objects,
// and to provide a clear and concise interface for creating and managing these
// objects within the application. It promotes better code organization, readability,
// and maintainability, making it easier for developers to work with complex object
// hierarchies and relationships in their C++ programs. The main function serves as
// a simple test of the Zombie class functionality, allowing developers to see how
// the Zombie objects behave when created and announced. It provides a clear and
// concise way to demonstrate the Zombie class's capabilities, making it easier for
// developers to understand how to use the class in their own applications. The use
// of dynamic memory allocation in this example illustrates the flexibility of C++
// in managing object lifetimes and memory, allowing for different approaches to
// object creation based on the specific needs of the application. This is particularly
// useful in applications that require the creation of multiple Zombie instances
// based on user input or other runtime conditions, allowing for a more flexible and
// dynamic approach to managing Zombie objects in the program. Overall, the main
// function provides a straightforward way to create and manage Zombie objects in a
// C++ program, leveraging dynamic memory allocation to ensure that each Zombie
// instance can be uniquely identified and controlled throughout the program's
// lifecycle. It is a common pattern in C++ programming to use such factory functions
// to encapsulate the creation of objects, allowing for better organization and
// management of resources within the application. By using this approach, developers
// can easily create and manage Zombie instances, ensuring that each Zombie has a
// unique name and can be interacted with independently of other Zombie objects in
// the program. This pattern is widely used in C++ programming to create objects that
// require specific initialization parameters, such as names in the case of Zombie
// objects, and to provide a clear and concise interface for creating and managing
// these objects within the application. It promotes better code organization,
// readability, and maintainability, making it easier for developers to work with
// complex object hierarchies and relationships in their C++ programs.      