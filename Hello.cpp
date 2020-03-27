#include <cstdio>
#include "Header.h"
#include "rlutil.h"

using namespace rlutil;

int main(int argc, char** argv)
{
	printf("New Stats: N - Quit: Q");

	PlayerStatBox stats(1, "Trazos", 2, 1, 10, 6);
	
	saveDefaultColor();
	while (char c = getkey())
	{
		if (c == 'n')
		{
			cls();

			stats.draw();

			setColor(GREEN);
			printf("");
			resetColor();
		}
		else
		{
			break;
		}
	}
}
