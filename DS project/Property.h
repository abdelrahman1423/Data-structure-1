#pragma once
#include <string>
#include <vector>

class Property 
{
    private:
        int id;
        string name;
        string location;
        double price;
        string type;
        vector<string> features;

    public:
        Property();
        Property(int id, string name, string location, double price, string type);

        void addFeature(string feature);
        void displayInfo();
        void editPropertyInfo(string name, string location, double price, string type);

        int getId();
};
