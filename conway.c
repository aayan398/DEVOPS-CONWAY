#include "conway.h"

int count_alive(int field[HEIGHT][WIDTH],int row, int col)
{
 int count = 0;

 for(int dr =-1;dr <= 1; dr ++){
	for (int dc =-1;dc <= 1; dc++){
	  if(dr == 0 && dc == 0){
		continue;
		}

		int r = row + dr;
		int c = col + dc;

		if(r >= 0 && r < HEIGHT && c >= 0 && c < WIDTH) {
							count += field[r][c];

								}
							}
						}
							return count;
					      }
					       void evolve(int field[HEIGHT][WIDTH])
			{
int next[HEIGHT][WIDTH] = {0};

	for(int r = 0; r< HEIGHT; r++){
	  for(int c = 0; c< WIDTH; c++){
             int neighbours = count_alive(field,r,c);

		next[r][c] = (neighbours == 3 ||
		  (field[r][c] && neighbours == 2));
}
}
		for(int r = 0;r < HEIGHT; r++){
		  for(int c = 0; c< WIDTH; c++){
		field[r][c] = next[r][c];
}
}
}
