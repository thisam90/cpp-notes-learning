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
	
	int original = 42;
	int &nickname = original;
	std::cout << "Original: " << original << std::endl;
	std::cout << "Nickname: " << nickname << std::endl;
	
	nickname = 100;
	std::cout << "Nickname: " << nickname << std::endl;
	std::cout << "Original: " << original << std::endl;
	
	
	// =================================================
//	
//	int x = 5;
//	int y = 10;
//	int& ref = x;
//	ref = y;
//	std::cout << "Ref: " << y << std::endl;
//	std::cout << "x: " << x << std::endl;
	
	int x = 5, y = 10;        // Step 1
	int& ref = x;             // Step 2
	ref = y;                  // Step 3
	ref = 999;                // Step 4
	
	std::cout << x << " " << y << " " << ref;
	
	return EXIT_SUCCESS;
}
