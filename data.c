//
// Created by hanan on 21/03/2020.
//

#include "data.h"
#include <stdio.h>
#include <stdlib.h>


struct data{Item* Item;int MAX;int C;};

DATA init(int N)
{
    DATA data;
    data = malloc(sizeof(*data));
    data->MAX = N;
    data->C = 0;
    data->Item = malloc(data->MAX * sizeof(Item));
    return data;
}


void ins(Item item, DATA data)
{
    data->Item[data->C++] = item;
}

