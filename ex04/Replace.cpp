/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stalash <stalash@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 13:25:42 by stalash           #+#    #+#             */
/*   Updated: 2025/06/20 13:26:12 by stalash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"
#include <fstream>
#include <iostream>

Replace::Replace(std::string filename, std::string s1, std::string s2)
    : filename(filename), s1(s1), s2(s2) {}

bool Replace::process() {
    std::ifstream inFile(filename.c_str());
    if (!inFile) {
        std::cerr << "Error: Cannot open input file." << std::endl;
        return false;
    }

    std::ofstream outFile((filename + ".replace").c_str());
    if (!outFile) {
        std::cerr << "Error: Cannot open output file." << std::endl;
        return false;
    }

    std::string line;
    while (std::getline(inFile, line)) {
        size_t pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos) {
            line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
            pos += s2.length();
        }
        outFile << line << std::endl;
    }

    inFile.close();
    outFile.close();
    return true;
}

// This implementation of the Replace class includes a constructor that initializes
// the filename, s1, and s2 attributes. The `process` method reads the
// contents of the specified file, replaces all occurrences of the substring s1
// with the substring s2, and writes the modified content to a new file with
// the same name as the original file but with ".replace" appended to it. The
// method uses `std::ifstream` to read the input file and `std::ofstream`
// to write to the output file. It checks for errors when opening the files
// and returns a boolean indicating whether the operation was successful or not.
// The method uses a loop to read each line from the input file, and within
// that loop, it uses `std::string::find` to locate occurrences of s1
// in the line. When an occurrence is found, it replaces it with s2 using
// `std::string::substr` to construct the new line. The modified line is then
// written to the output file. Finally, the input and output files are closed.
// This class encapsulates the functionality for file manipulation and string
// replacement, providing a clear and concise interface for performing these
// operations. It can be used in various applications where file content needs
// to be modified based on specific string patterns, making it a versatile tool
// for text processing tasks. The use of error handling ensures that the user
// is informed if there are issues with file access, allowing for better
// debugging and user experience. The class can be extended or modified to
// include additional features, such as handling multiple replacements or
// providing more advanced string manipulation capabilities. Overall, the
// Replace class provides a robust solution for replacing substrings in files,