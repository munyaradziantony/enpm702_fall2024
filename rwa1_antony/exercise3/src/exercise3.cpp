/**
 * @file exercise3.cpp
 * @author munyaradzi antony (munyaradziantony@gmail.com)
 * @brief 
 * @version 1.0
 * @date 2024-09-14
 * 
 * @copyright Copyright (c) 2024
 * 
 * TODO - 
 * 1. Takes a single character as input from the user.
 * 2. Performs the following tasks:
 *     Checks if the character is a vowel (a, e, i, o, u - both uppercase and lowercase).
 *     Converts the character to its uppercase version if it is lowercase.
 *     Converts the character to its lowercase version if it is uppercase.
 *     Checks if the character is a digit (0-9).
 *     Determines if the character is a special symbol (anything that isn’t a letter or digit).
 * 3. Outputs the result in a clear and readable format.
**/
#include <iostream>
#include <cctype>

int main(){
    
    // Ask The User For The Inputs 
    std::cout << "\nEnter a character :";      //ask for the user for a character input
    char declared_character{};                 //Declare and initialize the character
    std::cin >> declared_character;

    //Check If The Declared Character Is A Vowel
    if (   //creating a pool of vowel using OR operation
           declared_character == 'a' || declared_character == 'A'
        || declared_character == 'e' || declared_character == 'E'
        || declared_character == 'i' || declared_character == 'I'
        || declared_character == 'o' || declared_character == 'O' 
        || declared_character == 'u' || declared_character == 'U'
                                                                 )                                                           
    {
        std::cout << declared_character <<" is a vowel. \n";           //checking if the character is in the pool created 
    }
    else {
        std::cout << declared_character << " is not a vowel. \n";      //checking if the charater is not in the pool of vowels
    }

    //Checking for case 
    if (std::islower(declared_character)) {                             //determining if the character is lowercase                         
        std::cout << "Uppercase version : " 
                  << (char)std::toupper(declared_character) << "\n\n";  // converting the character to uppercase 
    }
    else if(std::isupper(declared_character)) {                         //determining if the character is uppercase 
        std::cout << "Lowercase version : "                             
                  << (char)std::tolower(declared_character) << "\n\n";  //converting to lowercase 
    }

    //Checking if the character is digit 
    if (std::isdigit(declared_character)) {                              //derteming if the character is digit 
        std::cout << declared_character <<" is a digit. \n\n";
    }

    //Checking if the character is a symbol
    if (!std::isalnum(declared_character)) {                               //determinig if the character is not all of the above (alpha-numeric)
        std::cout << declared_character << " is a special symbol.\n\n";
    }

    return 0;
}