#include <stdio.h>
#include "conway.h"

void dump_field(int field[HEIGHT][WIDTH]){
 for(int r = 0;r < HEIGHT; r++){
  for (int c = 0;c < WIDTH; c++){
     putchar(field[r][c] ?'#':'.');
    }
      putchar('\n');

  }
}

int main(void){

	int field[HEIGHT][WIDTH] = {0};

         field[4][8] = 1;
	 field[4][9] = 1;
	 field[4][10] = 1;


	   for (int generation = 0; generation < GENERATIONS; generation ++){
		printf("Generation %d\n", generation);
		dump_field(field);
		putchar('\n');
		evolve(field);

	      }

 		return 0;
	}
