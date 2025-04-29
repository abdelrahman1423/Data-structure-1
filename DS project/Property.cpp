#include<iostream>
#include<string>
#include<vector>
#include "Property.h"
#include "nlohmann/json.hpp"
using namespace std;
using json = nlohmann::json; 

Property::Property(int id, string name, string location, double price, vector<string> features,
                   double space, string addedDate, string condition, string dealStatus)
    : id(id), name(name), location(location), price(price), features(features),
      space(space), addedDate(addedDate), condition(condition), dealStatus(dealStatus) {}


void Property::display() const {
    cout << "Property ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Owner Name: " << ownerName << endl;
    cout << "Location: " << location << endl;
    cout << "Price: $" << price << endl;
    cout << "Features: ";
    for (const auto& feature : features) {
        cout << feature << ", ";
    }
    cout << "\nSpace: " << space << " sq ft" << endl;
    cout << "Added Date: " << addedDate << endl;
    cout << "Condition: " << condition << endl;
    cout << "Deal Status: " << dealStatus << endl;
}

bool Property::hasFeature(const string& feature) const {
    for (const string& f : features) {
        if (f == feature) {
            return true;
        }
    }
    return false;
}


string Property::getDealStatus() const {
    return dealStatus;
}
