#pragma once

#include <string>

using namespace std;

class Categories
{
public:
    string cutFlowers;
    string pottedFlowers;
    string greeneryForBouquets;
    string relatedProducts;
    string expendableMaterial;
    string services;

    Categories() {}
    Categories(string cutFlowers, string pottedFlowers, string greeneryForBouquets, string relatedProducts, string expendableMaterial, string services)
    {
        this->cutFlowers = cutFlowers;
        this->pottedFlowers = pottedFlowers;
        this->greeneryForBouquets = greeneryForBouquets;
        this->relatedProducts = relatedProducts;
        this->expendableMaterial = expendableMaterial;
        this->services = services;
    }
};
