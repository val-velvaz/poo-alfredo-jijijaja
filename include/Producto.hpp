#pragma once

#include <string>

#include "Name.hpp"
#include "Date.hpp"

class Producto {
private:
    std::string id_product;
    std::string name_product;
    std::string type_product;
    std::string description;

    double base_price;
    double final_price;
    int stock;

    Date creation_date;
    Date last_creation_date;
    
public:

};
