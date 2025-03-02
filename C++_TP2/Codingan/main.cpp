#include <iostream>
#include <string>
#include <iomanip>
#include "Baju.cpp"

using namespace std;

// Improved to use setw for consistent spacing
void Print_Keluaran(string text, int width)
{
    cout << left << setw(width) << text;
}

void Buat_Garis_Tabel(int widths[], int size)
{
    cout << "+";
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < widths[i] + 2; j++)
            cout << "-";
        cout << "+";
    }
    cout << endl;
}

void Buat_Header_Tabel(int widths[])
{
    Buat_Garis_Tabel(widths, 11);
    cout << "| ";
    Print_Keluaran("ID", widths[0]);
    cout << " | ";
    Print_Keluaran("Nama Produk", widths[1]);
    cout << " | ";
    Print_Keluaran("Kategori", widths[2]);
    cout << " | ";
    Print_Keluaran("Harga", widths[3]);
    cout << " | ";
    Print_Keluaran("Stok", widths[4]);
    cout << " | ";
    Print_Keluaran("Ukuran", widths[5]);
    cout << " | ";
    Print_Keluaran("Bahan", widths[6]);
    cout << " | ";
    Print_Keluaran("Brand", widths[7]);
    cout << " | ";
    Print_Keluaran("Pabrik", widths[8]);
    cout << " | ";
    Print_Keluaran("Klasifikasi", widths[9]);
    cout << " | ";
    Print_Keluaran("Tipe", widths[10]);
    cout << " |" << endl;
    Buat_Garis_Tabel(widths, 11);
}

void Print_Data_Biasa(Petshop *item, int widths[])
{
    cout << "| ";
    Print_Keluaran(to_string(item->Getter_ID()), widths[0]);
    cout << " | ";
    string name = item->Getter_Name();
    if (name.length() > widths[1])
        name = name.substr(0, widths[1] - 3) + "...";
    Print_Keluaran(name, widths[1]);
    cout << " | ";
    Print_Keluaran(item->Getter_Category(), widths[2]);
    cout << " | ";
    Print_Keluaran("Rp" + to_string(item->Getter_Price()), widths[3]);
    cout << " | ";
    Print_Keluaran(to_string(item->Getter_Stock()), widths[4]);
    cout << " | ";
}

void Print_Data_Tabel(Petshop *item, int type, int widths[])
{
    Print_Data_Biasa(item, widths);

    if (type == 0)
    {
        for (int i = 5; i < 11; i++)
        {
            Print_Keluaran("-", widths[i]);
            cout << " | ";
        }
    }
    else if (type == 1)
    {
        Aksesories *aks = (Aksesories *)item;
        Print_Keluaran(aks->Getter_Size(), widths[5]);
        cout << " | ";
        Print_Keluaran(aks->Getter_Material(), widths[6]);
        cout << " | ";
        Print_Keluaran(aks->Getter_Brand(), widths[7]);
        cout << " | ";
        Print_Keluaran("-", widths[8]);
        cout << " | ";
        Print_Keluaran("-", widths[9]);
        cout << " | ";
        Print_Keluaran("-", widths[10]);
        cout << " |";
    }
    else if (type == 2)
    {
        Baju *baju = (Baju *)item;
        Print_Keluaran(baju->Getter_Size(), widths[5]);
        cout << " | ";
        Print_Keluaran(baju->Getter_Material(), widths[6]);
        cout << " | ";
        Print_Keluaran(baju->Getter_Brand(), widths[7]);
        cout << " | ";
        Print_Keluaran(baju->Getter_Factory(), widths[8]);
        cout << " | ";
        Print_Keluaran(baju->Getter_Classification(), widths[9]);
        cout << " | ";
        Print_Keluaran(baju->Getter_Type(), widths[10]);
        cout << " |";
    }
    cout << endl;
}

void Buat_Footer_Tabel(int widths[])
{
    Buat_Garis_Tabel(widths, 11);
}

