#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "data.h"

#define nome "C:\\Users\\hanan\\OneDrive\\Desktop\\input-output\\city.txt"

int main() {
    DATA data;
    char city[21];
    int distanza;
    int abitanti;
    FILE *fp;
    Item item;
    int N;
    int i;


    fp = fopen(nome,"r");
    fscanf(fp,"%d\n",&N);
    data = init(N);
    for(i=0;i<N;i++)
    {
        fscanf(fp,"%s %d %d\n",city,&abitanti,&distanza);
        item.medina = strdup(city);
        item.abitanti = abitanti;
        item.distanza = distanza;
        ins(item,data);
    }
    return 0;
}