#ifndef USER_HPP_
#define USER_HPP_

#include <string>

using namespace std;

class User{
protected:
    int id;
    string name;
    string password;
public:
    User(int id, string name, string password);
    ~User();
    const int getId() const;
    bool setId(int id);

    const string getName() const;
    bool setName(string name);

    const string getPassword() const;
    bool setPassword(string password);
};

#endif