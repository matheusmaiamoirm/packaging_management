#include <product.hpp>

using namespace std;

Product::Product(int id, string name, double price, int quantity):
    id(id), name(name), price(price), quantity(quantity){}

Product::~Product(){}   

const int Product::getId() const{
    return this->id;
}

bool Product::setId(int id){
    this->id = id;
    return (this->id == id);
}

const string Product::getName() const
{
    return this->name;
}

bool Product::setName(string name)
{
    this->name = name;
    return this->name == name;
}

const double Product::getPrice() const
{
    return price;
}

bool Product::setPrice(double price)
{
    this->price = price;
    return this->price == price;
}

const int Product::getQuantity() const
{
    return this->quantity;
}

bool Product::setQuantity(int quantity)
{
    this->id = quantity;
    return this->quantity == quantity;
}
