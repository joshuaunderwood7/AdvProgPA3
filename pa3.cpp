#include <iostream>
#include "list.h"
#include "pa3functions.h"

int main(int argc, const char *argv[])
{
    underwood::GREETING();
    list<int> first, second;
    for(int i = 10; i > 0; --i) first.push_front(i*i);
    for(int i = 4; i > 0; i-=2) second.push_front(i);
    first += second;
    first.erase_one(49);
    first.pop_front();
    first.push_front(6);
    std::cout << "Compute sum:     " << underwood::COMPUTE_SUM(first) << std::endl;
    std::cout << "Compute average: " << underwood::COMPUTE_AVERAGE(first) << std::endl;
    underwood::DISPLAY_LIST(first);
    std::cout << first;
    return 0;
}
