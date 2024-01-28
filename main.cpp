#include <iostream>
#include <vector>
#include "Tri.h"

void testMinimum(){
    std::vector<int> c{1,5,3,2,4};
    triMinimum(c);
    std::cout << "Tri par recherche du minimum : " << std::endl << " / ";
    for(const auto &obj : c)
        std::cout << obj << " / ";
    std::cout << std::endl;
}

void testMaximum(){
    std::vector<int> c{1,5,3,2,4};
    triMaximum(c);
    std::cout << "Tri par recherche du maximum : " << std::endl << " / ";
    for(const auto &obj : c)
        std::cout << obj << " / ";
    std::cout << std::endl;
}

void testFusion(){
    std::vector<int> c{1,5,3,2,4};
    triFusion(c, 0, c.size()-1);
    std::cout << "Tri par fusion : " << std::endl << " / ";
    for(const auto &obj : c)
        std::cout << obj << " / ";
    std::cout << std::endl;
}

int main() {
    testMinimum();
    testMaximum();
    testFusion();
    return 0;
}
