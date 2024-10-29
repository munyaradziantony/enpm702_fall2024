#include<iostream>
#include<memory>
#include<math.h>
#include<cctype>
#include<string>
#include<iostream>
#include<vector>
#include<array>

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


// class Person {
//     private:
        
//         int age_;
    
//     public:
//         std::string name_;
        
//         Person(std::string name , int age ):
//             name_(name),
//             age_(age) {};

//         void great(){
//             std::cout<< "My name is "<<name_<<std::endl;
//         }       

// };//class Person



// int main () {
//     Person person1 = Person("Munya",25);
//     person1.great();
//     person1.
// }


// //Q1
// class Sensor{
//     private:
//         int id_;

//     public:
//         Sensor(int id): id_{id}{};

// }

// //Q2
// class Battery {
//     private:
//         float voltage_;

//     public:
//         Battery(float voltage): voltage_{voltage} {}

// }

// //Q3
// class Motor{
//     private:
//         bool is_active_;

//     public:
//         Motor(bool is_active) : is_active_{is_active}{}
// }

// //Q4
// class TemperatureSensor{
//     private:
//         double temperature_;

//     public:
//         TemperatureSensor(double temperature) : temperature_{temperature}{}
// }

// //Q9
// class Path{
//     private:
//         std::vector<int> coodinates_;
//     public:
//         Path(const std::vector<int>& coodinates) : coodinates_{coodinates}{}
// }

// //10
// class Robot{
//     private:
//         std::string name_;

//     public:
//         Robot(const std::string& name) : name_{name}{}
// }

//Q11
class Trajectory{
    private:
        std::array<float, 5> distances_;
    public:
        Trajectory(const std::array<float, 5>& distances) : distances_{distances}{}
}
        