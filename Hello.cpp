#include <cstdio>
#include "Header.h"
#include "rlutil.h"

using namespace rlutil;

int main(int argc, char** argv)
{
	PlayerStatBox stats(1, "Trazos", 2, 1, 10, 6);
	
	saveDefaultColor();
	while (true)
	{
		if (true)
		{
			cls();

			stats.draw();

			setColor(GREEN);
			printf("");
			resetColor();

			char c = getkey();
			return true;
		}
	}
	
}


