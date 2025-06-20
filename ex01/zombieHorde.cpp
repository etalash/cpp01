/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stalash <stalash@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 13:02:34 by stalash           #+#    #+#             */
/*   Updated: 2025/06/20 13:03:00 by stalash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
    if (N <= 0)
        return NULL;

    Zombie* horde = new Zombie[N];
    for (int i = 0; i < N; i++) {
        horde[i].setName(name);
    }
    return horde;
}

// This function creates a horde of Zombie objects, each initialized with the
// specified name. It dynamically allocates an array of Zombie objects using
// the `new` operator, allowing for the creation of a variable number of Zombies
// based on the input parameter `N`. The function first checks if `N` is less
// than or equal to zero, in which case it returns `NULL` to indicate that no
// Zombies can be created. If `N` is valid, it allocates an array of Zombie
// objects and iterates through the array, calling the `setName` method on each
// Zombie to set its name to the provided string. Finally, it returns a pointer
// to the first Zombie in the array, allowing the caller to access and manage
// the horde of Zombies. This approach provides a flexible way to create and
// manage multiple Zombie instances, enabling the creation of a group of Zombies
// that can all announce themselves with the same name. The use of dynamic memory
// allocation allows for greater control over the lifetime of the Zombie objects,
// as they can be created and destroyed as needed during the program's execution.
// It is important to ensure that the memory allocated for the Zombie horde is
// properly released using `delete[]` when it is no longer needed to prevent
// memory leaks in the application. The function is typically used in conjunction
// with the `Zombie` class constructor that takes a string parameter to set the
// name of the Zombie. This allows for easy creation of Zombie objects with
// unique names, which can be useful in scenarios where multiple Zombie instances
// are needed, each with its own identity. The use of dynamic memory allocation
// also allows for greater control over the lifetime of the Zombie objects, as
// they can be created and destroyed as needed during the program's execution.