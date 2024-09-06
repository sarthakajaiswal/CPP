#include <iostream> 
#include "periodic_table_location.hpp" 

PeriodicTableLocation::PeriodicTableLocation(
	block_t block, 
	unsigned short row_number, 
	unsigned short column_number 
) : 
	m_block(block), m_row_number(row_number), m_column_number(column_number) {
}

std::ostream& operator<<(std::ostream& os, const PeriodicTableLocation& obj) {
	os << "Block: " << obj.m_block << std::endl 
		<< "Column: " << obj.m_column_number << std::endl 
		<< "Row: " << obj.m_row_number; 

	return os; 
}

std::ostream& operator<<(std::ostream& os, const block_t& block) {
	switch (block) {
	case 0:
		os << "s block";
		break;

	case 1:
		os << "p block";
		break;

	case 2:
		os << "d block";
		break;

	case 3:
		os << "f block";
	}

	return os;
}