//
// Created by hanan on 21/03/2020.
//

#ifndef INC_26012016_DATA_H
#define INC_26012016_DATA_H
typedef struct data *DATA;
typedef struct{
    char* medina;
    int abitanti;
    int distanza;
}Item;


DATA init(int N);
void ins(Item item, DATA data);

#endif //INC_26012016_DATA_H
