// Copyright (c) 2019 Andrei Chirilov All rights reserved.
//
// Created by: Andrei Chirilov
// Created on: October 2019
// This program does the guessing game with loops

#include <iostream>
#include <string>

main() {
    srand(time(NULL));


    int number = rand_r() % 10 + 1;
    std::string guessing;
    int integer;

    while (true) {
        std::cout << "Guess the number between 1-10: " << std::endl;
        std::cin >> guessing;
        try {
            integer = std::stoi(guessing);
        } catch (std::invalid_argument) {
            std::cout << "Not a valid integer.";
            break;
        }
        if (integer == number) {
            std::cout << "You got it right.";
            break;
        } else {
            std::cout << "you got it wrong. ";
        }
    }
}
