#ifndef CONWAY_H
#define CONWAY_H

#define WIDTH 20
#define HEIGHT 10
#define GENERATIONS 10


int count_alive(int field[HEIGHT][WIDTH],int row, int col);
void evolve(int field[HEIGHT][WIDTH]);

#endif
