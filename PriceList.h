#pragma once

#include <string>
#include <vector>
#include "Product.h"

using namespace std;

class PriceList
{
public:
    vector<Product> product;

    PriceList() {}
    PriceList(vector<Product> product)
    {
        this->product = product;
    }
};
