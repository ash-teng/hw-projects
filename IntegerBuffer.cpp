#include <iostream>
#include "IntegerBuffer.h"

GoFIterator* IntegerBuffer::createIterator() {
    return new MyIterator(this);
}

IntegerBuffer::MyIterator::MyIterator(IntegerBuffer* buffer)  {
    this->buffer = buffer;
    cursor = 0;   
}

void IntegerBuffer::MyIterator::first() {
    cursor = 0;
}

void IntegerBuffer::MyIterator::next() {
    if (!isDone())
        ++cursor;
}

bool IntegerBuffer::MyIterator::isDone() {
    return !(cursor < buffer->dataLength);
}

int IntegerBuffer::MyIterator::currentItem() {
    if (isDone())
        return 0;
    else
        return buffer->data[cursor];
}

bool IntegerBuffer::add(int value) {
    if (dataLength < dataCapacity) {
        data[dataLength] = value;
        ++dataLength;
        return true;
    } else
        return false;
}
int IntegerBuffer::add(int values[], int numValues) {
    int count = 0;
    for (int i = 0; i < numValues; ++i)
        if (add(values[i]))
            ++count;
    return count;
}
int IntegerBuffer::sum() {
    int sumOfValues = 0;
    for (int i = 0; i < dataLength; ++i)
        sumOfValues += data[i];
    return sumOfValues;
}




    
