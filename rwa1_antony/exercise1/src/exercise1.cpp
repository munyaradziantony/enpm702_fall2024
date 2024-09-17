/**
 * @file exercise1.cpp
 * @author munyaradzi antony (munyaradziantony@gmail.com)
 * @brief 
 * @version 1.0
 * @date 2024-09-14
 * 
 * @copyright Copyright (c) 2024
 * 
 * TODO - initialize , Modify and print values 
**/
#include <iostream>

int main(){

    // Initializing the variables
    int int_var{250};
    float float_var{987.654f} ;
    double double_var{543.210987} ;

    // Printing initial values
    std::cout << "\nPrinting initial values in the variables. \n";
    std::cout << "int_var = " << int_var << "\n" ;
    std::cout << "float_var = " << float_var << "\n" ;
    std::cout << "double_var = " << double_var << "\n" ;

    /**
    Modifying The Values
    * Subtracting 20 from int_var
    * Multipy float_var 1.5
    * Divide double_var by 3
    */

    int_var = int_var - 20 ;
    float_var = float_var * 1.5 ;
    double_var = double_var / 3 ;

    // Printing the new values
    std::cout << "\nPrinting the new values in the variables. \n";
    std::cout << "int_var = " << int_var << "\n" ;
    std::cout << "float_var = " << float_var << "\n" ;
    std::cout << "double_var = " << double_var << "\n\n" ;

    return 0;

}