#include<iostream>
#include<memory>
#include<math.h>
#include<cctype>

// //=================swap function======================================
// void swap_numbers(int* first_number , int* second_number){
    
//     int temp = *first_number;
//     *first_number = *second_number;
//     *second_number = temp;

//     std::cout << "first_number = "<<*first_number<<std::endl;
//     std::cout << "second_number = "<<*second_number<<std::endl;

// }//swap_numbers

// int main() {

//     int first_number = 0;
//     int second_number = 1;
//     swap_numbers(&first_number,&second_number);

// //=================================================================    


// int get_min(int numbers[], int size) {
//     int min = numbers[0];
//     for (int i = 1 ; i<size ; i++){
//         if(numbers[i]< min)
//         min = numbers[i];
//     };//for loop
//     return min;
// }//get_min

// int get_max(int numbers[], int size) {
//     int max = numbers[0];
//     for (int i = 1 ; i<size ; i++){
//         if(numbers[i]> max)
//         max = numbers[i];
//     };//for loop
//     return max;
// }//get_max

// int main() {
//     int numbers[5] = {3,2,1,0,4};
//     std::cout << "Minimum = " << get_min(numbers ,5) << std::endl;
//     std::cout << "Maximun = " << get_max(numbers ,5) << std::endl;
//    // system("pause>0");
//     return 0;
// }


//}