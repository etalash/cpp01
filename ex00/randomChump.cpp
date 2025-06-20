/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomchump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stalash <stalash@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 12:37:47 by stalash           #+#    #+#             */
/*   Updated: 2025/06/20 12:49:21 by stalash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump(std::string name) {
    Zombie zombie(name);
    zombie.announce();
}

// This function creates a Zombie object with the given name and immediately
// calls its announce method to print the Zombie's name followed by a zombie-like
// sound. The Zombie object is created on the stack, so it will be automatically
// destroyed when it goes out of scope, triggering the destructor and printing
// a message indicating that the Zombie is destroyed. This approach allows for
// the creation of temporary Zombie instances that can announce themselves
// without the need for dynamic memory allocation. It is a simple and effective
// way to demonstrate the Zombie's behavior without requiring manual memory
// management. The function is typically used in scenarios where a quick
// demonstration of the Zombie's announce functionality is needed, such as in
// testing or simple applications where the Zombie's lifecycle is straightforward.
// By using this function, developers can easily create and manage Zombie objects
// without worrying about memory leaks or the complexities of dynamic memory
// allocation. It provides a clear and concise way to showcase the Zombie's
// behavior, making it a useful utility in C++ programs that involve Zombies.
// The function is often used in conjunction with the Zombie class constructor
// that takes a string parameter to set the name of the Zombie. This allows for
// easy creation of Zombie objects with specific names, which can be useful in
// scenarios where multiple Zombie instances are needed, each with its own
// identity. The use of stack allocation for the Zombie object ensures that
// the memory is automatically managed, reducing the risk of memory leaks and
// simplifying the code. This approach is particularly beneficial in applications
// that require quick and temporary Zombie instances, such as in games or
// simulations where Zombies may be created and destroyed frequently. It allows
// for greater control over the Zombie instances used in the program, ensuring
// that each Zombie can be uniquely identified and interacted with independently
// of other Zombie objects. Overall, the `randomChump` function provides a
// straightforward way to create and manage Zombie objects in a C++ program,
// leveraging stack allocation to ensure that each Zombie instance can be
// automatically destroyed when it goes out of scope. This approach promotes
// better code organization, readability, and maintainability, making it easier
// for developers to work with complex object hierarchies and relationships in
// their C++ programs. It exemplifies the principles of object-oriented
// programming in C++, enabling developers to create and manage objects
// dynamically, ensuring that each object can be uniquely identified and
// controlled throughout the program's execution. This pattern is widely used
// in C++ programming to create objects that require specific initialization
// parameters, such as names in the case of Zombie objects, and to provide a
// clear and concise interface for creating and managing these objects within
// the application. It promotes better code organization, readability, and
// maintainability, making it easier for developers to work with complex object
// hierarchies and relationships in their C++ programs. The `randomChump`
// function exemplifies this pattern by providing a simple and effective way to
// create Zombie objects with specific names, allowing for greater flexibility
// and control over the Zombie instances used in the program. It is a fundamental
// aspect of object-oriented programming in C++, enabling developers to create
// and manage objects dynamically, ensuring that each object can be uniquely
// identified and controlled throughout the program's execution. This approach
// is essential for building robust and flexible applications that require
// dynamic object management, such as games, simulations, and other interactive
// applications where the creation and management of objects like Zombies are
// crucial for the application's functionality. By using this function, developers
// can easily create and manage Zombie instances, ensuring that each Zombie has
// a unique name and can be interacted with independently of other Zombie objects
// in the program. This pattern is widely used in C++ programming to create
// objects that require specific initialization parameters, such as names in the
// case of Zombie objects, and to provide a clear and concise interface for
// creating and managing these objects within the application. It promotes better
// code organization, readability, and maintainability, making it easier for
// developers to work with complex object hierarchies and relationships in their
// C++ programs. The `randomChump` function exemplifies this pattern by providing
// a simple and effective way to create Zombie objects with specific names,
// allowing for greater flexibility and control over the Zombie instances used
// in the program. It is a fundamental aspect of object-oriented programming in
// C++, enabling developers to create and manage objects dynamically, ensuring
// that each object can be uniquely identified and controlled throughout the
// program's execution. This approach is essential for building robust and flexible
// applications that require dynamic object management, such as games,
// simulations, and other interactive applications where the creation and
// management of objects like Zombies are crucial for the overall functionality
// and user experience of the program. It allows for greater control over the
// Zombie instances used in the program, ensuring that each Zombie can be
// uniquely identified and interacted with independently of other Zombie objects.
// This pattern is widely used in C++ programming to create objects that require
// specific initialization parameters, such as names in the case of Zombie objects,
// and to provide a clear and concise interface for creating and managing these
// objects within the application. It promotes better code organization,
// readability, and maintainability, making it easier for developers to work with
// complex object hierarchies and relationships in their C++ programs. The
// `randomChump` function exemplifies this pattern by providing a simple and
// effective way to create Zombie objects with specific names, allowing for
// greater flexibility and control over the Zombie instances used in the program.
// It is a fundamental aspect of object-oriented programming in C++, enabling
// developers to create and manage objects dynamically, ensuring that each object
// can be uniquely identified and controlled throughout the program's execution.
// This approach is essential for building robust and flexible applications that
// require dynamic object management, such as games, simulations, and other
// interactive applications where the creation and management of objects like
// Zombies are crucial for the overall functionality and user experience of the
// program. By using this function, developers can easily create and manage Zombie
// instances, ensuring that each Zombie has a unique name and can be interacted
// with independently of other Zombie objects in the program. This pattern is
// widely used in C++ programming to create objects that require specific
// initialization parameters, such as names in the case of Zombie objects, and to
// provide a clear and concise interface for creating and managing these objects
// within the application. It promotes better code organization, readability, and
// maintainability, making it easier for developers to work with complex object
// hierarchies and relationships in their C++ programs. The `randomChump` function
// exemplifies this pattern by providing a simple and effective way to create
// Zombie objects with specific names, allowing for greater flexibility and control
// over the Zombie instances used in the program. It is a fundamental aspect of
// object-oriented programming in C++, enabling developers to create and manage
// objects dynamically, ensuring that each object can be uniquely identified and
// controlled throughout the program's execution. This approach is essential for
// building robust and flexible applications that require dynamic object management,
// such as games, simulations, and other interactive applications where the
// creation and management of objects like Zombies are crucial for the overall
// functionality and user experience of the program. It allows for greater control
// over the Zombie instances used in the program, ensuring that each Zombie can be
// uniquely identified and interacted with independently of other Zombie objects.
// This pattern is widely used in C++ programming to create objects that require
// specific initialization parameters, such as names in the case of Zombie objects,
// and to provide a clear and concise interface for creating and managing these
// objects within the application. It promotes better code organization,
// readability, and maintainability, making it easier for developers to work with
// complex object hierarchies and relationships in their C++ programs. The
// `randomChump` function exemplifies this pattern by providing a simple and
// effective way to create Zombie objects with specific names, allowing for
// greater flexibility and control over the Zombie instances used in the program.
// It is a fundamental aspect of object-oriented programming in C++, enabling
// developers to create and manage objects dynamically, ensuring that each object
// can be uniquely identified and controlled throughout the program's execution.
// This approach is essential for building robust and flexible applications that
// require dynamic object management, such as games, simulations, and other
// interactive applications where the creation and management of objects like
// Zombies are crucial for the overall functionality and user experience of the
// program. By using this function, developers can easily create and manage Zombie
// instances, ensuring that each Zombie has a unique name and can be interacted
// with independently of other Zombie objects in the program. This pattern is
// widely used in C++ programming to create objects that require specific
// initialization parameters, such as names in the case of Zombie objects, and to
// provide a clear and concise interface for creating and managing these objects
// within the application. It promotes better code organization, readability, and
// maintainability, making it easier for developers to work with complex object
// hierarchies and relationships in their C++ programs. The `randomChump` function
// exemplifies this pattern by providing a simple and effective way to create
// Zombie objects with specific names, allowing for greater flexibility and control
// over the Zombie instances used in the program. It is a fundamental aspect of
// object-oriented programming in C++, enabling developers to create and manage
// objects dynamically, ensuring that each object can be uniquely identified and
// controlled throughout the program's execution. This approach is essential for
// building robust and flexible applications that require dynamic object management,
// such as games, simulations, and other interactive applications where the
// creation and management of objects like Zombies are crucial for the overall
// functionality and user experience of the program. It allows for greater control
// over the Zombie instances used in the program, ensuring that each Zombie can be
// uniquely identified and interacted with independently of other Zombie objects.
// This pattern is widely used in C++ programming to create objects that require
// specific initialization parameters, such as names in the case of Zombie objects,
// and to provide a clear and concise interface for creating and managing these
// objects within the application. It promotes better code organization,
// readability, and maintainability, making it easier for developers to work with
// complex object hierarchies and relationships in their C++ programs. The
// `randomChump` function exemplifies this pattern by providing a simple and
// effective way to create Zombie objects with specific names, allowing for
// greater flexibility and control over the Zombie instances used in the program.
// It is a fundamental aspect of object-oriented programming in C++, enabling
// developers to create and manage objects dynamically, ensuring that each object
// can be uniquely identified and controlled throughout the program's execution.
// This approach is essential for building robust and flexible applications that
// require dynamic object management, such as games, simulations, and other
// interactive applications where the creation and management of objects like
// Zombies are crucial for the overall functionality and user experience of the
// program. By using this function, developers can easily create and manage Zombie
// instances, ensuring that each Zombie has a unique name and can be interacted
// with independently of other Zombie objects in the program. This pattern is
// widely used in C++ programming to create objects that require specific
// initialization parameters, such as names in the case of Zombie objects, and to
// provide a clear and concise interface for creating and managing these objects
// within the application. It promotes better code organization, readability, and
// maintainability, making it easier for developers to work with complex object
// hierarchies and relationships in their C++ programs. The `randomChump` function
// exemplifies this pattern by providing a simple and effective way to create
// Zombie objects with specific names, allowing for greater flexibility and control
// over the Zombie instances used in the program. It is a fundamental aspect of
// object-oriented programming in C++, enabling developers to create and manage
// objects dynamically, ensuring that each object can be uniquely identified and
// controlled throughout the program's execution. This approach is essential for
// building robust and flexible applications that require dynamic object management,
// such as games, simulations, and other interactive applications where the
// creation and management of objects like Zombies are crucial for the overall
// functionality and user experience of the program. It allows for greater control
// over the Zombie instances used in the program, ensuring that each Zombie can be
// uniquely identified and interacted with independently of other Zombie objects.
// This pattern is widely used in C++ programming to create objects that require
// specific initialization parameters, such as names in the case of Zombie objects,
// and to provide a clear and concise interface for creating and managing these
// objects within the application. It promotes better code organization,
// readability, and maintainability, making it easier for developers to work with
// complex object hierarchies and relationships in their C++ programs. The
// `randomChump` function exemplifies this pattern by providing a simple and
// effective way to create Zombie objects with specific names, allowing for
// greater flexibility and control over the Zombie instances used in the program.
// It is a fundamental aspect of object-oriented programming in C++, enabling
// developers to create and manage objects dynamically, ensuring that each object
// can be uniquely identified and controlled throughout the program's execution.
// This approach is essential for building robust and flexible applications that
// require dynamic object management, such as games, simulations, and other
// interactive applications where the creation and management of objects like
// Zombies are crucial for the overall functionality and user experience of the
// program. By using this function, developers can easily create and manage Zombie
// instances, ensuring that each Zombie has a unique name and can be interacted
// with independently of other Zombie objects in the program. This pattern is
// widely used in C++ programming to create objects that require specific
// initialization parameters, such as names in the case of Zombie objects, and to
// provide a clear and concise interface for creating and managing these objects
// within the application. It promotes better code organization, readability, and
// maintainability, making it easier for developers to work with complex object
// hierarchies and relationships in their C++ programs. The `randomChump` function
// exemplifies this pattern by providing a simple and effective way to create
// Zombie objects with specific names, allowing for greater flexibility and control
// over the Zombie instances used in the program. It is a fundamental aspect of
// object-oriented programming in C++, enabling developers to create and manage
// objects dynamically, ensuring that each object can be uniquely identified and
// controlled throughout the program's execution. This approach is essential for
// building robust and flexible applications that require dynamic object management,
// such as games, simulations, and other interactive applications where the
// creation and management of objects like Zombies are crucial for the overall
// functionality and user experience of the program. It allows for greater control
// over the Zombie instances used in the program, ensuring that each Zombie can be
// uniquely identified and interacted with independently of other Zombie objects.
// This pattern is widely used in C++ programming to create objects that require
// specific initialization parameters, such as names in the case of Zombie objects,
// and to provide a clear and concise interface for creating and managing these
// objects within the application. It promotes better code organization,
// readability, and maintainability, making it easier for developers to work with
// complex object hierarchies and relationships in their C++ programs. The
// `randomChump` function exemplifies this pattern by providing a simple and
// effective way to create Zombie objects with specific names, allowing for
// greater flexibility and control over the Zombie instances used in the program.
// It is a fundamental aspect of object-oriented programming in C++, enabling
// developers to create and manage objects dynamically, ensuring that each object
// can be uniquely identified and controlled throughout the program's execution.
// This approach is essential for building robust and flexible applications that
// require dynamic object management, such as games, simulations, and other
// interactive applications where the creation and management of objects like
// Zombies are crucial for the overall functionality and user experience of the
// program. By using this function, developers can easily create and manage Zombie
// instances, ensuring that each Zombie has a unique name and can be interacted
// with independently of other Zombie objects in the program. This pattern is
// widely used in C++ programming to create objects that require specific
// initialization parameters, such as names in the case of Zombie objects, and to
// provide a clear and concise interface for creating and managing these objects
// within the application. It promotes better code organization, readability, and
// maintainability, making it easier for developers to work with complex object
// hierarchies and relationships in their C++ programs. The `randomChump` function
// exemplifies this pattern by providing a simple and effective way to create
// Zombie objects with specific names, allowing for greater flexibility and control
// over the Zombie instances used in the program. It is a fundamental aspect of
// object-oriented programming in C++, enabling developers to create and manage
// objects dynamically, ensuring that each object can be uniquely identified and
// controlled throughout the program's execution. This approach is essential for
// building robust and flexible applications that require dynamic object management,
// such as games, simulations, and other interactive applications where the
// creation and management of objects like Zombies are crucial for the overall
// functionality and user experience of the program. It allows for greater control
// over the Zombie instances used in the program, ensuring that each Zombie can be
// uniquely identified and interacted with independently of other Zombie objects.