int main()
{
    // Fixed column widths for better display
    int widths[] = {5, 20, 12, 12, 6, 10, 10, 10, 10, 12, 10};

    Petshop petshop1(111, "Royal_Canon", "Makanan", 68000, 32);

    Aksesories aksesories1(221, "Kandang_Anjing", "Aksesories", 650000, 3, "Besar", "Alumunium", "EA_Shop");
    Aksesories aksesories2(222, "Bantal_Kucing", "Aksesories", 150000, 5, "Kecil", "Cotton", "Supreme");

    Baju baju1(331, "Dog Sweater", "Baju", 85000, 4, "Besar", "Wol", "H&M", "Bandung", "Adult", "Reusable");
    Baju baju2(332, "Cat Raincoat", "Baju", 95000, 6, "Kecil", "Plastik", "Zara", "Jogya", "Toodler", "Lembiru");

    Petshop *productArray[101];
    int productTypes[101];
    int productCount = 5;

    productArray[0] = &petshop1;
    productTypes[0] = 0;

    productArray[1] = &aksesories1;
    productTypes[1] = 1;

    productArray[2] = &aksesories2;
    productTypes[2] = 1;

    productArray[3] = &baju1;
    productTypes[3] = 2;

    productArray[4] = &baju2;
    productTypes[4] = 2;

    int Choose;
    int ID, Price, Stock;
    string Name, Size, Category, Material, Brand, Factory, Classification, Type;

    while (true)
    {
        cout << "\n||||||||||||||||| Selamat Datang Admin Acin Miau Petshoppp!!!!|||||||||||||||||" << endl;
        cout << "|||||||||||||||||  Hari Ini kamu mau nambah data apa nih????  |||||||||||||||||" << endl;
        cout << "[1] Mau Print data yang ada di database                       'Menampilkan Data'" << endl;
        cout << "[2] Mau Add data Petshop baru                              'Menambahkan Petshop'" << endl;
        cout << "[3] Mau Add data Aksesories baru                        'Menambahkan Aksesories'" << endl;
        cout << "[4] Mau Add data Baju baru                            'Menambahkan Baju'" << endl;
        cout << "[5] About database                                  'Yapping'" << endl;
        cout << "[6] Mau Exit database                             'Keluar'" << endl;
        cout << "Your Call : ";
        cin >> Choose;

        // Jika User memilih Pilihan 7, bakalan mengakhiri tindakan
        if (Choose == 6)
        {
            cout << "\nHave A Nice Day~" << endl;
            cout << "goshujinsama~~~" << endl;
            cout << "ara-ara~~~" << endl;
            break;
        }

        // Jika User memilih Pilihan 7, bakalan nampilin text yang mau kita tampilin
        if (Choose == 5)
        {
            cout << "\nUntuk Tuhan, Bangsa, dan Alamamater" << endl;
            cout << "Database ini dibuat oleh anak Institut Tapi Berpinjol" << endl;
            cout << "A/N. Muhammad Fathan Putra dengan NIM (2300330)" << endl;
            cout << "Buat bikin Aplikasi Database Petshop Miau Acin" << endl;
        }

        switch (Choose)
        {
        case 1:
            cout << "\n>>>> Daftar Produk Acin Miau Petshoppp <<<<" << endl;
            if (productCount == 0)
            {
                cout << ">>> Database kosong - Tambahin dong >0< <<<" << endl;
                break;
            }

            Buat_Header_Tabel(widths);

            for (int i = 0; i < productCount; i++)
            {
                Print_Data_Tabel(productArray[i], productTypes[i], widths);
            }

            Buat_Footer_Tabel(widths);

            break;

        case 2:
            if (productCount >= 101)
            {
                cout << "Nggak bisa nambah-nambah data lagi, udah Overload banh" << endl;
                break;
            }

            cout << "\n>>> Silahkan tambahkan data PETSHOP, dengan format yang benar! <<<" << endl;

            cout << "ID: ";
            cin >> ID;
            cin.ignore();

            cout << "Nama Produk: ";
            getline(cin, Name);

            cout << "Kategori Produk: ";
            getline(cin, Category);

            cout << "Harga Produk: Rp";
            cin >> Price;

            cout << "Stok Produk: ";
            cin >> Stock;

            productArray[productCount] = new Petshop(ID, Name, Category, Price, Stock);
            productTypes[productCount] = 0;
            productCount++;

            cout << "\n>>> Data Pestshop Berhasil di tambahkan sir <<<" << endl;
            break;

        case 3:
            if (productCount >= 101)
            {
                cout << "Penyimpanan penuh!" << endl;
                break;
            }

            cout << "\n>>> Silahkan tambahkan data AKSESORIES, dengan format yang benar! <<<" << endl;

            cout << "ID: ";
            cin >> ID;
            cin.ignore();

            cout << "Nama Produk: ";
            getline(cin, Name);

            cout << "Kategori Produk: ";
            getline(cin, Category);

            cout << "Harga Produk: Rp";
            cin >> Price;

            cout << "Stok Produk: ";
            cin >> Stock;
            cin.ignore();

            cout << "Ukuran Aksesoris: ";
            getline(cin, Size);

            cout << "Bahan Aksesoris: ";
            getline(cin, Material);

            cout << "Brand Aksesoris: ";
            getline(cin, Brand);

            productArray[productCount] = new Aksesories(ID, Name, Category, Price, Stock, Size, Material, Brand);
            productTypes[productCount] = 1;
            productCount++;

            cout << "\n>>> Data Aksesories Berhasil di tambahkan sir <<<" << endl;
            break;

        case 4:
            if (productCount >= 101)
            {
                cout << "Penyimpanan penuh!" << endl;
                break;
            }

            cout << "\n>>> Silahkan tambahkan data BAJU, dengan format yang benar! <<<" << endl;

            cout << "ID: ";
            cin >> ID;
            cin.ignore();

            cout << "Nama Produk: ";
            getline(cin, Name);

            cout << "Kategori Produk: ";
            getline(cin, Category);

            cout << "Harga Produk: Rp";
            cin >> Price;

            cout << "Stok Produk: ";
            cin >> Stock;
            cin.ignore();

            cout << "Ukuran Baju: ";
            getline(cin, Size);

            cout << "Bahan Baju: ";
            getline(cin, Material);

            cout << "Brand Baju: ";
            getline(cin, Brand);

            cout << "Pabrik Baju: ";
            getline(cin, Factory);

            cout << "Kategori Baju: "; // Fixed missing colon
            getline(cin, Classification);

            cout << "Tipe (Reusable / Lembiru): "; // Fixed missing colon
            getline(cin, Type);

            productArray[productCount] = new Baju(ID, Name, Category, Price, Stock, Size, Material, Brand, Factory, Classification, Type);
            productTypes[productCount] = 2;
            productCount++;

            cout << "\n>>> Data Baju Berhasil di tambahkan sir <<<" << endl;
            break;

        default:
            cout << "\nInputan di Resctrict 1 2 3 4 5 6, selain itu bakalan error. Sono balik ke Menu" << endl;
            break;
        }
    }

    // Free allocated memory to prevent memory leaks
    for (int i = 0; i < productCount; i++)
    {
        if (i >= 5)
        {
            delete productArray[i];
        }
    }

    return 0;
}