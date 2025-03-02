from Petshop import Petshop
from Aksesories import Aksesories
from Baju import Baju

def print_data(product):
    print(f"ID: {product.getter_id()}, Name: {product.getter_name()}, Category: {product.getter_category()}, Price: Rp{product.getter_price()}, Stock: {product.getter_stock()}")

def main():
    product_array = []
    product_array.append(Petshop(111, "Royal_Canon", "Makanan", 68000, 32))
    product_array.append(Aksesories(221, "Kandang_Anjing", "Aksesories", 650000, 3, "Besar", "Alumunium", "EA_Shop"))
    product_array.append(Aksesories(222, "Bantal_Kucing", "Aksesories", 150000, 5, "Kecil", "Cotton", "Supreme"))
    product_array.append(Baju(331, "Dog Sweater", "Baju", 85000, 4, "Besar", "Wol", "H&M", "Bandung", "Adult", "Reusable"))
    product_array.append(Baju(332, "Cat Raincoat", "Baju", 95000, 6, "Kecil", "Plastik", "Zara", "Jogya", "Toodler", "Lembiru"))

    while True:
        print("\n||||||||||||||||| Selamat Datang Admin Acin Miau Petshoppp!!!!|||||||||||||||||")
        print("|||||||||||||||||  Hari Ini kamu mau nambah data apa nih????  |||||||||||||||||\n")
        print("|||||||||||||||||               Python Edition                |||||||||||||||||\n")
        print("[1] Mau Print data yang ada di database                       'Menampilkan Data'")
        print("[2] Mau Add data Petshop baru                              'Menambahkan Petshop'")
        print("[3] Mau Add data Aksesories baru                        'Menambahkan Aksesories'")
        print("[4] Mau Add data Baju baru                            'Menambahkan Baju'")
        print("[5] About database                                  'Yapping'")
        print("[6] Mau Exit database                             'Keluar'")
        choose = int(input("Your Call : "))

        if choose == 6:
            print("\nHave A Nice Day~")
            print("goshujinsama~~~")
            print("ara-ara~~~")
            break

        if choose == 5:
            print("\nUntuk Tuhan, Bangsa, dan Alamamater")
            print("Database ini dibuat oleh anak Institut Tapi Berpinjol")
            print("A/N. Muhammad Fathan Putra dengan NIM (2300330)")
            print("Buat bikin Aplikasi Database Petshop Miau Acin")

        if choose == 1:
            print("\n>>>> Daftar Produk Acin Miau Petshoppp <<<<")
            if not product_array:
                print(">>> Database kosong - Tambahin dong >0< <<<")
                continue
            for product in product_array:
                print_data(product)

        elif choose == 2:
            ID = int(input("ID: "))
            Name = input("Nama Produk: ")
            Category = input("Kategori Produk: ")
            Price = int(input("Harga Produk: Rp"))
            Stock = int(input("Stok Produk: "))
            product_array.append(Petshop(ID, Name, Category, Price, Stock))

        elif choose == 3:
            ID = int(input("ID: "))
            Name = input("Nama Produk: ")
            Category = input("Kategori Produk: ")
            Price = int(input("Harga Produk: Rp"))
            Stock = int(input("Stok Produk: "))
            Size = input("Ukuran Aksesoris: ")
            Material = input("Bahan Aksesoris: ")
            Brand = input("Brand Aksesoris: ")
            product_array.append(Aksesories(ID, Name, Category, Price, Stock, Size, Material, Brand))

        elif choose == 4:
            ID = int(input("ID: "))
            Name = input("Nama Produk: ")
            Category = input("Kategori Produk: ")
            Price = int(input("Harga Produk: Rp"))
            Stock = int(input("Stok Produk: "))
            Size = input("Ukuran Baju: ")
            Material = input("Bahan Baju: ")
            Brand = input("Brand Baju: ")
            Factory = input("Pabrik Baju: ")
            Classification = input("Kategori Baju: ")
            Type = input("Tipe (Reusable / Lembiru): ")
            product_array.append(Baju(ID, Name, Category, Price, Stock, Size, Material, Brand, Factory, Classification, Type))

        else:
            print("\nInputan di Resctrict 1 2 3 4 5 6, selain itu bakalan error. Sono balik ke Menu")

if __name__ == "__main__":
    main()