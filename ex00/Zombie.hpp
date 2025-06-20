/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stalash <stalash@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 12:34:51 by stalash           #+#    #+#             */
/*   Updated: 2025/06/20 12:48:54 by stalash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie {
private:
    std::string name;

public:
    Zombie(std::string name);
    ~Zombie();

    void announce(void);
};

#endif

// zombie.hpp
// This header file defines the Zombie class, which includes a constructor that
// takes a string parameter to set the name of the Zombie, a destructor that
// outputs a message when the Zombie is destroyed, and a method to announce
// the Zombie's presence by printing its name followed by a zombie-like sound.
// The class encapsulates the behavior and properties of a Zombie, allowing for
// the creation of Zombie objects with unique names that can be announced.