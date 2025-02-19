#include <iostream> 
#include <cstring> 

#include "bank_account.hpp" 

int main(void) {
    BankAccount account1(
        "Shantaram Ghanghane", 
        "Rampur", 
        "Yavatmal", 
        444444, 
        "Maharashtra",

        {1, JAN, 1990}, 
        M, 

        21010053032, 
        5.32, 

        SAVINGS, 
        ACTIVE, 

        "Rampur", 
        "Yavatmal", 
        444444, 
        "Maharashtra", 
        "BARBOKARANJ", 
		8954762103, 
		"bobkaranjalad@email.com", 

        4666233232, 
        100.0, 

        {15, FEB, 2024},  

        DEPOSIT, 
        50.0, 
        {16, FEB, 2024}, 
		"by CASH"
    ); 

    std::cout << account1; 
	
	return 0; 
}