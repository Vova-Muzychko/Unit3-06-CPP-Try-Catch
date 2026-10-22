// Copyright (c) 2026 Student All rights reserved.
//
// Created by: VovaM
// Created on: 22 Oct 2026
// This program is a number guessing game in C++ using try and catch.

#include <iostream>
#include <random>
#include <string>

int main() {
    // Set up random number generator between 0 and 9
    std::random_device randomSeed;
    std::mt19937 generator(randomSeed());
    std::uniform_int_distribution<int> distribution(0, 9);
    int secretNumber = distribution(generator);

    std::string userInputString;
    int userInputInteger;

    // Get input from user
    std::cout << "Guess a number between 0 and 9: ";
    std::cin >> userInputString;

    // Try to convert string input to integer
    try {
        userInputInteger = std::stoi(userInputString);

        if (userInputInteger == secretNumber) {
            std::cout << "You guessed correctly!\n";
        } else {
            std::cout << "Wrong guess! The correct number was "
                      << secretNumber << ".\n";
        }
    } catch (std::invalid_argument) {
        std::cout << userInputString << " is not an integer.\n";
    }

    std::cout << "Thanks for playing!\n";

    return 0;
}
