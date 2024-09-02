#include <iostream>
#include <cstring> 

#include "song.hpp"

int main(void) {
    Song song1(
        "Bhakt Pundalika Sathi", 
        "Bhajan", 
        "Marathi", 
        5, 44, 
        "Kamlesh Jadhav", 
        "Jitendra Waikar", 
        {"Uttara Kelkar"}, 
        "Sopan Kokate", 
        "Soundtrack Records and Cassettes Mfg. Co.", 
        12, MAY, 2015, 
        ALBUM, "Bhajani Rangala Pandurang"
   ); 

   std::cout << song1; 

   return 0; 
}