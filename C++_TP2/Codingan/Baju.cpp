#include <iostream>
#include <string>
#include "Aksesories.cpp"

using namespace std;

class Baju : public Aksesories
{

private:
    string Factory;
    string Classification;
    string Type;

public:
    Baju() : Aksesories()
    {
        this->Factory = "";
        this->Classification = "";
        this->Type = "";
    }

    Baju(int ID, string Name, string Category, int Price, int Stock, string Size, string Material, string Brand, string Factory, string Classification, string Type) : Aksesories(ID, Name, Category, Price, Stock, Size, Material, Brand)
    {
        this->Factory = Factory;
        this->Classification = Classification;
        this->Type = Type;
    }

    void Setting_Data_Baju(int ID, string Name, string Category, int Price, int Stock, string Type, string Material, string Brand, string NewFactory, int NewClassification, string NewType)
    {
        Aksesories::Setting_Data_Aksesories(ID, Name, Category, Price, Stock, Type, Material, Brand);
        this->Factory = NewFactory;
        this->Classification = NewClassification;
        this->Type = NewType;
    }

    // Getter buat Factory
    string Getter_Factory()
    {
        return this->Factory;
    }

    // Setter buat Factory
    void Setter_Factory()
    {
        this->Factory = Factory;
    }

    // Getter buat Classification
    string Getter_Classification()
    {
        return this->Classification;
    }

    // Setter buat Classification
    void Setter_Classification()
    {
        this->Classification = Classification;
    }

    // Getter buat Type
    string Getter_Type()
    {
        return this->Type;
    }

    // Setter buat Type
    void Setter_Type()
    {
        this->Type = Type;
    }

    ~Baju()
    {
    }
};