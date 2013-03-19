ifndef NODE_ITERATOR
define NODE_ITERATOR

class iterator
        iterator(const iterator&);
        ~iterator();
        iterator& operator=(const iterator&);
        iterator& operator++();
        reference operator*() const;
        friend void swap(const iterator& lhs, const iterator& rhs); 
};


template <typename T>
class node_iterator : iterator
{
        iterator operator++(int);
        value_type operator*() const;
        pointer operator->() const;
        friend bool operator==(const iterator&, const iterator&);
        friend bool operator!=(const iterator&, const iterator&); 
};


#include node_iterator.tem

endif
