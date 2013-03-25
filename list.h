// Author: Will Trobaugh
// Course:  CSCI 3320, Spring 2013
// File: list.h
// Class definition of an adt that represents a single-ended, singly-linked list with iterator support
// for compatibility with the C++ standard template library

#ifndef _list
#define _list

#include <iostream>


// Forward declarations for overloading operator <<
template <typename T> class list;
template <typename T> std::ostream& operator << (std::ostream&, const list<T>&);

#include "node_iterator.h"

// Class definition
template <typename T>
class list
{
public:
    typedef node_iterator<T> iterator;

    // Constructors
    list();
    list(const list<T>& input);
    list(iterator from, iterator to);
    list(T*, T*);

    ~list();

    // Constant members
    unsigned int size() const { return used; }
    bool empty() const { return used==0; }
    const T& front() const;
    const iterator find(const T& input) const;

    // Modification members
    void push_front(const T& input);
    void pop_front();
    iterator find(const T& input);
    void insert(const T& value, unsigned int where);
    void insert_after(iterator instertion_point, const T& input_data);
    bool erase_one(const T& value);
    unsigned int erase(const T& value);
    void clear();

    // Operators
    list<T>& operator = (const list<T>& RHS);
    void operator += (const list<T>& RHS);

    // Friends
    friend std::ostream& operator << <T> (std::ostream& out, const list<T>& theList);
    friend class node_iterator<T>;

    // Forward iterator support
    iterator begin();
    iterator end();

private:
    // Nest our linked-list node
    struct node
    {
        node(const T& val=T(), node* n=0):data(val),link(n) { }
        T data;
        node* link;
    };
    unsigned int used;
    node* copy(node* input);
public:
    node* head;
};

#include "list.tem"
//#include "node_iterator.tem"
#endif
