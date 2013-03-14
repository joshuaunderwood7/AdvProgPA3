// Author: Will Trobaugh
// Course:  CSCI 3320, Spring 2013
// File: list.h
// Class definition of an adt that represents a single-ended, singly-linked list with iterator support
// for compatibility with the C++ standard template library

#ifndef _list
#define _list

#include <iostream>

// To be developed once the lecture is completed
#include "node_iterator.h"

// Forward declarations for overloading operator <<
template <typename T> class list;
template <typename T> std::ostream& operator << (std::ostream&, const list<T>&);

// Class definition
template <typename T>
class list
{
public:
    typedef node_iterator<T> iterator;

    // Constructors
    list();
    list(const list<T>&);
    list(iterator, iterator);
    list(T*, T*);

    ~list();

    // Constant members
    unsigned size() const { return used; }
    bool empty() const { return used==0; }
    const T& front() const;
    const iterator find(const T&) const;

    // Modification members
    void push_front(const T&);
    void pop_front();
    iterator find(const T&);
    void insert(const T&, unsigned);
    void insert_after(iterator, const T&);
    bool erase_one(const T&);
    unsigned erase(const T&);
    void clear();

    // Operators
    list<T>& operator = (const list<T>&);
    void operator += (const list<T>&);

    // Friends
    friend std::ostream& operator << <T> (std::ostream&, const list<T>&);
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
    node* head;
    unsigned used;
    node* copy(node*);
};

#include "list.tem"
#endif
