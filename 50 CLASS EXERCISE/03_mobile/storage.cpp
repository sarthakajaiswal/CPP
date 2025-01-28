#include <iostream>
#include "storage.hpp"

Storage::Storage(unsigned short amt, sunit_t unit) : 
	m_amt(amt), m_unit(unit) {
		
	}
		
std::ostream& operator<<(std::ostream& os, const Storage& storage_obj) {
	os << storage_obj.m_amt << " " << storage_obj.m_unit;
	return os; 
}

std::ostream& operator<<(std::ostream& os, const sunit_t& unit) {
	switch(unit) {
		case 1 : 
			os << "B"; 
			break; 
		case 2: 
			os << "KB"; 
			break; 
		case 3: 
			os << "MB"; 
			break; 
		case 4: 
			os << "GB"; 
			break; 
		case 5: 
			os << "TB"; 
			break; 
	}
	
	return os; 
}