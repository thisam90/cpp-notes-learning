/**********************************************
 * Project   : Section 15
 * File      : section_15.cpp
 * Author    : Alex Manolache
 * Created   : 10 10 2025
 * Copyright : (c) 2025 by Alex Manolache
 *
 * Description:
 *   Reference Variables in Range-Based For Loops
 **********************************************/

#include <iostream>
#include <vector>
#include <string>


int main(){
	std::vector<std::string> stooges {"Larry","Moe","Curly"};

	/*	for(auto& v: stooges){
		// v is a reference variable bound directly to each element in the vector.
		// So when you assign "Funny", you modify the original elements
		v = "Funny";
		std::cout << v << std::endl;
	}
	*/

	//MARK: If you don't want to modify

	for(const auto &c: stooges){
		std::cout << c << std::endl;
	}

	std::vector<int> nums {1,2,3,4,5};

	for(auto num: nums){
		num *= 2;
		std::cout << num << std::endl;
	}
	// ================ check if modified ==========
	std::cout << "Check if modified " << std::endl;

	for(auto num: nums){
		std::cout << num << std::endl;
	}


	std::vector<std::string> names {"Alice","Bob","Charlie"};
	for(auto& name: names){
		name += "!";
		std::cout << name << std::endl;
	}
	std::cout << "Check if vector was modified " << std::endl;

	for(const auto& name: names){
		std::cout << name << std::endl;
	}
	return 0;
}