/**********************************************
 * Project   : Section 9
 * File      : section_9.cpp
 * Author    : Alex Manolache
 * Created   : 7 - 10 - 2025
 * Copyright : (c) 2025 by Alex Manolache
 *
 * Description:
 *
 **********************************************/

#include <iostream>
#include <cstdlib>

class Player {
private:
	int *const health_ptr;
public:
	Player(int *hp) : health_ptr(hp){}
	
	void take_damage(int amount){
		*health_ptr -= amount;
	}
	
	void set_health(int hp){
		*health_ptr = hp;
	}
	
	void show_hp() const {
		std::cout << "hp: " << *health_ptr << std::endl;
	}
};



/* Function needs to read data but shouldn't modify it. */
void display_score(const int* score_ptr){
    std::cout << "Score: " << *score_ptr << std::endl;
    // *score_ptr = 34; // READ-ONLY VARIABLE : X compiler doesn't allow this MISTAKE
}

/* Processing arrays without modifying them (sum, find max, search, etc.) */
int sum_array(const int *arr, int size){
    int total = 0;
    for(int i = 0 ; i < size ; i++){
        total += arr[i];
    }
    return total;
}

int main(int argc, const char * argv[]) {
    
    /* 1. Pointer to Constant (Read-Only Data) */
    /* const int *iptr; - data pointed to a constant (read-only) , the pointer it-self can change where it points */
    std::cout << "============== 1. Pointer to Constant (Read-Only Data) ============\n";

    int high_score {100};
    int low_score {65};
    
    const int *iptr = &high_score;
    std::cout << "high_score: " << high_score << std::endl;
    std::cout << "high_score address: " << &high_score << std::endl;
    
    std::cout << "iptr: " << iptr << std::endl;
    std::cout << "iptr value: " << *iptr << std::endl;
    
    // *iptr = 80; // read-only variable is not assignable
    iptr = &low_score;
        
    iptr = &low_score;
    std::cout << "low_score: " << low_score << std::endl;
    std::cout << "low_score address: " <<&low_score << std::endl;
    std::cout << "iptr: " << iptr << std::endl;
    std::cout << "iptr value: " << *iptr << std::endl;
    
    
    std::cout << "============== 2. Constant Pointer ============\n";
    /* 2. Constant Pointer (Fixed Address) */
    /* The pointer is constant (always points to the same address) , data can change*/
    
    int *const score_ptr = &high_score;
    
    *score_ptr = 90;
    std::cout << "high_score: " << high_score << std::endl;
    std::cout << "score_ptr: " << *score_ptr << std::endl;
    
    // score_ptr = &low_score; // cannot assign to variable with const-qualified : CANNOT change pointer location
    
    std::cout << "=============== 3.Constant Pointer to Constant (Everything Locked) ============\n";
    
    /* The data is constant (read-only) */
    /* The pointer is constant (fixed address) */
    /* Nothing can change! */
    /* Meaning , once declared doesn't change , cannot change address or reasign pointing to another location */
    
    int foo = 34;
    // int foo2 = 56;
    const int *const cptr = &foo;
    std::cout << "Constant pointer to a int constant : " << *cptr << std::endl;
    // *cptr = 50 ; // READ-ONLY VARIABLE NOT ASSIGNABLE
    // cptr = &foo2; // READ-ONLY cannot change address
    
    /* Reading Data (Don't Want to Change It) */
    
    std::cout << "============== Reading Data (Don't Want to Change It) ============\n";
    
    int score = 80;
    display_score(&score);
    
    std::cout << "============== Array Processing (Read-Only) ============\n";
    
    const int size_scores = 5;
    int scores[size_scores] = {34,54,65,76,23};
	int sum_arr = sum_array(scores, size_scores);
    std::cout << "Sum: " << sum_arr << std::endl;
    
	std::cout << " ======== " << std::endl;
	/* Fixed Pointer in a Class */
	/* Pointer that should always point to the same thing (less common). */
    int health {100};
	Player p(&health);
    p.show_hp();
	p.take_damage(20);
	p.show_hp();
	
    return EXIT_SUCCESS;
}
