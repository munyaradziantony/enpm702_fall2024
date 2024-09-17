/**
 * @file exercise2.cpp
 * @author munyaradzi antony (munyaradziantony@gmail.com)
 * @brief 
 * @version 1.0
 * @date 2024-09-14
 * 
 * @copyright Copyright (c) 2024
 * 
 * TODO - 
 *  1. Takes two integers as input from the user.
 *  2. Performs the following operations:
 *       Addition
 *       Sutraction
 *       Multiplication
 *       Division (with error handling for division by zero)
 *       Modulus
 *  3. Outputs the result of each operation in a clear and readable format.
**/
#include <iostream>

int main(){

    // Ask The User For The Inputs 
    std::cout << "\nEnter the first number :";      //ask for the first interger
    int first_interger{} ;                          //initial variable to hold the first user input
    std::cin >> first_interger ;                    //store input in the variable first_interger
    
    std::cout << "Enter the second number :";       //ask for the second interger
    int second_interger{} ;                         //initial variable to hold the second user input
    std::cin >> second_interger ;                   //store input in the variable second_interger


    /*OPERATIONS*/

    // Addition
    int sum{};                                      //Declare and initialize the variable to hold the sum
    sum = first_interger + second_interger;         //addition operation

    // Subtraction
    int difference{};                               //Declare and initialize the variable to hold the difference
    difference = first_interger - second_interger;  //difference operation

    // Multipication
    int product{};                                  //Declare and initialize the variable to hold the product 
    product = first_interger * second_interger;     //multiplication operation

    //Division
    //Check If The Dividing Number is Zero
    double quotient{0.0};                           // Declare and initialize the variable to hold the quotient
    if (second_interger == 0) {
            std::cout << "Error : Undefined Solution! \n";
            } else
            quotient = (double)first_interger / second_interger; //casting the first interger to avoid rounding up the answer to interger

    // Modulus
    int remainder{};                                //Declare and initialize the variable to hold the modulus
    remainder = first_interger % second_interger;   //modulus operation

    //Displaying The Results
    std::cout << "=================================\n" ;
    std::cout << "Addition: " << first_interger << " + " << second_interger <<" = " << sum << "\n" ;            //Display Addition
    std::cout << "Subtraction: " << first_interger << " - " << second_interger <<" = " << difference << "\n" ;  //Display Subtraction
    std::cout << "Multiplication: " << first_interger << " * " << second_interger <<" = " << product << "\n" ;  //Display Multiplication
    std::cout << "Division: " << first_interger << " / " << second_interger <<" = " << quotient << "\n" ;       //Display Dividion
    std::cout << "Modulus: " << first_interger << " % " << second_interger <<" = " << remainder << "\n\n" ;     //Display Modulus

    return 0;

}