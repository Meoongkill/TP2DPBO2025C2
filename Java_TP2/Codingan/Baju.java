public class Baju extends Aksesories {
    private String Factory;
    private String Classification;
    private String Type;

    public Baju() {
        super();
        this.Factory = "";
        this.Classification = "";
        this.Type = "";
    }

    public Baju(int ID, String Name, String Category, int Price, int Stock, String Size, String Material, String Brand, String Factory, String Classification, String Type) {
        super(ID, Name, Category, Price, Stock, Size, Material, Brand);
        this.Factory = Factory;
        this.Classification = Classification;
        this.Type = Type;
    }

    public void settingDataBaju(int ID, String Name, String Category, int Price, int Stock, String Size, String Material, String Brand, String NewFactory, String NewClassification, String NewType) {
        super.settingDataAksesories(ID, Name, Category, Price, Stock, Size, Material, Brand);
        this.Factory = NewFactory;
        this.Classification = NewClassification;
        this.Type = NewType;
    }

    public String getterFactory() {
        return this.Factory;
    }

    public String getterClassification() {
        return this.Classification;
    }

    public String getterType() {
        return this.Type;
    }
}