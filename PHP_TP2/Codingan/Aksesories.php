<?php
require_once 'Petshop.php';

class Aksesories extends Petshop {
    private $Size;
    private $Material;
    private $Brand;

    public function __construct($ID, $Name, $Category, $Price, $Stock, $Photo, $Size = "", $Material = "", $Brand = "") {
        parent::__construct($ID, $Name, $Category, $Price, $Stock, $Photo);
        $this->Size = $Size;
        $this->Material = $Material;
        $this->Brand = $Brand;
    }

    public function settingDataAksesories($ID, $Name, $Category, $Price, $Stock, $Photo, $NewSize, $NewMaterial, $NewBrand) {
        parent::settingDataPetshop($ID, $Name, $Category, $Price, $Stock, $Photo);
        $this->Size = $NewSize;
        $this->Material = $NewMaterial;
        $this->Brand = $NewBrand;
    }

    public function getterSize() {
        return $this->Size;
    }

    public function getterMaterial() {
        return $this->Material;
    }

    public function getterBrand() {
        return $this->Brand;
    }
}
?>