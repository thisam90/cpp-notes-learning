/**********************************************
 * Project   : Section 12
 * File      : section_12.cpp
 * Author    : Alex Manolache
 * Created   : 08 10 2025
 * Copyright : (c) 2025 by Alex Manolache
 *
 * Description:
 * Section 12: Passing References to Functions
 **********************************************/


#include <iostream>

struct Player{
	int x, y;
	int health;
	std::string name;
};

// void movePlayer(Player& p, int deltaX, int deltaY){
// 	p.x = deltaX;
// 	p.y = deltaY;
// 	std::cout << "Player moved by " << deltaX << std::endl;
// 	std::cout << "Current player X: " << p.x << std::endl;
// 	std::cout << "Player moved by " << deltaY << std::endl;
// 	std::cout << " Current player Y: " << p.y << std::endl;

// }

void movePlayer(Player* p, int deltaX, int deltaY){
	p->x = deltaX;
	p->y = deltaY;
	std::cout << "Player moved by " << deltaX << std::endl;
	std::cout << "Current player X: " << p->x << std::endl;
	std::cout << "Player moved by " << deltaY << std::endl;
	std::cout << " Current player Y: " << p->y << std::endl;	
}

struct BigData {
	int data[10000];
};

// No copy and can't modify 
void print(const BigData& obj){
	// obj.data[0] = 999; // <- can't modify
	std::cout << obj.data[0] << std::endl;
}

void process(int &x, int &y){
	x = x * 2; // 4 * 2 = 8
	y = x + y; // 8 + 6 = 14
}

int main(int argc, const char * argv[]) {

	/*============================================
	 *
	 *	A reference is an alias (another name) for an existing variable.
	 *	Something similar to nicknames.
	 *
	 *		Feature					Pointer						Reference
	 *	What it stores			Memory address			Nothing separate - IS the variable (alias)
	 *	Must be initialized		No (can be nullptr)		YES - must be initialized
	 *	Can be reassigned?		Yes (ptr = &other)		NO - bound forever
	 *	Access value			Need *ptr				Just use the name 
	 *============================================*/
	
	// int original = 42;
	// int &nickname = original;
	// std::cout << "Original: " << original << std::endl;
	// std::cout << "Nickname: " << nickname << std::endl;
	
	// nickname = 100;
	// std::cout << "Nickname: " << nickname << std::endl;
	// std::cout << "Original: " << original << std::endl;
	
	
	// =================================================
//	
//	int x = 5;
//	int y = 10;
//	int& ref = x;
//	ref = y;
//	std::cout << "Ref: " << y << std::endl;
//	std::cout << "x: " << x << std::endl;
	
	// int x = 5, y = 10;        // Step 1
	// int& ref = x;             // Step 2
	// ref = y;                  // Step 3
	// ref = 999;                // Step 4
	
	// std::cout << x << " " << y << " " << ref;

	BigData obj;
	print(obj);

	obj.data[0] = 45;
	print(obj);
	
	int a = 4;
	int b = 6;

	process(a, b);
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;

	// Player hero;
	// movePlayer(hero, 20, 20);

	Player hero;
	movePlayer(&hero, 20, 50);

	int value = 34;
	const int * vptr = &value;
	value = 34;
	


	
	return EXIT_SUCCESS;
}
