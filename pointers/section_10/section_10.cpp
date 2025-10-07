/**********************************************
 * Project   : Section 10
 * File      : section_10.cpp
 * Author    : Alex Manolache
 * Created   : 07 10 2025
 * Copyright : (c) 2025 by Alex Manolache
 *
 * Description:
 *   Pointers to Function
 **********************************************/

#include <iostream>
#include <string>


const int MAX_PLAYERS = 10;
std::string *players[MAX_PLAYERS] = {nullptr};
int player_count = 0;
char user_option = 0;


void display_menu() {
     std::cout << "MENU OPTION:  " << std::endl;
     std::cout << "1.ADD PLAYER  " << std::endl;
     std::cout << "2.SHOW PLAYERS" << std::endl;
     std::cout << ": " << std::endl;
     std::cin  >> user_option;

}


void add_player()
{
    std::string player = {};

    std::cout << "Player: " ;
    std::cin >> player;

    if (player_count < MAX_PLAYERS){
        players[player_count] = new std::string(player);
        player_count++;
    }else{
        std::cout << "Player List is Full" << std::endl;
    }
    display_menu();
}

void show_players() {
    std::cout << "\n=== PLAYERS LIST ===" << std::endl;
    if (player_count == 0) {
        std::cout << "No players added yet." << std::endl;
    } else {
        for (int i = 0; i < player_count; i++) {
            if (players[i] != nullptr) {
                std::cout << (i + 1) << ". " << *players[i] << std::endl;
            }
        }
    }
}

// Cleanup function 
void cleanup_players(){
    for(int i = 0; i < MAX_PLAYERS; i++){
        if(players[i] != nullptr){
            delete players[i];        // Free the memory
            players[i] = nullptr;     // Set pointer to nullptr
        }
    }
}


bool ascending(int a, int b) { return a < b;}
bool descending(int a, int b) { return a > b;}

// Bubble sort that takes a comparison function pointer
void bubble_sort(int arr[], int size, bool(*compare)(int,int)){
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(compare(arr[j+1], arr[j])){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void print_array(int arr[], int size){
    for(int i = 0; i < size; i++){
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}



void process_even(int n) { std::cout << n << " is even." << std::endl; }
void process_odd(int n) { std::cout << n << " is odd. " << std::endl; }

void check_number(int num, void (*callback)(int)) {
  if (num % 2 == 0) {
    callback(num);
  } else {
    callback(num);
  }
}
void function_one() { std::cout << "Function 1" << std::endl; }
void function_two() { std::cout << "Function 2" << std::endl; }
void function_three() { std::cout << "Function 3" << std::endl; }

double add(double a, double b) { return a + b; }

double subtract(double a, double b) { return a - b; }

double multiply(double a, double b) { return a * b; }

double divide(double a, double b) {
  if (b != 0) {
    return a / b;
  }
  return 0;
}

void say_hello() {
  std::cout << "Hello from inside the function say_hello()" << std::endl;
}

int main() {


    // THIS IS BAD 
  void(*user_operation)(void)= nullptr;

  while(user_option != 'x'){
    display_menu();
     switch (user_option) {
    case '1':
    {
        user_operation = add_player;
    }break;
    case '2':
    {
        user_operation = show_players;
    }break;
    case 'x':
    {
      cleanup_players();

    }break;
    default:
    {
        std::cout << "Invalid";
        user_operation = nullptr;
    }break;
  }
  // Only call if we have a valid function pointer
        if (user_operation != nullptr) {
            user_operation();
            user_operation = nullptr;  // Reset after calling
        }
  }
 

  

// void (*callback[4])() = {display_menu,add_player,show_players,cleanup_players};
 
// for(int i = 0; i < 4; i++){
//     callback[i]();
// }



  
//   std::cout << "\n--- Function Pointer Examples ---\n" << std::endl;

//   /* A function is a variables that stores the address of a function. */
//   /* You can pass functions to another functions */

//   /**********************************************************************
//    * Why would you want this:
//    * Callbacks: Pass different functions to do different tasks
//    * Event handlers: GUI Buttons, game events
//    * Flexible algorithms: Sort with custom comparison functions
//    * Plugin system: Load functions dynamically
//    **********************************************************************/

//   /* Arrays of Function Pointers */
//   void (*functions[3])() = {function_one, function_two, function_three};

//   for (int i = 0; i < 3; i++) {
//     functions[i]();
//   }

//   int number = 42;

//   if (number % 2 == 0) {
//     check_number(number, process_even);
//   } else {
//     check_number(number, process_odd);
//   }


//   /* Sorting with Custom Comparisons */

//   int numbers[] = {64, 34, 25,12,22,11,90};
//   int size = 7;

//   std::cout << "Original: " << std::endl;
//   print_array(numbers, size);

//   // Sort ascending
//   bubble_sort(numbers, size, ascending);
//   std::cout << "Ascending: " << std::endl;
//   print_array(numbers, size);


//   // Sort descending
//   bubble_sort(numbers, size, descending);
//   std::cout << "Descending: ";
//   print_array(numbers, size);




  /* Declare a function pointer */
  /*
  void (*greet_ptr)();

  greet_ptr = &say_hello;

  greet_ptr();

  // You can use also the following syntax

  (*greet_ptr)();


  double(*operation)(double,double)= nullptr;

  double a {10.0};
  double b {5.0};
  char op;

  std::cout << "Enter operation: ( +, -, *, /): ";
  std::cin >> op;

  switch (op){
      case '+':
          {
              operation = add;
          }break;
      case '-':
          {
              operation = subtract;
          } break;
      case '*':
          {
              operation = multiply;
          } break;
      case '/':
          {
              operation = divide;
          }break;
      default:
          {
              std::cout << "Invalid operator !"<< std::endl;
          }
          return 1;
  }

  double result = operation(a,b);
  std::cout << a << " " << op << " " << b << " " << " = " << result <<
  std::endl;
  */

  return 0;
}