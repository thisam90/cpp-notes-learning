/****************************************************************
 * Project   : Week1 - Learning C++
 * File      : day1.cpp
 * Author    : Alexandru Lucian,Manolache
 * Created   : 03 - 10 - 2025
 * Copyright : (c) 2025 by Alexandru Lucian,Manolache
 *
 * Description:
 *   This is the first day of learning C++. 
 *  [1] Creating a MAKEFILE - much easier to compile and run
 *  [2] Creating a header file for vscode
 *  [3] Creating a Markdown file to help track and have concepts
 *  [4] Understand what compilation means
 *  [5] Learn about object files
 *  [6] What is an executable?
 *  [7] How to run your program - MakeFile 
 *****************************************************************/


#include <iostream>

int main(){
    std::string message = "Hello Github";
    std::cout << "Output: " << message << std::endl;
    
   
    // MARK: What is compilation
    // Compilation takes the human-readable code and translate to human code
    // What is the process;
    // Source code → Compilation → Object code → Linking → Executable

    // MARK: Object files
    // Object files are the choped ingredients with notes how they fit together and
    // the linker is the chef who assembles into the final dish.
    // you can use object dump to see what is inside...

    return (0);
}