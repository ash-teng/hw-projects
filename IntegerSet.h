/*
 * File:    IntegerSet.h
 * Project: Assignment 13
 * Author:  Michael Van Hilst
 * Version: 2.3 November 18, 2019
 *
 * Copyright (c) 2017,2018,2019 Michael Van Hilst all rights reserved
 * Distribution without written permission of the author is prohibited
 */
#ifndef INTEGER_SET_H
#define INTEGER_SET_H

typedef struct {
    int *data;
    int dataCapacity;
    int dataLength;
} IntegerSet;

int isetInit(IntegerSet* iset, int dataCapacity);
void isetFree(IntegerSet* iset);
int isetAdd(IntegerSet* iset, int value);
int isetAddArray(IntegerSet* iset, const int array[], int arrayLength);
void isetClear(IntegerSet* iset);
int isetIndex(const IntegerSet* iset, int value);
int isetRemoveFast(IntegerSet* iset, int index);
int isetRemoveStable(IntegerSet* iset, int index);
void isetPrint(const IntegerSet* iset, int numberOfColumns);

/* for assignment 13 extra credit */
IntegerSet* isetCreate(int dataCapacity);
IntegerSet* isetDestroy(IntegerSet *iset);

#endif /* INTEGER_SET_H */
