#include "Header.h" 
#include <cstring>
#include <cstdlib>

Character::Character(const char* name, uint8_t age, char sprite)
	: m_age(age), m_sprite(sprite)
{
	strcpy(&m_name[0], name);

	fillStats(); 
}

int Character::fillStats() 
{
	int value;

	value = rand() % 14;

	return value;
}