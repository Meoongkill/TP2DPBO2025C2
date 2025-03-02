<?php
require_once 'Petshop.php';
require_once 'Aksesories.php';
require_once 'Baju.php';

function printData($product) {
    echo "ID: " . $product->getterID() . ", Name: " . $product->getterName() . ", Category: " . $product->getterCategory() . ", Price: Rp" . $product->getterPrice() . ", Stock: " . $product->getterStock() . "\n";
}

$productArray = [];
$productArray[] = new Petshop(111, "Royal_Canon", "Makanan", 68000, 32);
$productArray[] = new Aksesories(221, "Kandang_Anjing", "Aksesories", 650000, 3, "Besar", "Alumunium", "EA_Shop");
$productArray[] = new Aksesories(222, "Bantal_Kucing", "Aksesories", 150000, 5, "Kecil", "Cotton", "Supreme");
$productArray[] = new Baju(331, "Dog Sweater", "Baju", 85000, 4, "Besar", "Wol", "H&M", "Bandung", "Adult", "Reusable");
$productArray[] = new Baju(332, "Cat Raincoat", "Baju", 95000, 6, "Kecil", "Plastik", "Zara", "Jogya", "Toodler", "Lembiru");

while (true) {
    echo "\n||||||||||||||||| Selamat Datang Admin Acin Miau Petshoppp!!!!|||||||||||||||||\n";
    echo "|||||||||||||||||  Hari Ini kamu mau nambah data apa nih????  |||||||||||||||||\n";
    echo "|||||||||||||||||                PHP Edition                  |||||||||||||||||\n";
    echo "[1] Mau Print data yang ada di database                       'Menampilkan Data'\n";
    echo "[2] Mau Add data Petshop baru                              'Menambahkan Petshop'\n";
    echo "[3] Mau Add data Aksesories baru                        'Menambahkan Aksesories'\n";
    echo "[4] Mau Add data Baju baru                            'Menambahkan Baju'\n";
    echo "[5] About database                                  'Yapping'\n";
    echo "[6] Mau Exit database                             'Keluar'\n";
    echo "Your Call : ";
    $choose = intval(trim(fgets(STDIN)));

    if ($choose == 6) {
        echo "\nHave A Nice Day~\n";
        echo "goshujinsama~~~\n";
        echo "ara-ara~~~\n";
        break;
    }

    if ($choose == 5) {
        echo "\nUntuk Tuhan, Bangsa, dan Alamamater\n";
        echo "Database ini dibuat oleh anak Institut Tapi Berpinjol\n";
        echo "A/N. Muhammad Fathan Putra dengan NIM (2300330)\n";
        echo "Buat bikin Aplikasi Database Petshop Miau Acin\n";
    }

    switch ($choose) {
        case 1:
            echo "\n>>>> Daftar Produk Acin Miau Petshoppp <<<<\n";
            if (empty($productArray)) {
                echo ">>> Database kosong - Tambahin dong >0< <<<\n";
                break;
            }
            foreach ($productArray as $product) {
                printData($product);
            }
            break;

        case 2:
            echo "ID: ";
            $ID = intval(trim(fgets(STDIN)));

            echo "Nama Produk: ";
            $Name = trim(fgets(STDIN));

            echo "Kategori Produk: ";
            $Category = trim(fgets(STDIN));

            echo "Harga Produk: Rp";
            $Price = intval(trim(fgets(STDIN)));

            echo "Stok Produk: ";
            $Stock = intval(trim(fgets(STDIN)));

            $productArray[] = new Petshop($ID, $Name, $Category, $Price, $Stock);
            echo "\n>>> Data Petshop Berhasil di tambahkan sir <<<\n";
            break;

        case 3:
            echo "ID: ";
            $ID = intval(trim(fgets(STDIN)));

            echo "Nama Produk: ";
            $Name = trim(fgets(STDIN));

            echo "Kategori Produk: ";
            $Category = trim(fgets(STDIN));

            echo "Harga Produk: Rp";
            $Price = intval(trim(fgets(STDIN)));

            echo "Stok Produk: ";
            $Stock = intval(trim(fgets(STDIN)));

            echo "Ukuran Aksesoris: ";
            $Size = trim(fgets(STDIN));

            echo "Bahan Aksesoris: ";
            $Material = trim(fgets(STDIN));

            echo "Brand Aksesoris: ";
            $Brand = trim(fgets(STDIN));

            $productArray[] = new Aksesories($ID, $Name, $Category, $Price, $Stock, $Size, $Material, $Brand);
            echo "\n>>> Data Aksesories Berhasil di tambahkan sir <<<\n";
            break;

        case 4:
            echo "ID: ";
            $ID = intval(trim(fgets(STDIN)));

            echo "Nama Produk: ";
            $Name = trim(fgets(STDIN));

            echo "Kategori Produk: ";
            $Category = trim(fgets(STDIN));

            echo "Harga Produk: Rp";
            $Price = intval(trim(fgets(STDIN)));

            echo "Stok Produk: ";
            $Stock = intval(trim(fgets(STDIN)));

            echo "Ukuran Baju: ";
            $Size = trim(fgets(STDIN));

            echo "Bahan Baju: ";
            $Material = trim(fgets(STDIN));

            echo "Brand Baju: ";
            $Brand = trim(fgets(STDIN));

            echo "Pabrik Baju: ";
            $Factory = trim(fgets(STDIN));

            echo "Kategori Baju: ";
            $Classification = trim(fgets(STDIN));

            echo "Tipe (Reusable / Lembiru): ";
            $Type = trim(fgets(STDIN));

            $productArray[] = new Baju($ID, $Name, $Category, $Price, $Stock, $Size, $Material, $Brand, $Factory, $Classification, $Type);
            echo "\n>>> Data Baju Berhasil di tambahkan sir <<<\n";
            break;

        default:
            echo "\nInputan di Resctrict 1 2 3 4 5 6, selain itu bakalan error. Sono balik ke Menu\n";
            break;
    }
}
?>