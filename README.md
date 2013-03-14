AdvProgPA3
==========

Advanced Programming Assignment 3

iForward list implementation
In this lecture, I would like the students to start developing the
implementation of the
forward list using the list.h interface. The class period should be utilized to
begin the
process. I would also like for the implementation to be completed at home
before lecture
17. If people feel that need more time, I’ll delay to lecture 18. Everyone
    should have the
implementation completed and submitted to 3320@orion.ucdenver.edu. Notice we
will
not be able to complete the implementation until we have discussed the topic of
iterators.
When the implementation is being done in class, I would like for some students
to
volunteer to put their work on the board, then have a class discussion.
To help you get started, I am providing one or more implementations. I’ll leave
the
difficult ones for you.
// From list.tem
template <typename T>
void list<T>::pop_front()
{
    if(used==0) return;
    typename list<T>::node* temp = head;
    head = head->link;
    delete temp;
    --used;
}
template <typename T>
list<T>::~list()
{
    // Deallocates all nodes in the list
    clear();
}
