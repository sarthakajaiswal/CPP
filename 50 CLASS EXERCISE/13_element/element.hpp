#ifndef _ELEMENT_HPP 
#define _ELEMENT_HPP 

#include <iostream> 
#include <cstring> 

#include "units.hpp" 
#include "periodic_table_location.hpp" 
#include "temperature.hpp" 
#include "length.hpp" 
#include "energy.hpp" 
#include "abundance.hpp" 
#include "density.hpp" 
#include "weight.hpp" 
#include "date.hpp" 

typedef enum element_type {
	METAL=0, 
	NON_METAL, 
	METALLOID
}element_t; 

typedef enum physical_state {
	SOLID=0, 
	LIQUID, 
	GAS, 
	PLASMA
}state_t; 

class Element {
private: 
	std::string m_name; 
	std::string m_symbol; 
	std::string m_electronic_configuration; 

	unsigned short m_atomic_number; 
	float m_atomic_mass; 
	float m_electronegativity; 

	std::vector<unsigned short> m_atomic_numbers_of_stable_isotopes; 
	std::vector<unsigned short> m_atomic_numbers_of_unstable_isotopes; 
	std::vector<short> m_oxidation_states; 

	state_t m_standard_state; 
	element_t m_element_type; 

	PeriodicTableLocation m_location_in_periodic_table; 
	Temperature m_boiling_point; 
	Temperature m_melting_point; 
	Length m_atomic_radius; 
	Energy m_ionization_energy; 
	Abundance m_estimated_crystal_abundance; 
	Abundance m_estimated_oceanic_abundance; 
	Density m_density; 
	Weight m_atomic_weight; 
	Date m_year_of_discovery; 

public: 
	Element(
		std::string name,
		std::string symbol,
		unsigned short atomic_number,
		float atomic_mass_number,

		std::string electronic_configuration,
		float electronegativity,

		state_t standard_state,
		element_t element_type,

		std::vector<unsigned short> atomic_numbers_of_stable_isotopes,
		std::vector<unsigned short> atomic_numbers_of_unstable_isotopes, 
		std::vector<short> oxidation_states, 

		block_t periodic_table_block,
		unsigned short row, 
		unsigned short column, 

		double melting_point, 
		double boiling_point, 
		temperature_unit_t temperature_unit, 

		double atomic_radius, 
		length_unit_t atomic_radius_unit, 

		double ionization_energy, 
		energy_unit_t ionization_energy_unit, 

		double crystal_abundance, 
		abundance_unit_t crystal_abundance_unit,

		double oceanic_abundance, 
		abundance_unit_t oceanic_abundance_unit, 

		double density_value, 
		density_unit_t density_unit, 

		double atomic_weight_value, 
		weight_unit_t atomic_weight_unit, 

		unsigned short year_of_discovery
	); 

	friend std::ostream& operator<<(std::ostream& os, const Element& obj); 
}; 

std::ostream& operator<<(std::ostream& os, const std::vector<short>& vec); 
std::ostream& operator<<(std::ostream& os, const element_t& element_type);
std::ostream& operator<<(std::ostream& os, const state_t& state); 

#endif 
