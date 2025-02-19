#ifndef _CARROM_HPP
#define _CARROM_HPP

#include <iostream>

class Dimention{
    private: 
        float length;
        float breadth;
        float height;
    public:
        Dimention(float _length, float _breadth, float _height);
        Dimention();

        void set_length(float new_height);
        void set_breadth(float new_width);
        void set_height(float new_height);

        float get_length() const;
        float get_breadth() const;
        float get_height() const;

        void show() const;
};

class Carrom {
    private: 
        class Dimention dimention;
        float rip_width_cms;
        float pocket_diameter_cms;
        char* material;
        float weight_kgs;
        int price_inr;

    public:
        Carrom();
        void set_rip_width(float new_width);
        void set_dimention(float size, float thickness);
        void set_pocket_diameter(float new_diameter);
        void set_weight(float weight_in_kg);
        void set_material(const char* new_material);
        void set_price(int price_inr);

        float get_weight() const;
        float get_rip_width() const;
        float get_pocket_diameter() const;
        int get_price() const;
        char* get_material() const;

        void show(const char* msg) const;
        void show_dimention(const char* msg) const;
};

#endif