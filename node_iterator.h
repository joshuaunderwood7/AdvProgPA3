#ifndef NODE_ITERATOR
#define NODE_ITERATOR

template <typename T>
class node_iterator 
{
    public:
        node_iterator(const node_iterator<T>& input);
        ~node_iterator();
        node_iterator<T>& operator=(const node_iterator<T>& input);
        node_iterator<T>& operator++();
        node_iterator<T>& operator*() const;
        node_iterator<T>* operator->() const;
//        friend void swap(node_iterator<T>& lhs, node_iterator<T>& rhs); 
        bool operator==(const node_iterator<T>& rhs);
        bool operator!=(const node_iterator<T>& rhs); 
    protected:
        T data;
        node<T>* link;
};


#include "node_iterator.tem"

#endif
