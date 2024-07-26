#ifndef _COLOUR_HPP
#define _COLOUR_HPP

#include <cstdio>
#include <cstring>

class Colour 
{
    private:
        short red;
        short green;
        short blue;
        float opacity;

    public:
        Colour();
        Colour(short _red, short _green, short _blue, float _opacity);
        Colour(short _red, short _green, short _blue);

        void setRed(short _red);
        void setGreen(short _green);
        void setBlue(short _blue);
        void setOpacity(float _opacity);

        short getRed() const;
        short getGreen() const;
        short getBlue() const;
        float getOpacity() const;

        void show_colour() const;
};

#endif _COLOUR_HPP