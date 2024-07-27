#include <stdio.h>
#include "Map.c"
void render(int minx,int x,int y,int window_height,struct Map newmap){
  if(x>window_height)minx+=1;
  for(int ly = 1;ly<=window_height;ly++){
    for(int lx = minx;lx<=minx+window_height-1;lx++){
      if(lx == x && ly == y){
        printf("\033[1;32m人\033[0m");
        continue;
      }
      else if(newmap.map[lx][ly].noAir){
        printf("%s",blockTypes[newmap.map[lx][ly].type]);
        continue;
      }
      else {
        printf("  ");
      }
    }
    printf("||\n");
  }
  for(int m = 1;m<=window_height;m++){
    printf("--");
  }
  printf("\n");
}