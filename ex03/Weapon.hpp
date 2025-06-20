/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stalash <stalash@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 13:14:13 by stalash           #+#    #+#             */
/*   Updated: 2025/06/20 13:15:08 by stalash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon {
private:
    std::string type;

public:
    Weapon(std::string type);
    const std::string& getType() const;
    void setType(std::string type);
};

#endif

// Weapon.hpp
// This header file defines the Weapon class, which includes a constructor that
// takes a string parameter to set the type of the weapon, a method to get the
// type of the weapon, and a method to set the type of the weapon. The class
// encapsulates the behavior and properties of a weapon, allowing for the
// creation of Weapon objects with specific types that can be retrieved or
// modified. The use of a reference in the `getType` method allows for efficient
// access to the weapon type without unnecessary copying, ensuring that the
// type can be accessed quickly and efficiently. This class can be used to
// represent various types of weapons in a program, providing a clear and
// concise way to manage weapon types and their associated behaviors. The
// `Weapon` class can be extended or modified to include additional properties
// or methods as needed, allowing for greater flexibility in how weapons are
// represented and managed within the application. It serves as a foundational
// component for building more complex weapon systems, enabling developers to
// create and manage weapons in a structured and organized manner. The class
// can be used in various applications, such as games or simulations, where
// weapons play a significant role in the overall functionality and user
// experience of the program. By encapsulating the weapon's type and providing
// methods to access and modify it, the `Weapon` class allows for easy
// management of weapon instances, ensuring that each weapon can be uniquely
// identified and controlled throughout the program's lifecycle. This approach
// promotes better code organization, readability, and maintainability, making
// it easier for developers to work with complex object hierarchies and
// relationships in their C++ programs. The `Weapon` class exemplifies this
// pattern by providing a simple and effective way to create and manage weapon
// objects with specific types, allowing for greater flexibility and control
// over the weapon instances used in the program. It is a fundamental aspect of
// object-oriented programming in C++, enabling developers to create and manage
// objects dynamically, ensuring that each object can be uniquely identified
// and controlled throughout the program's execution. This approach is essential
// for building robust and flexible applications that require dynamic object
// management, such as games, simulations, and other interactive applications
// where the creation and management of objects like weapons are crucial for
// the overall functionality and user experience of the program. By using this
// class, developers can easily create and manage weapon instances, ensuring
// that each weapon has a unique type and can be interacted with independently
// of other weapon objects in the program. This pattern is widely used in C++
// programming to create objects that require specific initialization parameters,
// such as types in the case of weapon objects, and to provide a clear and
// concise interface for creating and managing these objects within the
// application. It promotes better code organization, readability, and
// maintainability, making it easier for developers to work with complex object
// hierarchies and relationships in their C++ programs. The `Weapon` class
// exemplifies this pattern by providing a simple and effective way to create
// weapon objects with specific types, allowing for greater flexibility and
// control over the weapon instances used in the program.