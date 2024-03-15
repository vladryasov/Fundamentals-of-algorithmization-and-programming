#ifndef ORDER_H
#define ORDER_H

#include <string>
#include "data.h"
class order
{
public:
    order();
    //Get functions
    std::string get_number();
    std::string get_addres();
    std::string get_date_to();
    std::string get_date_from();
    std::string get_in_string();
    std::string get_time_to_in_string();
    std::string get_time_from_in_string();
    unsigned long long get_weight();
    //Set functions
    void setNumber(const std::string &newNumber);

    void setAddres(const std::string &newAddres);

    void setDate_to(const Data &newDate_to);

    void setDate_from(const Data &newDate_from);

    void setWeight(unsigned long long newWeight);

    short getTime_to() const;
    void setTime_to(short newTime_to);

    short getTime_from() const;
    void setTime_from(short newTime_from);
private:
    std::string number,addres;
    short int time_to,time_from;
    Data date_to,date_from;
    unsigned long long weight;
};

#endif // ORDER_H
