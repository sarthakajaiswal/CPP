#ifndef _PERIODIC_TABLE_LOCATION 
#define _PERIODIC_TABLE_LOCATION 

typedef enum periodic_table_block{
	S = 0, P, D, F
}block_t; 

class PeriodicTableLocation {
private: 
	block_t m_block; 
	unsigned int m_column_number;
	unsigned int m_row_number;

public:
	PeriodicTableLocation(
		block_t block,
		unsigned short column_number,
		unsigned short row_number
	); 

	friend std::ostream& operator<<(std::ostream& os, const PeriodicTableLocation& obj); 
}; 

std::ostream& operator<<(std::ostream& os, const block_t& block); 

#endif 