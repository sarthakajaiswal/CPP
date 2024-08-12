#include <cstdio>

#include "book.hpp"

int main(void) {
    Book my_book(
        "Unix Concepts and Applications",
        {"Sumitabha Das"},
        4,
        "English",
        700,
        15,
        350,
        "McGraw Hill Education Private Limited", "Alapakkam", "Porur", "Chennai", "India", 600116, 88885454, "",
        10, 12, 1990,
        4.8, 2000,
        "0-07-0635546-3",
        "978-0-07-063546-3",
        "India",
        "cm(s)", 20.4, 15.7, 7.0,
        "kg(s)", 2.1,
        "Vidya Pustakalaya", "Dadar", "Mumbai", "Maharashtra", "India", 600213, 0, "",
        "Printed Book",
        67, "Computer Science"
    );

    std::cout << my_book;
}

