from Petshop import Petshop

class Aksesories(Petshop):
    def __init__(self, ID, Name, Category, Price, Stock, Size="", Material="", Brand=""):
        super().__init__(ID, Name, Category, Price, Stock)
        self.Size = Size
        self.Material = Material
        self.Brand = Brand

    def setting_data_aksesories(self, ID, Name, Category, Price, Stock, NewSize, NewMaterial, NewBrand):
        super().setting_data_petshop(ID, Name, Category, Price, Stock)
        self.Size = NewSize
        self.Material = NewMaterial
        self.Brand = NewBrand

    def getter_size(self):
        return self.Size

    def getter_material(self):
        return self.Material

    def getter_brand(self):
        return self.Brand