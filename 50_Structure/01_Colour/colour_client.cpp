#include <cstdio>
#include "colour.hpp"

int main()
{
    Colour colour1;
    int blue;

    colour1.setRed(45);
    colour1.show_colour();
    colour1.setGreen(0);
    blue = colour1.getBlue();
    printf("blue part = %.2x\n", blue);
    colour1.show_colour();

    return 0;
}