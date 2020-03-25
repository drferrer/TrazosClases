#pragma once

#include <cstdint> 
#define MAX_SIZE 255

struct Character {

	char m_name[MAX_SIZE];
	char m_sprite;
       
	unsigned int fue, des, cons, inte, sab, car; 

	uint8_t m_age;     
	uint8_t m_fue, m_des, m_cons, m_inte, m_sab, m_car; 

	Character(const char* name, uint8_t age, char sprite); 
	
	int fillStats(); 
};