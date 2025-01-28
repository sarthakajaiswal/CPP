#include <iostream> 
#include <vector> 

#include "element.hpp" 

Element::Element(
	std::string name,
	std::string symbol,
	unsigned short atomic_number,
	float atomic_mass_number,

	std::string electronic_configuration,
	float electronegativity,

	state_t standard_state,
	element_t element_type,

	std::vector <unsigned short> atomic_numbers_of_stable_isotopes, 
	std::vector <unsigned short> atomic_numbers_of_unstable_isotopes, 
	std::vector <short> oxidation_states, 

	block_t periodic_table_block,
	unsigned short row_number,
	unsigned short column_number,

	double melting_point,
	double boiling_point,
	temperature_unit_t temperature_unit,

	double atomic_radius_value,
	length_unit_t atomic_radius_unit,

	double ionization_energy_value,
	energy_unit_t ionization_energy_unit,

	double estimated_crystal_abundance_value,
	abundance_unit_t estimated_crystal_abundance_unit,

	double estimated_oceanic_abundance_value,
	abundance_unit_t estimated_oceanic_abundance_unit,

	double density_value,
	density_unit_t density_unit, 

	double atomic_weight_value, 
	weight_unit_t atomic_weight_unit, 

	unsigned short year_of_discovery
) : 
	m_name(name), 
	m_symbol(symbol), 
	m_electronic_configuration(electronic_configuration),
	m_atomic_number(atomic_number), 
	m_atomic_mass(atomic_mass_number), 
	m_electronegativity(electronegativity), 

	m_atomic_numbers_of_stable_isotopes(atomic_numbers_of_stable_isotopes), 
	m_atomic_numbers_of_unstable_isotopes(atomic_numbers_of_unstable_isotopes),
	m_oxidation_states(oxidation_states),  
	
	m_standard_state(standard_state), 
	m_element_type(element_type), 
	
	m_location_in_periodic_table(periodic_table_block, column_number, row_number), 
	m_boiling_point(boiling_point, temperature_unit), 
	m_melting_point(melting_point, temperature_unit), 
	m_atomic_radius(atomic_radius_value, atomic_radius_unit), 
	m_ionization_energy(ionization_energy_value, ionization_energy_unit), 
	m_estimated_crystal_abundance(estimated_crystal_abundance_value, estimated_crystal_abundance_unit), 
	m_estimated_oceanic_abundance(estimated_oceanic_abundance_value, estimated_oceanic_abundance_unit), 
	m_density(density_value, density_unit), 
	m_atomic_weight(atomic_weight_value, atomic_weight_unit), 
	m_year_of_discovery(year_of_discovery) {
} 

std::ostream& operator<<(std::ostream& os, const Element& obj) {
	unsigned int i;
	unsigned int size;

	os << "-----Element Information-----: " << std::endl 
		<< "Name: " << obj.m_name << std::endl
		<< "Symbol: " << obj.m_symbol << std::endl
		<< "atomic number: " << obj.m_atomic_number << std::endl
		<< "Atomic mass number: " << obj.m_atomic_mass << std::endl
		<< "Electronic Configuration: " << obj.m_electronic_configuration << std::endl
		<< "Standard dtate: " << obj.m_standard_state << std::endl
		<< "Element type: " << obj.m_element_type << std::endl; 

	os << "Isotopes: "; 
	os << "Stable isotopes: ";
	size = obj.m_atomic_numbers_of_stable_isotopes.size(); 
	i = 0;
	while (i < size) {
		os << obj.m_symbol << "(" << obj.m_atomic_numbers_of_stable_isotopes[i] << ")";
		if (i < size - 1)
			os << ", ";

		i++;
	}
	os << std::endl; 

	os << "Unstable isotopes: ";
	size = obj.m_atomic_numbers_of_unstable_isotopes.size();
	i = 0;
	while (i < size) {
		os << obj.m_symbol << "(" << obj.m_atomic_numbers_of_unstable_isotopes[i] << ")";
		if (i < size - 1)
			os << ", ";

		i++;
	}
	os << std::endl; 

	os << "Oxidation states: " << obj.m_oxidation_states << std::endl 
		<< "Location in Periodic table: " << std::endl << obj.m_location_in_periodic_table << std::endl
		<< "Boiling Point: " << obj.m_boiling_point << std::endl
		<< "Melting Point: " << obj.m_melting_point << std::endl
		<< "Atomic radius: " << obj.m_atomic_radius << std::endl
		<< "Ionization_energy: " << obj.m_ionization_energy << std::endl
		<< "Estimated crystal abundance: " << obj.m_estimated_crystal_abundance << std::endl
		<< "Estimated oceanic_abundace: " << obj.m_estimated_oceanic_abundance << std::endl
		<< "Density: " << obj.m_density << std::endl
		<< "Atomic Weight: " << obj.m_atomic_weight << std::endl
		<< "Year of Discovery: " << obj.m_year_of_discovery << std::endl;

	return os;
}

std::ostream& operator<<(std::ostream& os, const element_t& element_type) {
	switch (element_type) {
	case 0: 
		os << "Metal"; 
		break; 
	case 1: 
		os << "Non-metal"; 
		break; 
	case 2: 
		os << "Metalloid"; 
	}

	return os; 
}

std::ostream& operator<<(std::ostream& os, const state_t& state) {
	switch (state) {
	case 0: 
		os << "Solid"; 
		break; 
	case 1: 
		os << "Liquid"; 
		break; 
	case 2: 
		os << "Gas"; 
		break; 
	case 3: 
		os << "Plasma";  
	}

	return os; 
}

std::ostream& operator<<(std::ostream& os, const std::vector<short>& vec) {
	unsigned int i; 
	unsigned int size; 

	size = vec.size(); 
	i=0; 
	while(i < size) {
		os << vec[i]; 
		if(i < size-1) 
			os << ", "; 

		i++; 
	}

	return os; 
} 