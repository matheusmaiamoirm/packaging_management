#ifndef DATABASE_HPP_
#define DATABASE_HPP_

#include "../product/product.hpp"
#include "../user/user.hpp"
#include "../sales/sale.hpp"
#include <vector>


class DataBase{
protected:
    static vector<Product*> products;
    static vector<User*> users;
    static vector<Sale*> sales;
public:

    DataBase();
    ~DataBase();
    typedef vector<Product*>::iterator ProductIterator;
    typedef vector<User*>::iterator UserIterator;
    typedef vector<Sale*>::iterator SaleIterator;

    ProductIterator productsBegin();
    ProductIterator productsEnd();
    int productsSize();

    bool productAdd(Product *product);
    bool productRemove(Product *product);
    bool productUpdate(Product *product);
    bool productShow();

    bool userAdd(User *user);
    bool UserRemove(User *user);
    bool UserUpdate(User *user);
    bool UserShow();

    SaleIterator salesBegin();
    SaleIterator salesEnd();
    int salesSize();
    
    bool salesAdd(Sale* sale);
    bool salesRemove(Sale* sale);
    bool salesUpdate(Sale* sale);
    bool salesShow();

};


#endif