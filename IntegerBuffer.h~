#ifndef INTEGER_BUFFER_H
#define INTEGER_BUFFER_H
#include "GoFIterator.h"
class IntegerBuffer {
private:
    int data[32];
    int dataLength = 0;
    int dataCapacity = 32;
    class MyIterator : public GoFIterator {
        IntegerBuffer* buffer;
        int cursor = 0;
    public:
        MyIterator(IntegerBuffer* buffer);
        void first() override;
        void next() override;
        bool isDone() override;
        int currentItem() override;
    };
public:
    GoFIterator* createIterator();
    bool add(int value);
    int add(int* values, int numValues);
    int sum();
};
#endif // INTEGER_BUFFER_H
