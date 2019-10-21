// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Teddy Sannan
// Created on: October 2019
// This program determines if a year
//  is a leap year

#include <iostream>
#include <string>

int main() {
    // calculates if year is a leap year
    // variable declaration
    std::string year_as_string;
    int year_as_number;

    // input
    std::cout << "Please enter a year: ";
    std::cin >> year_as_string;
    std::cout << "" << std::endl;

    // process & output
    try {
        year_as_number = std::stoi(year_as_string);
        if ((year_as_number % 4 == 0) && (year_as_number % 100 != 0)) {
            std::cout << "It is a leap year" << std::endl;
        }
        if (year_as_number % 4 != 0) {
            std::cout << "It is not a leap year" << std::endl;
        }
        if ((year_as_number % 4 == 0) && (year_as_number % 100 == 0)) {
            if (year_as_number % 400 != 0) {
                std::cout << "It is not a leap year" << std::endl;
            }
            if ((year_as_number % 400 == 0) && (year_as_number % 100 == 0)) {
                std::cout << "It is a leap year" << std::endl;
            }
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid Input" << std::endl;
    }
}
