#include <iostream>
#include <string>
#include "Petshop.cpp"

using namespace std;

class Aksesories : public Petshop
{

private:
    string Size;
    string Material;
    string Brand;

public:
    Aksesories() : Petshop()
    {
        this->Size = "";
        this->Material = "";
        this->Brand = "";
    }

    Aksesories(int ID, string Name, string Category, int Price, int Stock, string Size, string Material, string Brand) : Petshop(ID, Name, Category, Price, Stock)
    {
        this->Size = Size;
        this->Material = Material;
        this->Brand = Brand;
    }

    void Setting_Data_Aksesories(int ID, string Name, string Category, int Price, int Stock, string NewSize, string NewMaterial, string NewBrand)
    {
        Petshop::Setting_Data_Petshop(ID, Name, Category, Price, Stock);
        this->Size = NewSize;
        this->Material = NewMaterial;
        this->Brand = NewBrand;
    }

    // Getter buat Size
    string Getter_Size()
    {
        return this->Size;
    }

    // Setter buat Size
    void Setter_Size()
    {
        this->Size = Size;
    }

    // Getter buat Material
    string Getter_Material()
    {
        return this->Material;
    }

    // Setter buat Material
    void Setter_Material()
    {
        this->Material = Material;
    }

    // Getter buat Brand
    string Getter_Brand()
    {
        return this->Brand;
    }

    // Setter buat Brand
    void Setter_Brand()
    {
        this->Brand = Brand;
    }

    ~Aksesories()
    {
    }
};