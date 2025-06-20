/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stalash <stalash@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 13:17:47 by stalash           #+#    #+#             */
/*   Updated: 2025/06/20 13:18:09 by stalash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main() {
    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }

    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }

    return 0;
}

// This main function demonstrates the usage of the HumanA and HumanB classes
// along with the Weapon class. It creates instances of HumanA and HumanB,
// each associated with a Weapon object. The HumanA instance attacks using the
// weapon, and then the weapon's type is changed, followed by another attack.
// The HumanB instance is created without a weapon initially, and then the weapon
// is set using the `setWeapon` method. The HumanB instance then attacks with
// the weapon, and again the weapon's type is changed before another attack.
// This showcases the flexibility of both classes in managing weapons and
// performing attacks, demonstrating how the HumanA and HumanB classes can
// interact with the Weapon class to create a dynamic and engaging behavior.
// The use of references and pointers allows for efficient management of the
// weapon instances, ensuring that the weapon can be modified and accessed
// without unnecessary copying. This approach provides a clear and concise way
// to manage human characters and their associated weapons, allowing for
// greater flexibility in how characters and weapons are represented and
// managed within the application. The main function serves as a simple test
// of the HumanA and HumanB class functionality, allowing developers to see how
// the human characters behave when attacking with weapons. It provides a clear
// and concise way to demonstrate the capabilities of these classes, making it
// easier for developers to understand how to use them in their own applications.