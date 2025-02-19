#include <iostream>
#include "bulb.hpp"

int main(void) {
    Bulb bulb(
        "Philips", 
        LED,
        {"automatic brightness control"},
        "A4",
        "Plastic",
        {"Alexa", "remote"}, 
        {"bluetooth", "infrared"},
        {"Bulb", "remote control", "user_manual"},
        "India",
        OUTDOOR, 
        LIVE_CURRENT,
        NO, 
        60,
        240,
        255, 255, 255, 10, 20, 30,
        200, "gms",
        10, 10, 20, "cms", 
        50, 60, "Hz", 
        "Philips India", "Navi Mumbai", "Mumbai", "Maharashtra", "India", 666000, "", 0 
           );

    std::cout << bulb;
}