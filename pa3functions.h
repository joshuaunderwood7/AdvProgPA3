#ifndef PA2FUNCTIONS
#define PA2FUNCTIONS

#include <cstdlib>
#include "list.h"

namespace underwood
{
    bool GREETING(void);
    bool ENTER_TO_CONTINUE(void);

    template <typename T>
    T COMPUTE_SUM(list<T> input);

    template <typename T>
    T COMPUTE_AVERAGE(list<T> input);

    template <typename T>
    bool DISPLAY_LIST(list<T> input); 

}

template <typename T>
T underwood::COMPUTE_SUM(list<T> input)
{
    typename list<T>::iterator iter;
    T sum = T(0);
    for(iter = input.begin();iter != input.end(); iter++)
    { sum += iter.element->data; }
    return sum;
        
};

template <typename T>
T underwood::COMPUTE_AVERAGE(list<T> input)
{
    T sum = underwood::COMPUTE_SUM(input);
    return sum/input.size();
};

template <typename T>
bool underwood::DISPLAY_LIST(list<T> input)
{
    typename list<T>::iterator iter;
    std::cout << "Display list(): < ";
    for(iter = input.begin();iter != input.end(); iter++)
    {
        if(iter.element->link != NULL) std::cout << iter.element->data << ", ";
        else 
        {
            std::cout << iter.element->data << " >" << std::endl;
            return true;
        }
    }
    return false;
};


#endif
