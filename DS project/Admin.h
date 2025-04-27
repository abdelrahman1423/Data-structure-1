#pragma once
#include "User.h"
#include <vector>
#include "Property.h"
#include "Client.h"


class Admin : public User 
{
    public:
        Admin();
        Admin(string username,string password);

        void viewDashboard();
        void approveListing(Property property);
        void removeListing(vector<Property>& properties, int propertyId);
        void editListing(Property& property);
        void manageUsers(vector<Client>& clients);
};

