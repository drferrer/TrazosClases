#include <cstdio>
#include "Header.h"
#include "rlutil.h"

using namespace rlutil;

int main(int argc, char** argv) {
	
	int fue, des, cons, inte, sab, car;
	char name;

	Character c("Alvaro", 25, '@');

	fue = c.fillStats();
	des = c.fillStats();
	cons = c.fillStats();
	inte = c.fillStats();
	sab = c.fillStats();
	car = c.fillStats();

	setColor(RED);
	printf("D&D Character stats:\n");
	
	setColor(YELLOW);
	locate(7, 3);
	printf("FUE:\n");
	setColor(BLUE);
	locate(12, 3);
	printf("%d", fue);
	setColor(YELLOW);
	locate(7, 4);
	printf("DES:\n");
	setColor(BLUE);
	locate(12, 4);
	printf("%d", des);
	setColor(YELLOW);
	locate(7, 5);
	printf("CONS:\n");
	setColor(BLUE);
	locate(13, 5);
	printf("%d", cons);
	setColor(YELLOW);
	locate(7, 6);
	printf("INT:\n");
	setColor(BLUE);
	locate(12, 6);
	printf("%d", inte);
	setColor(YELLOW);
	locate(7, 7);
	printf("SAB:\n");
	setColor(BLUE);
	locate(12, 7);
	printf("%d", sab);
	setColor(YELLOW);
	locate(7, 8);
	printf("CAR:\n");
	setColor(BLUE);
	locate(12, 8);
	printf("%d", car);
	setColor(YELLOW);

	setColor(WHITE);  

	return 0;
}