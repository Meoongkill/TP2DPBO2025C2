from Aksesories import Aksesories

class Baju(Aksesories):
    def __init__(self, ID, Name, Category, Price, Stock, Size, Material, Brand, Factory="", Classification="", Type=""):
        super().__init__(ID, Name, Category, Price, Stock, Size, Material, Brand)
        self.Factory = Factory
        self.Classification = Classification
        self.Type = Type

    def setting_data_baju(self, ID, Name, Category, Price, Stock, Size, Material, Brand, NewFactory, NewClassification, NewType):
        super().setting_data_aksesories(ID, Name, Category, Price, Stock, Size, Material, Brand)
        self.Factory = NewFactory
        self.Classification = NewClassification
        self.Type = NewType

    def getter_factory(self):
        return self.Factory

    def getter_classification(self):
        return self.Classification

    def getter_type(self):
        return self.Type