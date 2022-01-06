// Copyright (c) Ina Tolo All rights reserved.
//
// Created by: Ina Tolo
// Date: Jan. 5, 2022
// This program asks the user for a whole number.
// It then calculates the factorial of that number
#include <iostream>

int main() {
  // initializations
  int counter = 0;
  int factorialAnswer = 1;
  int userNumInt;
  std::string userNumString;

  // get the user number as a string
  std::cout << "Enter a whole number: ";
  std::cin >> userNumString;
  std::cout << std::endl;

  try {
      // convert the user's number to an int
      userNumInt = std::stoi(userNumString);

      if (userNumInt >= 0) {
          // calculate the factorial of the number
          do {
              counter++;
              factorialAnswer = factorialAnswer * counter;
              std::cout << "Tracking ";
              std::cout << counter << " times through the loop.\n";
            } while (counter < userNumInt);

            // display the answer to the user
            std::cout << std::endl;
            std::cout <<userNumInt << " ! = " << factorialAnswer << std::endl;
        } else {
            std::cout << "Please enter a whole number!";
        }
    // determines if the the answer is a number
  } catch (std::invalid_argument) {
    // The user did not enter a number.
    std::cout << userNumString << " is invalid.\n";
    }
}

