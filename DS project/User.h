#pragma once
# include <iostream>
using namespace std;

class User
{

    protected:
        string username;
        string password;
        string Email;

    public:
        User();
        User(string username, string password);

        void setUsername(string username);
        string getUsername() ;

        void setPassword(string password);
        bool checkPassword(string password);



};

