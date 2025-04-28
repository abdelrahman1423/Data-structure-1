#include "Property.h"
#ifndef PROPERTY_H
#define PROPERTY_H

#include <iostream>
#include <vector> 
#include "../../../json-develop/include/nlohmann/json.hpp"
using namespace std;
using json = nlohmann::json;

class Property {
public:
    int id;
    string name;
    string ownerName;
    string location;
    double price;
    vector<string> features;
    double space;
    string addedDate;
    string condition; // For Sale or For Rent
    string dealStatus; // Open or Closed

public:
    // Constructor
    Property(int id, string name, string location, double price, vector<string> features,
             double space, string addedDate, string condition, string dealStatus);

    // Display property details
    void display() const;

    // Check if property has a specific feature
    bool hasFeature(const string& feature) const;

    // Get deal status
    std::string getDealStatus() const;

    // Convert property to JSON
    json toJSON() const;
};

#endif
