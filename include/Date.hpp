#pragma once

#include <string>
#include <chrono>
#include <ctime>
#include <iostream>

class Date {
private:
    unsigned short day, month, year;
    bool isValid() const;
public:
    Date();
    Date(const unsigned short& day, const unsigned short& month, const unsigned short& year) 
        : day(day), month(month), year(year) {}

    const unsigned short& getDay() const;
    const unsigned short& getMonth() const;
    const unsigned short& getYear() const;

    void setDay(const unsigned short& day);
    void setMont(const unsigned short& month);
    void setYear(const unsigned short& year);

    Date& operator = (const Date& other);

    Date operator + (const Date& other);
    Date operator - (const Date& other);
    Date operator * (const Date& other);
    Date operator / (const Date& other);

    bool operator > (const Date& other) const;
    bool operator < (const Date& other) const;
    bool operator >= (const Date& other) const;
    bool operator <= (const Date& other) const;
    bool operator == (const Date& other) const;
    bool operator != (const Date& other) const;

    friend std::ostream& operator << (std::ostream& os, const Date& other);
    friend std::istream& operator >> (std::istream& is, Date& other);
};