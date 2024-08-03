#include <iostream>

#include "clock.hpp"

Clock::Clock() : brand("Unknown"),
				colour("Unknown"),
				display("Unknown"),
				power_source("Unknown"),
				shape("Unknown"),
				weight_kgs(0.0),
				model_number(0000),
				movement("Unknown"),
				material("Unknown"),
				country_origin("Unknown"),
				price(0) {

}

Clock::Clock(
		char* _brand,
		char* _colour,
		char* _display,
		char* _movement,
		char* _power_source,
		float _weight_kgs,
		char* _shape,
		long long _model_number,
		char* _material,
		char* _country_origin,
		int _price) : brand(_brand),
			colour(_colour),
			display(_display),
			power_source(_power_source),
			shape(_shape),
			weight_kgs(_weight_kgs),
			model_number(_model_number),
			movement(_movement),
			material(_material),
			country_origin(_country_origin),
			price(_price) {

}

status_t Clock::set_brand(const char* _brand) { 
	if(_brand == 0)
		return FAILURE;
	this->brand = (char*)_brand;
	return SUCCESS;
}

status_t Clock::set_material(const char* _material) {
	if(_material == 0)
		return FAILURE;
	this->material = (char*)_material;
	return SUCCESS;
}

status_t Clock::set_movement_type(const char* _movement_type) {
	if(_movement_type == 0)
		return FAILURE;
	this->movement = (char*)_movement_type;
	return SUCCESS;
}

status_t Clock::set_weight_kgs(float _weight) {
	if(_weight < 0)
		return FAILURE;
	this->weight_kgs = _weight;
	return SUCCESS;
}

status_t Clock::set_power_source(const char* _power_source) {
	if(_power_source == 0)
		return FAILURE;
	this->power_source = (char*)_power_source;
	return SUCCESS;
}

status_t Clock::set_model_number(const long long _model_number) {
	if(_model_number < 0)
		return FAILURE;
	this->model_number = _model_number;
	return SUCCESS;
}

status_t Clock::set_display_type(const char* _display_type) {
	this->display = (char*)_display_type;
	return SUCCESS;
}

status_t Clock::set_colour(const char* _colour) {
	if(colour == 0)
		return FAILURE;
	this->colour = (char*)_colour;
	return SUCCESS;
}

status_t Clock::set_shape(const char* _shape) {
	if (_shape == 0)
		return FAILURE;
	this->shape = (char*)_shape;
	return SUCCESS;
}

status_t Clock::set_country_origin(const char* _country_origin) {
	if(_country_origin == 0)
		return FAILURE;
	this->country_origin = (char*)_country_origin;
	return SUCCESS;
}

status_t Clock::set_price(const int _price) {
	if(_price < 0)
		return FAILURE;
	this->price = _price;
	return SUCCESS;
}


char* Clock::get_brand() const {
	return this->brand;
}

char* Clock::get_material() const {
	return this->material;
}

char* Clock::get_movement_type() const {
	return this->movement;
}

char* Clock::get_shape() const {
	return this->shape;
}

float Clock::get_weight_kgs() const {
	return this->weight_kgs;
}

char* Clock::get_power_source() const {
	return this->power_source;
}

long long Clock::get_model_number() const {
	return this->model_number;
}

char* Clock::get_display_type() const {
	return this->display;
}

char* Clock::get_colour() const {
	return this->colour;
}

char* Clock::get_country_origin() const {
	return this->country_origin;
}

int Clock::get_price() const {
	return this->price;
}

void Clock::show() const {
	std::cout << "Clock Details" << std::endl
	 		<< "Brand : " << this->brand << std::endl
			<< "colour : " << this->colour << std::endl
			<< "Display : " << this->display << std::endl
			<< "Power source : " << this->power_source << std::endl
			<< "Shape : " << this->shape << std::endl
			<< "Weight : " << this->weight_kgs << " kg" << std::endl
			<< "Model Number : " << this->model_number << std::endl
			<< "Movement type : " << this->movement << std::endl
			<< "Material : " << this->material << std::endl
			<< "Country of origin : " << this->country_origin << std::endl
			<< "Price : " << this->price << std::endl;
}