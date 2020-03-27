#pragma once

struct PlayerStatBox
{
	PlayerStatBox(int color, const char* name, int x, int y, int w, int h);
	enum Stats{FUE, DES, CON, INT, SAB, CAR};
	const char* statNames[6] = {
	"FUE", "DES", "CON", "INT", "SAB", "CAR"
	};
	void draw();

private:
	void title();
	void fillStats(Stats statIndice, int& value, int order);
	void drawBox();

private:
	int m_x, m_y, m_w, m_h;
	int value;
	int m_color;

	char m_name[50];
};