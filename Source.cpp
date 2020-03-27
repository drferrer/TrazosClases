#include "Header.h" 
#include <cstdio>
#include <cstdlib>
#include "rlutil.h"

using namespace rlutil;

#define HO printf("\xCD")
#define VE printf("\xBA")
#define IZAR printf("\xC9")
#define DEAR printf("\xBB")
#define IZAB printf("\xC8")
#define DEAB printf("\xBC")
#define NEWLINE printf("\n")

PlayerStatBox::PlayerStatBox(int color, const char* name, int x, int y, int w, int h) 
	:m_x{x}, m_y{y}, m_w{w}, m_h{h}, m_color{color}
{
}

void PlayerStatBox::draw() 
{
	drawBox();
	title();
	for (int i = 0; i < 6; i++)
		fillStats((Stats)i, value, i);
}

void PlayerStatBox::title()
{
	locate(m_x + 1, m_y + 1);
	saveDefaultColor();

	setColor(RED);
	printf("D&D Stats:");

	resetColor();
}

void PlayerStatBox::fillStats(Stats statIndice, int &value, int order)
{
	locate(m_x + 2, m_y + order + 3);
	saveDefaultColor();
	value = rand() % 14;

	setColor(YELLOW);
	printf("%s: ", statNames[statIndice]);
	setColor(BLUE);
	printf("%d", value);

	resetColor();
}

void PlayerStatBox::drawBox()
{
	int x = m_x, y = m_y;

	saveDefaultColor();
	setColor(m_color);
	locate(x, y);

	IZAR;
	for (int i = 0; i < m_w ; i++) HO;
	DEAR;
	locate(x, ++y);
	for (int i = 0; i < m_h + 2; i++)
	{
		VE;
		for (int j = 0; j < m_w ; j++)
			printf(" ");
		VE;
		locate(x, ++y);
	}
	IZAB;
	for (int i = 0; i < m_w; i++) HO;
	DEAB;

	resetColor();
}
