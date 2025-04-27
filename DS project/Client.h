#pragma once
#include "User.h"
#include <vector>
#include "Property.h"

class Client : public User {
private:
    string email;
    string phone;
    vector<Property> myListings;

public:
    Client();
    Client(string username, string password, string email, string phone);

    void addProperty(Property property);
    void viewMyListings();
    void compareProperties(vector<Property> properties);

    void setEmail(string email);
    string getEmail();

    void setPhone(string phone);
    string getPhone();
};

