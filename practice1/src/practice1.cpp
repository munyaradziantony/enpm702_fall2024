#include<iostream>
#include<math.h>
#include<cctype>

//hello world 
// int main () {
    
//     // std::cout <<"Hello World \n";
    
//     // return 0;
// }

//Print the number entered by the user 
// int main (){
//     //user input
//     std::cout << "Enter you desired number : ";
//     double desired_number;
//     std::cin >> desired_number;

//     //Display the number 
//     std::cout << "The chosen number is "<< desired_number<< "\n";

//     return 0;
// }

//addition of two numbers 
// int main (){
//     //input first number
//     double first_number;
//     std::cout << "Input the first number :";
//     std::cin >> first_number;

//     //input the second number
//     double second_number;
//     std::cout << "Input the second number";
//     std::cin >> second_number;

//     //addition operation 
//     double sum;
//     sum = first_number + second_number;

//     //Printing the result
//     std::cout<<"=============================\n";
//     std::cout << "The sum of "<< first_number<<" & "<< second_number<<" is "<< sum << "\n";

//      return 0;    
// }


// int main() {

//     //input first number
//     int first_number;
//     std::cout << "Input the first number :";
//     std::cin >> first_number;

//     //input the second number
//     int second_number;
//     std::cout << "Input the second number :";
//     std::cin >> second_number;

//     //division
//     int quotient;
//     quotient = std::ceil(first_number / second_number);
//     int remainder;
//     remainder = first_number % second_number;

//     //printing the result 
//     std::cout << "=================================\n";
//     std::cout<< first_number << " / " << second_number;
//     std::cout<< ": the Quotient is :"<< quotient<<" the remainder is "<<remainder<< "\n";

//     return 0;
// }

// //finding sizes of varialbe type 
// int main() {
//     std::cout<< "Size of int is "<< sizeof(int)<< "\n";
//     std::cout<< "Size of float is "<< sizeof(float)<< "\n";
//     std::cout<< "Size of double is "<< sizeof(double)<< "\n";
//     std::cout<< "Size of char is "<< sizeof(char)<< "\n";

//     return 0;
   
// }

// // swapping two numbers 
// int main() {
//     int a = 10;
//     int b = 20;

//     //printing values before swap 

//     std::cout<< "Values before swap \n";
//     std::cout<< "==========================================\n";
//     std::cout << " a is "<< a <<"\n";
//     std::cout << " b is "<< b <<"\n\n";
//     //create a buffer 
//     int buffer;

//     buffer = a;
//     a = b;
//     b = buffer;

//     //printing the result 
//     std::cout<< "Values after swap \n";
//     std::cout<< "==========================================\n";
//     std::cout << " a was 10 but now is "<< a <<"\n";
//     std::cout << " b was 20 but now is "<< b <<"\n\n";

//      return 0;
//} 

// //TODO check weather the number is even or odd 

// int main(){
//     //request input
//     std::cout<<"Enter a desired number : ";
//     int desired_number;
//     std::cin>> desired_number;

//     //check wether the number is divisible by 2 and print the state
//     if  (desired_number % 2 == 0 ){
//         std::cout << desired_number<<" is even. \n";
//     }else 
//     std::cout<< desired_number << " is odd. \n";

//     return 0;
// }

// //Determining the greatest number given 3 numbers
// int main(){
//     //input the numberes
//     std::cout << "Enter value of A :";
//     int A;
//     std::cin >> A;

//     std::cout << "Enter value of B :";
//     int B;
//     std::cin >> B;

//     std::cout << "Enter value of C :";
//     int C;
//     std::cin >> C;

//     if(A>=B && A>=C){

//         std::cout << " A is the biggest and has a value of "<< A << "\n";

//     }else if (B >=C){

//         std::cout << " B is the biggest and has a value of "<< B << "\n";

//     }else {

//      std::cout << " C is the biggest and has a value of "<< C << "\n";   
    
//     }

//     return 0;
    
// }

// Solution to a quadratic equation
// int main(){
//     //input the coefficient
//     std::cout<< "==========================================\n";
//     std::cout << "For an equation Ax^2 + Bx + C = 0.\nEnter the values of A, B and C \n";
//     std::cout << "Enter value of A :";
//     int A;
//     std::cin >> A;

//     std::cout << "Enter value of B :";
//     int B;
//     std::cin >> B;

//     std::cout << "Enter value of C :";
//     int C;
//     std::cin >> C;

//     float x1value;
//     x1value = (-B + sqrt(B*B  - 4*A*C )) / (2*A);

//     float x2value;
//     x2value = (-B - sqrt(B*B  - 4*A*C )) / (2*A);

//     //printing the result
//     std::cout<< "==========================================\n";
//     std::cout << "Soution to the equation is : X1Value "<< x1value<<" & X2Value :"<<x2value <<"\n\n";

//     return 0;
// }
    

