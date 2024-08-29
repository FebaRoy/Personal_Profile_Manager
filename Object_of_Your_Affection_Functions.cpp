#include "Object_of_Your_Affection_Functions.hpp"

void Profile::new_profile(std::string new_name, int new_age, std::string new_city, std::string new_country, std::string new_pronouns) {
    name = new_name;
    age = new_age;
    city = new_city;
    country = new_country;
    pronouns = new_pronouns;
}

void Profile::add_hobbies(const std::vector<std::string>& new_hobbies) {
    hobbies = new_hobbies;
}

void Profile::display_profile() const {
    std::cout << "==========YOUR PROFILE=========\n";
    std::cout << "Name          :" << name << "\n";
    std::cout << "Age           :" << age << "\n";
    std::cout << "City          :" << city << "\n";
    std::cout << "Country       :" << country << "\n";
    std::cout << "Pronouns      :" << pronouns << "\n";
    std::cout << "Hobbies       :\n";
    for (const auto& hobby : hobbies) {
        std::cout << "- " << hobby << "\n";
    }
}
