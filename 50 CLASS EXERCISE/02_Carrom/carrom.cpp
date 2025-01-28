#include <iostream>

#include "carrom.hpp"

Dimention::Dimention() : length(0.0), breadth(0.0), height(0.0) {

}

Dimention::Dimention(float _length, float _breadth, float _height) {
    this->length = _length;
    this->breadth = _breadth;
    this->height = _height;
}

void Dimention::set_length(float new_height) {
    this->length = new_height;
}

void Dimention::set_breadth(float new_breadth){
    this->breadth = new_breadth;
}

void Dimention::set_height(float new_height) {
    this->height = new_height;
}

float Dimention::get_length() const {
    return this->length;
}

float Dimention::get_breadth() const {
    return this->breadth;
}

float Dimention::get_height() const {
    return this->height;
}

void Dimention::show() const {
    std::cout << "Dimention: "
            << this->length << "cms * " 
            << this->breadth << "cms * "
            << this->height << "cms" 
            << std::endl;
}

Carrom::Carrom() {
    dimention = Dimention(80.0, 80.0, 8);
    rip_width_cms = 15.0;
    pocket_diameter_cms = 4.45;
    material = "Wood";
    weight_kgs = 20.5;
    price_inr = 12999;
}

void Carrom::set_rip_width(float new_width) {
    this->rip_width_cms = new_width;
}

void Carrom::set_dimention(float size, float thickness) {
    this->dimention.set_length(size);
    this->dimention.set_breadth(size);
    this->dimention.set_height(thickness);
}

void Carrom::set_pocket_diameter(float new_diameter) {
    this->pocket_diameter_cms = new_diameter;
}

void Carrom::set_weight(float new_weight) {
    this->weight_kgs = new_weight;
}

void Carrom::set_material(const char* new_material) {
    this->material = (char*)new_material;
}

void Carrom::set_price(int new_price) {
    this->price_inr = new_price;
}

float Carrom::get_weight() const {
    return this->weight_kgs;
}

float Carrom::get_rip_width() const {
    return this->rip_width_cms;
}

float Carrom::get_pocket_diameter() const {
    return this->pocket_diameter_cms;
}

int Carrom::get_price() const {
    return this->price_inr;
}

char* Carrom::get_material() const {
    return this->material;
}

void Carrom::show(const char* msg) const {
    if(msg)
        std::cout << msg <<std::endl;
 
    this->dimention.show();
    std::cout << "Rip Width : " << this->rip_width_cms << std::endl
            << "Pocket Diameter : " << this->pocket_diameter_cms << std::endl
            << "Weight : " << this->weight_kgs << " kg" << std::endl
            << "Material : " << this->material << std::endl
            << "Price : " << this->price_inr << " Rs" << std::endl;
}

void Carrom::show_dimention(const char* msg) const {
    if(msg)
        std::cout << msg << std::endl;

    this->dimention.show();
}