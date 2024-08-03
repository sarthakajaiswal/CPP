#ifndef _CLOCK_HPP
#define _CLOCK_HPP

#include <iostream>

const int SUCCESS = 1;
const int FAILURE = 0;

typedef int	status_t;

class Clock {
	private: 
		char* brand;
		char* colour;
		char* display;
		char* movement;
		char* power_source;
		float weight_kgs;
		char* shape;
		long long model_number;
		char* material;
		char* country_origin;
		int price;
	public: 
		Clock();
		Clock(
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
			int _price
			);
		
	status_t set_brand(const char* _brand);	
	status_t set_display_type(const char* _display);
	status_t set_movement_type(const char* _movement);
	status_t set_power_source(const char* _power_source);
	status_t set_weight_kgs(const float _weight_kgs);
	status_t set_shape(const char* _shape);
	status_t set_colour(const char* _colour);
	status_t set_model_number(const long long _model_number);
	status_t set_material(const char* _material);
	status_t set_country_origin(const char* _country_origin);
	status_t set_price(int _price);
	
	char* get_brand() const;
	char* get_display_type() const;
	char* get_movement_type() const;
	char* get_colour() const;
	char* get_power_source() const;
	float get_weight_kgs() const;
	char* get_shape() const;
	long long get_model_number() const;
	char* get_material()const;
	char* get_country_origin() const;
	int get_price() const;
	
	void show() const;
};

#endif		//_CLOCK_HPP