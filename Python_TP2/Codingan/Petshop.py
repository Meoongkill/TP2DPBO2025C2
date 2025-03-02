class Petshop:
    def __init__(self, ID=-1, Name="", Category="", Price=0, Stock=0):
        self.ID = ID
        self.Name = Name
        self.Category = Category
        self.Price = Price
        self.Stock = Stock

    def setting_data_petshop(self, NewID, NewName, NewCategory, NewPrice, NewStock):
        self.ID = NewID
        self.Name = NewName
        self.Category = NewCategory
        self.Price = NewPrice
        self.Stock = NewStock

    def getter_id(self):
        return self.ID

    def getter_name(self):
        return self.Name

    def getter_category(self):
        return self.Category

    def getter_price(self):
        return self.Price

    def getter_stock(self):
        return self.Stock