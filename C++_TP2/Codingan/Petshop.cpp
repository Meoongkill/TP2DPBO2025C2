#include <iostream>
#include <string>

using namespace std;

// Kita bikin kelas, namanya PetShop
class Petshop
{

private:
    // Di bagian ini, anggap aja kita mendeklarasikan (Decalarator) variabel - variabel yang bakalan kita pake di soal kali ini
    int ID;
    string Name;
    string Category;
    int Price;
    int Stock;

public:
    // Di bagian ini, kita setting Constructor awal buat Petshopnya
    Petshop()
    {
        this->ID = -1;
        this->Name = "";
        this->Category = "";
        this->Price = 0;
        this->Stock = 0;
    }

    // Terus dibagian ini, kita setting buat Construktor lanjutan buat Petshopnya
    Petshop(int ID, string Name, string Category, int Price, int Stock)
    {
        this->ID = ID;
        this->Name = Name;
        this->Category = Category;
        this->Price = Price;
        this->Stock = Stock;
    }

    // Terus dibagian ini, kita setting buat Construktor kalau ada data baru di Petshopnya
    void Setting_Data_Petshop(int NewID, string NewName, string NewCategory, int NewPrice, int NewStock)
    {
        this->ID = NewID;
        this->Name = NewName;
        this->Category = NewCategory;
        this->Price = NewPrice;
        this->Stock = NewStock;
    }

    // Di bagian ini, kita setting Accessor (Buat Mengakses data-data di Construktor + Declarator diatas)
    //  Getter buat ID
    int Getter_ID()
    {
        return this->ID;
    }

    // Setter buat ID
    void Setter_ID()
    {
        this->ID = ID;
    }

    // Getter buat nama
    string Getter_Name()
    {
        return this->Name;
    }

    // Setter buat nama
    void Setter_Name()
    {
        this->Name = Name;
    }

    // Getter buat kategori
    string Getter_Category()
    {
        return this->Category;
    }

    // Setter buat kategori
    void Setter_Category()
    {
        this->Category = Category;
    }

    // Getter buat harga
    int Getter_Price()
    {
        return this->Price;
    }

    // Setter buat harga
    void Setter_Price()
    {
        this->Price = Price;
    }

    // Getter buat Stock
    int Getter_Stock()
    {
        return this->Stock;
    }

    // Setter buat Stock
    void Setter_Stock()
    {
        this->Stock = Stock;
    }

    // Di bagian ini, kita setting buat Destructor nya
    ~Petshop()
    {
    }
};