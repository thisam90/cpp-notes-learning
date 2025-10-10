/**********************************************
 * Project   : SECTION 14
 * File      : section_14.cpp
 * Author    : Alex Manolache
 * Created   : 10 - 10 - 2025
 * Copyright : (c) 2025 by Alex Manolache
 *
 * Description:
 * Returning references from from functions
 *
 **********************************************/


#include <iostream>

//int& get_reference(){
//	int x = 10;
//	return x;
//}

const std::string& read_only(const std::string& s){
	return s;
}

int& modify(int& x) {
	x = x * 2;
	return x;
	
}

//int& baz(){  // safe but memory leaks, you cannot delete
//	int* ptr = new int(10);
//	return *ptr;
//}

int main(int argc, const char * argv[]) {
	
//	int& ref = get_reference();
//	std::cout << ref ;
	
//	int& ref = baz();
//	std::cout << ref << std::endl;
//	
//	int *ptr = &ref;
//	std::cout << "ptr:" << ptr << std::endl;
//	std::cout << "ptr value: " << *ptr << std::endl;
	
	return EXIT_SUCCESS;
}
