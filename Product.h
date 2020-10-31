#pragma once

#include <string>
#include "Categories.h"

using namespace std;

class Product
{
public:
    Categories category;
    string name;
    float price;
    int numbers;
    string pathToPhoto;

    Product() {}
    Product(Categories category, string name, float price, int numbers, string pathToPhoto)
    {
        this->category = category;
        this->name = name;
        this->price = price;
        this->numbers = numbers;
        this->pathToPhoto = pathToPhoto;
    }
};
