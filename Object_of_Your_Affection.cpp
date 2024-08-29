#include <iostream>
#include <vector>
#include <string>
#include "Object_of_Your_Affection_Functions.hpp"

int main() {
    std::cout << "==========OBJECT OF YOUR AFFECTION=========\n";
    
    Profile user;
    std::string Name;
    std::cout << "Enter your name : ";
    std::cin >> Name;
    
    int Age;
    std::cout << "\nEnter your age : ";
    std::cin >> Age;
    
    std::string City;
    std::cout << "\nEnter your city of residence : ";
    std::cin >> City;
    
    std::string Country;
    std::cout << "\nEnter your country of residence : ";
    std::cin >> Country;
    
    std::string Pronouns;
    std::cout << "\nEnter your pronouns : ";
    std::cin >> Pronouns;
    
    user.new_profile(Name, Age, City, Country, Pronouns);
    
    std::vector<std::string> Hobbies;
    for (int i = 0; i < 5; i++) {
        std::string hobby;
        std::cout << "Enter your hobby: ";
        std::cin >> hobby;
        std::cout << "\n";
        Hobbies.push_back(hobby);
    }
    
    user.add_hobbies(Hobbies);
    user.display_profile();
    
    return 0;
}
