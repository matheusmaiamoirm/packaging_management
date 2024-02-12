#ifndef SALE_HPP_
#define SALE_HPP_

#include <string>
#include <vector>
#include "user.hpp"
#include "../product/product.hpp"
#include "../user/user.hpp"

using namespace std;

class Sale{
protected:
    int id;
    User *user;
    Product *product;
    int quantity;
    double value;
public:
    Sale(int id, User *user, Product *product, int quantity, double value);
    ~Sale();

    const int getId() const;
    bool setId(int id);

    const User* getUser() const;
    bool setUser(User *user);

    const Product* getProduct() const;
    bool setProduct(Product *product);

    const int getQuantity() const;
    bool setQuantity(int quantity);

    const double getValue() const;
    bool setValue(double value);

    // SaleIterator salesBegin();
    // SaleIterator salesEnd();
};

#endif 