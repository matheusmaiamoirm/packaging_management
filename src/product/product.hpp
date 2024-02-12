#ifndef PRODUCT_HPP_
#define PRODUCT_HPP_

#include <string>
#include <vector>

using namespace std;

class Product{
protected:
    int id;
    string name;
    double price;
    int quantity;

public:

    Product(int id, string name, double price, int quantity);
    ~Product();

    const int getId() const;
    bool setId(int id);

    const string getName() const;
    bool setName(string name);

    const double getPrice() const;
    bool setPrice(double price);

    const int getQuantity() const;
    bool setQuantity(int quantity);

    // ProductIterator productsBegin();
    // ProductIterator productsEnd();
    // int productsSize();

    // static bool productAdd(Product *product);
    // static bool productRemove(Product *product);
    // static bool productUpdate(Product *product);
    // static bool productShow();


};


#endif
