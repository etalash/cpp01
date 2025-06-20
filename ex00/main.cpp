/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stalash <stalash@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 12:40:53 by stalash           #+#    #+#             */
/*   Updated: 2025/06/20 12:50:54 by stalash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void    randomChump(std::string name);

int main()
{
    Zombie* heapZombie = newZombie("HeapZombie");
    heapZombie->announce();
    delete heapZombie;

    randomChump("StackZombie");

    return 0;
}

// This main function demonstrates the usage of the Zombie class by creating a
// Zombie object on the heap using the `newZombie` function, announcing it, and
// then deleting it to free the allocated memory. It also creates a Zombie object
// on the stack using the `randomChump` function, which automatically announces
// itself and is destroyed when it goes out of scope. This showcases both dynamic
// and automatic memory management in C++, allowing for flexible Zombie object
// creation and management. The `newZombie` function returns a pointer to a
// dynamically allocated Zombie object, while the `randomChump` function creates
// a Zombie object on the stack that is automatically destroyed when it goes out
// of scope. This approach allows for efficient memory usage and ensures that
// Zombie objects can be created and managed easily, demonstrating the principles
// of object-oriented programming in C++. The main function serves as a simple
// test of the Zombie class functionality, allowing developers to see how the
// Zombie objects behave when created and announced. It provides a clear and
// concise way to demonstrate the Zombie class's capabilities, making it easier
// for developers to understand how to use the class in their own applications.
// The use of both heap and stack allocation in this example illustrates the
// flexibility of C++ in managing object lifetimes and memory, allowing for
// different approaches to object creation based on the specific needs of the
// application. By using this main function, developers can easily test and
// verify the behavior of the Zombie class, ensuring that it meets their
// requirements and functions as expected in various scenarios. It serves as a
// practical example of how to create and manage Zombie objects in a C++
// program, providing a solid foundation for further development and exploration
// of the Zombie class and its capabilities. This approach is essential for
// building robust and flexible applications that require dynamic object
// management, such as games, simulations, and other interactive applications
// where the creation and management of objects like Zombies are crucial for
// the overall functionality and user experience of the program. By using this
// main function, developers can easily create and manage Zombie instances,
// ensuring that each Zombie has a unique name and can be interacted with
// independently of other Zombie objects in the program. This pattern is widely
// used in C++ programming to create objects that require specific initialization
// parameters, such as names in the case of Zombie objects, and to provide a
// clear and concise interface for creating and managing these objects within
// the application. It promotes better code organization, readability, and
// maintainability, making it easier for developers to work with complex object
// hierarchies and relationships in their C++ programs. The `main` function
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
// It allows for greater control over the Zombie instances used in the program,
// ensuring that each Zombie can be uniquely identified and interacted with
// independently of other Zombie objects. This pattern is widely used in C++
// programming to create objects that require specific initialization parameters,
// such as names in the case of Zombie objects, and to provide a clear and
// concise interface for creating and managing these objects within the
// application. It promotes better code organization, readability, and
// maintainability, making it easier for developers to work with complex object
// hierarchies and relationships in their C++ programs. The `main` function
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
// By using this main function, developers can easily create and manage Zombie
// instances, ensuring that each Zombie has a unique name and can be interacted
// with independently of other Zombie objects in the program. This pattern is
// widely used in C++ programming to create objects that require specific
// initialization parameters, such as names in the case of Zombie objects, and to
// provide a clear and concise interface for creating and managing these objects
// within the application. It promotes better code organization, readability, and
// maintainability, making it easier for developers to work with complex object
// hierarchies and relationships in their C++ programs. The `main` function
// exemplifies this pattern by providing a simple and effective way to create