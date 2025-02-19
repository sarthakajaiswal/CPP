#include <cstdio>
#include <cstring>
#include "colour.hpp"

Colour::Colour() : red(255), green(255), blue(255), opacity(0.0) 
{

}

Colour::Colour(short _red, short _green, short _blue, float _opacity) : 
            red(_red),
            green(_green),
            blue(_blue)
{
    if(_opacity > 100)
        _opacity = 100;
    if(_opacity < 0)
        _opacity = 0;

    opacity = _opacity;
}

Colour::Colour(short _red, short _green, short _blue) :
            red(_red),
            green(_green),
            blue(_blue),
            opacity(100.0f)
{

}

short Colour::getRed() const 
{
    return this->red;
}

short Colour::getGreen() const 
{
    return this->green;
}

short Colour::getBlue() const 
{
    return this->blue;
}

float Colour::getOpacity() const 
{
    return this->opacity;
}

void Colour::setRed(short _red) 
{
    this->red = _red;
}

void Colour::setGreen(short _green)
{
    this->green = _green;
}

void Colour::setBlue(short _blue)
{
    this->green = _blue;
}

void Colour::show_colour() const 
{
    printf("%.2x%.2x%.2x\n", this->red, this->green, this->blue);
}