// Copyright (c) 2021 Hussein Mansour All rights reserved
//
// Created by: Hussein Mansour
// Created on: Thu/May13/2021
// This program is a age vote program

#include <iostream>

int main() {
    // This functon checks if the person is eligible to vote or not
    std::string ageStr;
    int ageInt;

    // input
    std::cout << "Please enter you age:";
    std::cin >> ageStr;

    // process & output
    try {
        ageInt = std::stoi(ageStr);

        if (ageInt >= 18) {
            std::cout << "\nYes, you are eligible to vote :)" << std::endl;
            std::cout << "Thank you!" << std::endl;
        } else {
            std::cout << "\nNo,you are not eligible to vote :(" << std::endl;
            std::cout << "Thank you!" << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "invalid input!" << std::endl;
    }

std::cout << "\n\nDone." << std::endl;
}
