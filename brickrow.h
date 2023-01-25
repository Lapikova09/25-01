#pragma once
#include <SFML/Graphics.hpp>
#include "Header.h"
#include "brick.h"
struct Brickrow {
	int size;
	Brick brickArr[10];
};

void brickRowInit(Brickrow& brickrow, int size, sf::Vector2f rowStartPos,
	float offsetX)
{
	brickrow.size = size;
	for (int i = 0; i < brickrow.size; i++) {
		sf::Color color{
			(sf::Uint8)(rand() % 256),
			(sf::Uint8)(rand() % 256),
			(sf::Uint8)(rand() % 256)
		};
		sf::Vector2f position{ rowStartPos.x + i * BRICK_WIDTH, rowStartPos.y };
		brickInit(brickrow.brickArr[i], color, position);
	}
}

void brickRowUpdate(Brickrow& brickrow) {
	for (int i = 0; i < brickrow.size; i++) {
		brickUpdate(brickrow.brickArr[i]);
	}
}

void brickRowDraw(sf::RenderWindow& window, const Brickrow& brickrow) {
	for (int i = 0; i < brickrow.size; i++) {
		brickDraw(window, brickrow.brickArr[i]);
	}
}
/*struct Brickrow2 {
	int size2;
	Brick brickArr2[8];
};

void brickRow2Init(Brickrow2& brickrow2, int size2, sf::Vector2f rowStartPos2,
	float offsetX)
{
	brickrow2.size2 = size2;
	for (int i = 0; i < brickrow2.size2; i++) {
		sf::Color color{
			(sf::Uint8)(rand() % 256),
			(sf::Uint8)(rand() % 256),
			(sf::Uint8)(rand() % 256)
		};
		sf::Vector2f position{ rowStartPos2.x + i * BRICK_WIDTH, rowStartPos2.y };
		brickInit(brickrow2.brickArr2[i], color, position);
	}
}

void brickRow2Update(Brickrow2& brickrow2) {
	for (int i = 0; i < brickrow2.size2; i++) {
		brickUpdate(brickrow2.brickArr2[i]);
	}
}

void brickRow2Draw(sf::RenderWindow& window, const Brickrow2& brickrow2) {
	for (int i = 0; i < brickrow2.size2; i++) {
		brickDraw(window, brickrow2.brickArr2[i]);
	}
}
struct Brickrow3 {
	int size3;
	Brick brickArr3[6];
};
void brickRow3Init(Brickrow3& brickrow3, int size3, sf::Vector2f rowStartPos3,
	float offsetX)
{
	brickrow3.size3 = size3;
	for (int i = 0; i < brickrow3.size3; i++) {
		sf::Color color{
			(sf::Uint8)(rand() % 256),
			(sf::Uint8)(rand() % 256),
			(sf::Uint8)(rand() % 256)
		};
		sf::Vector2f position{ rowStartPos3.x + i * BRICK_WIDTH, rowStartPos3.y };
		brickInit(brickrow3.brickArr3[i], color, position);
	}
}

void brickRow3Update(Brickrow3& brickrow3) {
	for (int i = 0; i < brickrow3.size3; i++) {
		brickUpdate(brickrow3.brickArr3[i]);
	}
}

void brickRow3Draw(sf::RenderWindow& window, const Brickrow3& brickrow3) {
	for (int i = 0; i < brickrow3.size3; i++) {
		brickDraw(window, brickrow3.brickArr3[i]);
	}
}
struct Brickrow4 {
	int size4;
	Brick brickArr4[4];
};
void brickRow4Init(Brickrow4& brickrow4, int size4, sf::Vector2f rowStartPos4,
	float offsetX)
{
	brickrow4.size4 = size4;
	for (int i = 0; i < brickrow4.size4; i++) {
		sf::Color color{
			(sf::Uint8)(rand() % 256),
			(sf::Uint8)(rand() % 256),
			(sf::Uint8)(rand() % 256)
		};
		sf::Vector2f position{ rowStartPos4.x + i * BRICK_WIDTH, rowStartPos4.y };
		brickInit(brickrow4.brickArr4[i], color, position);
	}
}

void brickRow4Update(Brickrow4& brickrow4) {
	for (int i = 0; i < brickrow4.size4; i++) {
		brickUpdate(brickrow4.brickArr4[i]);
	}
}

void brickRow4Draw(sf::RenderWindow& window, const Brickrow4& brickrow4) {
	for (int i = 0; i < brickrow4.size4; i++) {
		brickDraw(window, brickrow4.brickArr4[i]);
	}
}
struct Brickrow5 {
	int size5;
	Brick brickArr5[2];
};
void brickRow5Init(Brickrow5& brickrow5, int size5, sf::Vector2f rowStartPos5,
	float offsetX)
{
	brickrow5.size5 = size5;
	for (int i = 0; i < brickrow5.size5; i++) {
		sf::Color color{
			(sf::Uint8)(rand() % 256),
			(sf::Uint8)(rand() % 256),
			(sf::Uint8)(rand() % 256)
		};
		sf::Vector2f position{ rowStartPos5.x + i * BRICK_WIDTH, rowStartPos5.y };
		brickInit(brickrow5.brickArr5[i], color, position);
	}
}

void brickRow5Update(Brickrow5& brickrow5) {
	for (int i = 0; i < brickrow5.size5; i++) {
		brickUpdate(brickrow5.brickArr5[i]);
	}
}

void brickRow5Draw(sf::RenderWindow& window, const Brickrow5& brickrow5) {
	for (int i = 0; i < brickrow5.size5; i++) {
		brickDraw(window, brickrow5.brickArr5[i]);
	}
}*/