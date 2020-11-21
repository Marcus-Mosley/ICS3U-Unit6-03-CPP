// Copyright (c) 2020 Marcus A. Mosley All rights reserved.
//
// Created by Marcus A. Mosley
// Created on November 2020
// This program finds the smallest number of a random array of 10 numbers

#include <iostream>
#include <random>
#include <array>


int max_number(std::array<int, 10> number_array) {
    // This function finds the smallest number of a random array of 10 numbers

    int smallest_number = 101;

    for (int loop_counter : number_array) {
        if (loop_counter < smallest_number) {
            smallest_number = loop_counter;
        }
    }
    return smallest_number;
}


int main() {
    // This function gets input

    std::array<int, 10> number_array;
    int number;
    int smallest_number;

    // Input
    for (int counter = 0; counter < 10; counter++) {
        std::random_device random_device;
        std::mt19937 engine{random_device()};
        std::uniform_int_distribution<> dist(1, 100);
        number = dist(engine);
        number_array[counter] = number;
         std::cout << "The random number is: "
            << std::fixed << number << std::endl;
    }
    std::cout << " " << std::endl;

    // Call Functions
    smallest_number = max_number(number_array);

    std::cout << "The smallest number is " << smallest_number << std::endl;
}
