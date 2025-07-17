/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stalash <stalash@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 13:29:50 by stalash           #+#    #+#             */
/*   Updated: 2025/06/20 13:30:16 by stalash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>

class Harl {
private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);

public:
    void complain(std::string level);
};

#endif

// Harl.hpp
// This header file defines the Harl class, which includes methods for handling
// different complaint levels: debug, info, warning, and error. The `complain`
// method takes a string parameter representing the complaint level and calls
// the appropriate method based on the level provided. The class encapsulates
// the behavior of handling complaints, allowing for easy management of different
// complaint levels and their associated actions. The methods for each complaint
// level are private, ensuring that they can only be called through the `complain`
// method, which serves as the public interface for interacting with the Harl
// class. This design promotes encapsulation and ensures that the internal
// implementation details of how each complaint level is handled are hidden from
// the user of the class. The Harl class can be used in various applications
// where complaint handling is required, providing a clear and concise way to
// manage different complaint levels and their associated behaviors. The use of
// a single public method (`complain`) to handle all complaint levels simplifies
// the interface and makes it easy to use, allowing users to simply call this
// method with the desired complaint level to trigger the appropriate response.