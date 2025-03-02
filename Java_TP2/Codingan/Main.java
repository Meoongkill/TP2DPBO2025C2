import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {
    public static void printData(Petshop product) {
        System.out.println("ID: " + product.getterID() + ", Name: " + product.getterName() + ", Category: " + product.getterCategory() + ", Price: Rp" + product.getterPrice() + ", Stock: " + product.getterStock());
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        List<Petshop> productArray = new ArrayList<>();

        // Sample data
        productArray.add(new Petshop(111, "Royal_Canon", "Makanan", 68000, 32));
        productArray.add(new Aksesories(221, "Kandang_Anjing", "Aksesories", 650000, 3, "Besar", "Alumunium", "EA_Shop"));
        productArray.add(new Aksesories(222, "Bantal_Kucing", "Aksesories", 150000, 5, "Kecil", "Cotton", "Supreme"));
        productArray.add(new Baju(331, "Dog Sweater", "Baju", 85000, 4, "Besar", "Wol", "H&M", "Bandung", "Adult", "Reusable"));
        productArray.add(new Baju(332, "Cat Raincoat", "Baju", 95000, 6, "Kecil", "Plastik", "Zara", "Jogya", "Toodler", "Lembiru"));

        while (true) {
            System.out.println("\n||||||||||||||||| Selamat Datang Admin Acin Miau Petshoppp!!!!|||||||||||||||||");
            System.out.println("|||||||||||||||||  Hari Ini kamu mau nambah data apa nih????  |||||||||||||||||\n");
            System.out.println("|||||||||||||||||                Java Edition                 |||||||||||||||||\n");
            System.out.println("[1] Mau Print data yang ada di database                       'Menampilkan Data'");
            System.out.println("[2] Mau Add data Petshop baru                              'Menambahkan Petshop'");
            System.out.println("[3] Mau Add data Aksesories baru                        'Menambahkan Aksesories'");
            System.out.println("[4] Mau Add data Baju baru                            'Menambahkan Baju'");
            System.out.println("[5] About database                                  'Yapping'");
            System.out.println("[6] Mau Exit database                             'Keluar'");
            System.out.print("Your Call : ");
            int choose = scanner.nextInt();
            scanner.nextLine(); // Consume newline

            if (choose == 6) {
                System.out.println("\nHave A Nice Day~");
                System.out.println("goshujinsama~~~");
                System.out.println("ara-ara~~~");
                break;
            }

            if (choose == 5) {
                System.out.println("\nUntuk Tuhan, Bangsa, dan Alamamater");
                System.out.println("Database ini dibuat oleh anak Institut Tapi Berpinjol");
                System.out.println("A/N. Muhammad Fathan Putra dengan NIM (2300330)");
                System.out.println("Buat bikin Aplikasi Database Petshop Miau Acin");
            }

            switch (choose) {
                case 1:
                    System.out.println("\n>>>> Daftar Produk Acin Miau Petshoppp <<<<");
                    if (productArray.isEmpty()) {
                        System.out.println(">>> Database kosong - Tambahin dong >0< <<<");
                        break;
                    }
                    for (Petshop product : productArray) {
                        printData(product);
                    }
                    break;

                case 2:
                    System.out.print("ID: ");
                    int ID = scanner.nextInt();
                    scanner.nextLine(); // Consume newline

                    System.out.print("Nama Produk: ");
                    String Name = scanner.nextLine();

                    System.out.print("Kategori Produk: ");
                    String Category = scanner.nextLine();

                    System.out.print("Harga Produk: Rp");
                    int Price = scanner.nextInt();

                    System.out.print("Stok Produk: ");
                    int Stock = scanner.nextInt();

                    productArray.add(new Petshop(ID, Name, Category, Price, Stock));
                    System.out.println("\n>>> Data Petshop Berhasil di tambahkan sir <<<");
                    break;

                case 3:
                    System.out.print("ID: ");
                    ID = scanner.nextInt();
                    scanner.nextLine(); // Consume newline

                    System.out.print("Nama Produk: ");
                    Name = scanner.nextLine();

                    System.out.print("Kategori Produk: ");
                    Category = scanner.nextLine();

                    System.out.print("Harga Produk: Rp");
                    Price = scanner.nextInt();

                    System.out.print("Stok Produk: ");
                    Stock = scanner.nextInt();
                    scanner.nextLine(); // Consume newline

                    System.out.print("Ukuran Aksesoris: ");
                    String Size = scanner.nextLine();

                    System.out.print("Bahan Aksesoris: ");
                    String Material = scanner.nextLine();

                    System.out.print("Brand Aksesoris: ");
                    String Brand = scanner.nextLine();

                    productArray.add(new Aksesories(ID, Name, Category, Price, Stock, Size, Material, Brand));
                    System.out.println("\n>>> Data Aksesories Berhasil di tambahkan sir <<<");
                    break;

                case 4:
                    System.out.print("ID: ");
                    ID = scanner.nextInt();
                    scanner.nextLine(); // Consume newline

                    System.out.print("Nama Produk: ");
                    Name = scanner.nextLine();

                    System.out.print("Kategori Produk: ");
                    Category = scanner.nextLine();

                    System.out.print("Harga Produk: Rp");
                    Price = scanner.nextInt();

                    System.out.print("Stok Produk: ");
                    Stock = scanner.nextInt();
                    scanner.nextLine(); // Consume newline

                    System.out.print("Ukuran Baju: ");
                    Size = scanner.nextLine();

                    System.out.print("Bahan Baju: ");
                    Material = scanner.nextLine();

                    System.out.print("Brand Baju: ");
                    Brand = scanner.nextLine();

                    System.out.print("Pabrik Baju: ");
                    String Factory = scanner.nextLine();

                    System.out.print("Kategori Baju: ");
                    String Classification = scanner.nextLine();

                    System.out.print("Tipe (Reusable / Lembiru): ");
                    String Type = scanner.nextLine();

                    productArray.add(new Baju(ID, Name, Category, Price, Stock, Size, Material, Brand, Factory, Classification, Type));
                    System.out.println("\n>>> Data Baju Berhasil di tambahkan sir <<<");
                    break;

                default:
                    System.out.println("\nInputan di Resctrict 1 2 3 4 5 6, selain itu bakalan error. Sono balik ke Menu");
                    break;
            }
        }

        scanner.close();
    }
}