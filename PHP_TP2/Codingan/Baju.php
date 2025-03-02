<?php
require_once 'Aksesories.php';

class Baju extends Aksesories {
    private $Factory;
    private $Classification;
    private $Type;

    public function __construct($ID, $Name, $Category, $Price, $Stock, $Size, $Material, $Brand, $Factory = "", $Classification = "", $Type = "") {
        parent::__construct($ID, $Name, $Category, $Price, $Stock, $Size, $Material, $Brand);
        $this->Factory = $Factory;
        $this->Classification = $Classification;
        $this->Type = $Type;
    }

    public function settingDataBaju($ID, $Name, $Category, $Price, $Stock, $Size, $Material, $Brand, $NewFactory, $NewClassification, $NewType) {
        parent::settingDataAksesories($ID, $Name, $Category, $Price, $Stock, $Size, $Material, $Brand);
        $this->Factory = $NewFactory;
        $this->Classification = $NewClassification;
        $this->Type = $NewType;
    }

    public function getterFactory() {
        return $this->Factory;
    }

    public function getterClassification() {
        return $this->Classification;
    }

    public function getterType() {
        return $this->Type;
    }
}
?>