public class Aksesories extends Petshop {
    private String Size;
    private String Material;
    private String Brand;

    public Aksesories() {
        super();
        this.Size = "";
        this.Material = "";
        this.Brand = "";
    }

    public Aksesories(int ID, String Name, String Category, int Price, int Stock, String Size, String Material, String Brand) {
        super(ID, Name, Category, Price, Stock);
        this.Size = Size;
        this.Material = Material;
        this.Brand = Brand;
    }

    public void settingDataAksesories(int ID, String Name, String Category, int Price, int Stock, String NewSize, String NewMaterial, String NewBrand) {
        super.settingDataPetshop(ID, Name, Category, Price, Stock);
        this.Size = NewSize;
        this.Material = NewMaterial;
        this.Brand = NewBrand;
    }

    public String getterSize() {
        return this.Size;
    }

    public String getterMaterial() {
        return this.Material;
    }

    public String getterBrand() {
        return this.Brand;
    }
}