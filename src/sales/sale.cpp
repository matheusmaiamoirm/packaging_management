#include <sale.hpp>
using namespace std;

//CONSTRUTOR E DESTRUTOR
Sale::Sale(int id, User *user, Product *product, int quantity, double value):
    id(id), user(user), product(product), quantity(quantity), value(value){}
    
Sale::~Sale(){}

// GETTERS E SETTERS
const int Sale::getId() const{
    return this->id;
}

bool Sale::setId(int id){
    this->id = id;
    return (this->id == id);
}

const User* Sale::getUser() const{
    return this->user;
}

bool Sale::setUser(User *user){
    this->user = user;
    return this->user == user;
}

const Product* Sale::getProduct() const{
    return this->product;
}
bool Sale::setProduct(Product *product){
    this->product = product;
    return this->product == product;
}

const int Sale::getQuantity() const{
    return this->quantity;
}
bool Sale::setQuantity(int quantity){
    this->quantity;
    return this->quantity == quantity;
}

const double Sale::getValue() const{
    return this->value;
}
bool Sale::setValue(double value){
    this->value;
    return this->value == value;
}
