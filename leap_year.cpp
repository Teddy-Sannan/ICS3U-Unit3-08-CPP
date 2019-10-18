// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Teddy Sannan
// Created on: October 2019
// This program determines if a year
//  is a leap year

#include <iostream>

int main() {
    // calculates if year is a leap year
    // variable declaration
    int year;

    // input
    std::cout << "Please enter a year: ";
    std::cin >> year;
    std::cout << "" << std::endl;

    // process & output
    try {
        if ((year % 4 == 0) && (year % 100 != 0)) {
            std::cout << "It is a leap year" << std::endl;
        }
        if (year % 4 != 0) {
            std::cout << "It is not a leap year" << std::endl;
        }
        if ((year % 4 == 0) && (year % 100 == 0)) {
            if (year % 400 != 0) {
                std::cout << "It is not a leap year" << std::endl;
            }
            if ((year % 400 == 0) && (year % 100 == 0)) {
                std::cout << "It is a leap year" << std::endl;
            }
        }
    } catch (std::invalid_argument) {
        std::cout << "";
        std::cout << "Invalid Input";
    }
}
