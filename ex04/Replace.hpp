/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stalash <stalash@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 13:25:18 by stalash           #+#    #+#             */
/*   Updated: 2025/06/20 13:25:33 by stalash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <string>

class Replace {
private:
    std::string filename;
    std::string s1;
    std::string s2;

public:
    Replace(std::string filename, std::string s1, std::string s2);
    bool process();
};

#endif

// Replace.hpp
// This header file defines the Replace class, which is responsible for
// replacing occurrences of a specified substring (s1) with another substring
// (s2) in a file specified by the filename. The class includes a constructor
// that initializes the filename, s1, and s2 attributes. The `process` method
// performs the replacement operation, reading the contents of the file,
// replacing all occurrences of s1 with s2, and writing the modified content
// back to a new file. The method returns a boolean indicating whether the
// operation was successful or not. This class encapsulates the functionality
// for file manipulation and string replacement, providing a clear and concise
// interface for performing these operations. It can be used in various
// applications where file content needs to be modified based on specific
// string patterns, making it a versatile tool for text processing tasks.