/*********************************************************************
  Author:        Samantha Kaczynski, IUSB, CS
  Class:         C243 Data Structures
  File name:     Queue.cc
  Last updated:  September 2019
  Description:   Implementation of a container class for a Queue.
**********************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

#include "general.h"
#include "List.h"
#include "Queue.h"

// Default constructor: create an empty queue.
Queue::Queue()
     : head(NULL), tail(NULL), size(0) // empty queue
{
} // Queue::Queue

// Insert an object into the queue.
void Queue::enqueue(int data)
{
} // Queue::enqueue

// Remove the front object and return its value.
int Queue::dequeue()
{
} // Queue::dequeue()

// Inspect the value of the front object.
int Queue::front()
{
} // Queue::front()

// Delete all the objects in the queue.
void Queue::makeEmpty()
{
} // Queue::makeEmpty()

// Test if the queue is empty.
bool Queue::isEmpty()
{
} // Queue::isEmpty()

// Concatenate two queues.
void Queue::concatenate(Queue &other)
{
} // Queue::concatenate(Queue &other)

// The number of objects in the queue.
int Queue::stored()
{
} // Queue::stored()

