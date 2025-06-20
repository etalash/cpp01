/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stalash <stalash@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 12:35:24 by stalash           #+#    #+#             */
/*   Updated: 2025/06/20 12:49:14 by stalash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name) {
    return new Zombie(name);
}
// This function dynamically allocates a new Zombie object with the given name
// and returns a pointer to it. The caller is responsible for deleting the object
// to avoid memory leaks. The function uses the `new` operator to allocate memory
// for the Zombie object and initializes it with the provided name. The returned
// pointer can be used to call the Zombie's methods, such as `announce()`, and
// to eventually delete the object when it is no longer needed. This approach
// allows for the creation of Zombie objects with specific names that can be
// managed dynamically, providing flexibility in how Zombie instances are created
// and used in the program. It is important to ensure that the memory allocated
// for the Zombie object is properly released using `delete` when it is no longer
// needed to prevent memory leaks in the application. The function is typically
// used in conjunction with the `Zombie` class constructor that takes a string
// parameter to set the name of the Zombie. This allows for easy creation of
// Zombie objects with unique names, which can be useful in scenarios where
// multiple Zombie instances are needed, each with its own identity. The use of
// dynamic memory allocation also allows for greater control over the lifetime
// of the Zombie objects, as they can be created and destroyed as needed
// during the program's execution. This is particularly useful in applications
// that require the creation of multiple Zombie instances based on user input
// or other runtime conditions, allowing for a more flexible and dynamic
// approach to managing Zombie objects in the program. Overall, the `newZombie`
// function provides a straightforward way to create and manage Zombie objects
// in a C++ program, leveraging dynamic memory allocation to ensure that each
// Zombie instance can be uniquely identified and controlled throughout the
// program's lifecycle. It is a common pattern in C++ programming to use such
// factory functions to encapsulate the creation of objects, allowing for better
// organization and management of resources within the application. By using
// this approach, developers can easily create and manage Zombie instances,
// ensuring that each Zombie has a unique name and can be interacted with
// independently of other Zombie objects in the program. This pattern is widely
// used in C++ programming to create objects that require specific initialization
// parameters, such as names in the case of Zombie objects, and to provide a
// clear and concise interface for creating and managing these objects within
// the application. It promotes better code organization, readability, and
// maintainability, making it easier for developers to work with complex object
// hierarchies and relationships in their C++ programs. The `newZombie` function
// exemplifies this pattern by providing a simple and effective way to create
// Zombie objects with specific names, allowing for greater flexibility and
// control over the Zombie instances used in the program. It is a fundamental
// aspect of object-oriented programming in C++, enabling developers to create
// and manage objects dynamically, ensuring that each object can be uniquely
// identified and controlled throughout the program's execution. This approach
// is essential for building robust and flexible applications that require
// dynamic object management, such as games, simulations, and other interactive
// applications where the creation and management of objects like Zombies are
// crucial for the overall functionality and user experience of the program.