#include "Name.hpp"

Name::Name() : first_name(""), last_name("") {}

Name::Name(const std::string& first_name, const std::string& last_name) 
        : first_name(first_name), last_name(last_name) {}

const std::string& Name::getFirstName() const {
    return this->first_name;
}

const std::string& Name::getLastName() const {
    return this->last_name;
}

void Name::setFirstName(const std::string& fn) {
    this->first_name =  fn;
}

void Name::setLastName(const std::string& ln) {
    this->last_name = ln;
}

Name& Name::operator = (const Name& other) {
    if(this == &other) {
        return *this;
    }

    this->first_name = other.first_name;
    this->last_name = other.last_name;
    return *this;
}

std::ostream& operator << (std::ostream& os, const Name& other) {
    os << other.first_name << " " << other.last_name;
    return os;
}


std::istream& operator >> (std::istream& is, Name& other) {
    is >> other.first_name >> other.last_name;
    if (is) {} else {
        other = Name();
    } return is;
}