public class Petshop {
    private int ID;
    private String Name;
    private String Category;
    private int Price;
    private int Stock;

    public Petshop() {
        this.ID = -1;
        this.Name = "";
        this.Category = "";
        this.Price = 0;
        this.Stock = 0;
    }

    public Petshop(int ID, String Name, String Category, int Price, int Stock) {
        this.ID = ID;
        this.Name = Name;
        this.Category = Category;
        this.Price = Price;
        this.Stock = Stock;
    }

    public void settingDataPetshop(int NewID, String NewName, String NewCategory, int NewPrice, int NewStock) {
        this.ID = NewID;
        this.Name = NewName;
        this.Category = NewCategory;
        this.Price = NewPrice;
        this.Stock = NewStock;
    }

    public int getterID() {
        return this.ID;
    }

    public String getterName() {
        return this.Name;
    }

    public String getterCategory() {
        return this.Category;
    }

    public int getterPrice() {
        return this.Price;
    }

    public int getterStock() {
        return this.Stock;
    }
}