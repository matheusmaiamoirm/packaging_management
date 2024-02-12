#include "unit_database.hpp"
#include <assert.h>

void unit_database(){
    unit_productAdd();
    unit_userAdd();
    unit_salesAdd();
}


void unit_productAdd(){
    
    DataBase db;
    
    Product *product1 = new Product(1, "Emabalagem media", 15.0, 100);
    
    db.productAdd(product1);

    for(DataBase::ProductIterator it = db.productsBegin(); it < db.productsEnd(); it++ ){
        assert(*it == product1);
    }

    
    

}