<?php
class Petshop {
    private $ID;
    private $Name;
    private $Category;
    private $Price;
    private $Stock;
    private $Photo;

    public function __construct($ID = -1, $Name = "", $Category = "", $Price = 0, $Stock = 0, $Photo = 0) {
        $this->ID = $ID;
        $this->Name = $Name;
        $this->Category = $Category;
        $this->Price = $Price;
        $this->Stock = $Stock;
        $this->Photo = $Photo;
    }

    public function settingDataPetshop($NewID, $NewName, $NewCategory, $NewPrice, $NewStock, $NewPhoto) {
        $this->ID = $NewID;
        $this->Name = $NewName;
        $this->Category = $NewCategory;
        $this->Price = $NewPrice;
        $this->Stock = $NewStock;
        $this->Photo = $NewPhoto;
    }

    public function getterID() {
        return $this->ID;
    }

    public function getterName() {
        return $this->Name;
    }

    public function getterCategory() {
        return $this->Category;
    }

    public function getterPrice() {
        return $this->Price;
    }

    public function getterStock() {
        return $this->Stock;
    }

    public function getterPhoto() {
        return $this->Photo;
    }
}
?>