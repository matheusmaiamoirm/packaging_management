#include "database.hpp"

vector<Product*> DataBase::products;
vector<User*> DataBase::users;
vector<Sale*> DataBase::sales;


DataBase::ProductIterator DataBase::productsBegin()
{
    return products.begin();
}

DataBase::ProductIterator DataBase::productsEnd()
{
    return products.end();
}

int DataBase::productsSize()
{
    return products.size();
}

bool DataBase::productAdd(Product *product)
{
    products.push_back(product);
    return products.back() == product;
}

bool DataBase::productRemove(Product *product)
{
    for(DataBase::ProductIterator it = productsBegin(); it < productsEnd(); it++){
        if (*it == product){
            products.erase(it);
            return true;
        }
    }

    return false;
}

bool DataBase::userAdd(User *user){
    this->users.push_back(user);
    return users.back() == user;
}


DataBase::SaleIterator DataBase::salesBegin()
{
    return sales.begin();
}

DataBase::SaleIterator DataBase::salesEnd()
{
    return sales.end();
}

int DataBase::salesSize()
{
    return sales.size();
}

bool DataBase::salesAdd(Sale *sale){
    this->sales.push_back(sale);
    return this->sales.back() == sale;
}

bool DataBase::salesRemove(Sale* sale){
    for(DataBase::SaleIterator it = salesBegin(); it < salesEnd(); it++){
        if(*it == sale){
            sales.erase(it);
            return true;
        }

    return false;
    }
}