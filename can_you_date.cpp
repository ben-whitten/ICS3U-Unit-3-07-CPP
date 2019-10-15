// Copyright (c) 2019 St. Mother Teressa HS All rights reserved.
//
// Created by: Ben Whitten
// Created on: October 2019
// This is a program which tells you if your old enough to date this grandma's
// grandchild.

#include <iostream>
#include <cstdlib>

int main() {
    // This is what tells you if your old enough.
    std::string ageAsString;
    int ageOfUser;
    const double maximumAge = 40;
    const double minimumAge = 25;

    // Process
    while (true) {
        std::cout << "Input your age: ";
        std::cin >> ageAsString;
        std::cout << "" << std::endl;

        try {
            ageOfUser = std::stoi(ageAsString);

            if (ageOfUser >= minimumAge && ageOfUser <= maximumAge) {
            // Output
                std::cout << "You may date my grandchild." << std::endl;
                break;
            } else {
                std::cout << "You may not date my grandchild!" << std::endl;
                break;
            }
        } catch (std::invalid_argument) {
        std::cout << "Sorry... Could you repeat that..." << std::endl;
        }
    }
}
