#pragma once

#include <string>
#include <iostream>

class Name {
private:
    std::string first_name;
    std::string last_name;
public:
    Name()  
        : first_name(""), last_name("") {}
    Name(const std::string& first_name, const std::string& last_name) 
        : first_name(first_name), last_name(last_name) {}

    const std::string& getFirstName() const;
    const std::string& getLastName() const;

    void setFirstName(const std::string& fn);
    void setLastName(const std::string& ln);

    Name& operator = (const Name& other);

    friend std::ostream& operator << (std::ostream& os, const Name& other);
    friend std::istream& operator >> (std::istream& is, Name& other);
};