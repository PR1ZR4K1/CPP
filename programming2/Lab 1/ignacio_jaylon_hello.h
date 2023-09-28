#ifndef HELLO_H
#define HELLO_H
#include <iostream>

void hello_world();
void hello();
void world();

void hello_world()
{
    hello();
    world();
    return;
}

void hello()
{
    std::cout << "\nHello,";
}

void world()
{
    std::cout << " World\n";
}

#endif