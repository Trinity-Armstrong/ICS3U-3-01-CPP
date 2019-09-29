// Copyright (c) 2019 Trinity Armstrong All rights reserved.
//
// Created by: Trinity Armstrong
// Created on: September 2019
// This program calculates the sum of two integers

#include <iostream>

int main() {
    // this function calculates the sum of two integers
    int sum;
    int first_integer;
    int second_integer;

    // input
    std::cout << "Enter the first number to add (Integer): ";
    std::cin >> first_integer;
    std::cout << "Enter the second number to add (Integer): ";
    std::cin >> second_integer;

    // process
    sum = first_integer + second_integer;

    // output
    std::cout << "" << std::endl;
    std::cout << "Sum is " << sum << "." << std::endl;
}
