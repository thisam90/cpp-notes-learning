
/**********************************************
 * Project   : Section 3 - Storing Addresses in Pointers
 * File      : section_3.cpp
 * Author    : Alex Manolache
 * Created   : 06 10 2025
 * Copyright : (c) 2025 by Alex Manolache
 *
 * Description:
 *   Storing Address
 **********************************************/

#include <iostream>


int main(){

    /* The Address-of Operator & */
    int num = 43;
    int *iptr = &num;
    std::cout <<"Value address:   " << &num << std::endl;
    std::cout <<"Pointer address: " << iptr << std::endl;
        
    int player_health = 100;
    int *hptr = &player_health;
    std::cout << "Players health: " << player_health << std::endl;
    std::cout << "Damage 10 points ... " << std::endl;
    *hptr -= 10;
    std::cout << "Players health: " << player_health << std::endl;
    
    
    
    int score = 90;
    int *sptr = nullptr;
    sptr = &score;
    std::cout << "Score: " << score << std::endl;
    std::cout << "Score 10+ ptrs \n";
    *sptr += 10;
    std::cout << "Score: " << score << std::endl;
    
    return 0;
}
