#include <user.hpp>

using namespace std;

User::User(int id, string name, string password):
    id(id), name(name), password(password){}

User::~User(){}

const int User::getId() const{
    return this->id;
}
bool User::setId(int id){
    this->id = id;
    return (this->id == id);
}

const string User::getName() const{
    return this->name;
}
bool User::setName(string name){
    this->name = name;
    return (this->name == name);
}

const string User::getPassword() const{
    return this->password;
}
bool User::setPassword(string password){
    this->password = password;
    return (this->password == password);
}