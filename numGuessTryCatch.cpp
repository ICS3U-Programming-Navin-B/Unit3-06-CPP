// Copyright (c) Navin Baleko All rights reserved.
//
// Created by: Navin Baleko
// Created on: Sep 2021
// This program checks if you have guessed the right number 

#include <iostream>

int main() {
    // this function gets the user's number 
    const int CORRECT = 30;
    int guessNumber;
    // input
    std::cout << "Enter any number you want: ";
    std::cin >> guessNumber;
    std::cout << "" << std::endl;

    // process
    if (guessNumber == CORRECT) {
        // output
        std::cout << "You guessed correctly!"; 
    }else {
        // output
        std::cout << "you guessed incorrectly! ";
    }
}