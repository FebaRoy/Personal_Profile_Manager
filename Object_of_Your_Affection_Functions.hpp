#include <iostream>
#include <vector>
#include <string>

class Profile {
private:
    std::string name;
    int age;
    std::string city;
    std::string country;
    std::string pronouns;
    std::vector<std::string> hobbies;

public:
    Profile() : age(0) {} // Default constructor

    void new_profile(std::string new_name, int new_age, std::string new_city, std::string new_country, std::string new_pronouns);
    void add_hobbies(const std::vector<std::string>& new_hobbies);
    void display_profile() const;
};
