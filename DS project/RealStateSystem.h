#pragma once
#include "Client.h"
#include "Admin.h"
#include "Property.h"
class RealStateSystem
{
    public:
        void Register();
        User* login(string username, string password);
        vector<Property> searchProperties(string location, double Price, string type);

        void saveDataToFile();
        void loadDataFromFile();
};

