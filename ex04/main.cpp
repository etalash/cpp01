/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stalash <stalash@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 13:26:18 by stalash           #+#    #+#             */
/*   Updated: 2025/06/20 13:26:35 by stalash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"
#include <iostream>

int main(int argc, char* argv[]) {
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    Replace replacer(argv[1], argv[2], argv[3]);
    if (!replacer.process()) {
        return 1;
    }

    return 0;
}

// This main function serves as the entry point for the Replace program. It checks
// if the correct number of command-line arguments is provided (three arguments:
// the program name, the filename, and the two strings to be replaced). If not,
// it prints a usage message and exits with an error code. If the arguments are
// valid, it creates an instance of the Replace class using the provided filename,
// s1, and s2. It then calls the `process` method on the replacer object to perform
// the replacement operation. If the `process` method returns false, indicating
// an error occurred during the file processing, the main function exits with an
// error code. If the operation is successful, the main function returns 0,
// indicating successful completion of the program. This structure allows for
// clear error handling and ensures that the program only proceeds with valid
// input, making it robust against incorrect usage. The main function is essential
// for initializing the Replace class and invoking its methods, providing a simple
// and effective way to perform string replacement in files based on user input.