#include "../include/block.h"

void block(int front, int left, int right, int back){
   if(front == 1){
      wall(0,0,0,0,0,0,0);
      wall(0,0,wall_thickness,0,0,0,0);
      wall_fill(-wall_thickness,0,0,90,0,1,0);
      wall_fill(-wall_thickness,0,base,90,0,1,0);
   }
   if(left == 1){
      wall(0,0,0,90,0,1,0);
      wall(0,0,wall_thickness,90,0,1,0);
      wall_fill(0,0,-base,0,0,0,0);
      wall_fill(0,0,0,0,0,0,0);
   }
   if(right == 1){
      wall(0,0,base,90,0,1,0);
      wall(0,0,base-wall_thickness,90,0,1,0);
      wall_fill(base-wall_thickness,0,-base,0,0,0,0);
      wall_fill(base-wall_thickness,0,0,0,0,0,0);
   }
   if(back == 1){
      wall(0,0,-base,0,0,0,0);
      wall(0,0,wall_thickness-base,0,0,0,0);
      wall_fill(base-wall_thickness,0,0,90,0,1,0);
      wall_fill(base-wall_thickness,0,base,90,0,1,0);
   }
}

void big_window_block(int front, int left, int right, int back){
   if(back == 1){
      wall(0,0,-base,0,0,0,0);
      wall(0,0,wall_thickness-base,0,0,0,0);
      wall_fill(base-wall_thickness,0,0,90,0,1,0);
      wall_fill(base-wall_thickness,0,base,90,0,1,0);
   }
   if(right == 1){
      wall_with_big_window(-base,0,0,270,0,1,0);
      aux_wall_big_window(0,0,wall_thickness,90,0,1,0);
      wall_fill(0,0,-base,0,0,0,0);
      wall_fill(0,0,0,0,0,0,0);
   }
   if(front == 1){
      wall(0,0,0,0,0,0,0);
      wall(0,0,wall_thickness,0,0,0,0);
      wall_fill(-wall_thickness,0,0,90,0,1,0);
      wall_fill(-wall_thickness,0,base,90,0,1,0);
   }
   if(left == 1){
      wall_with_big_window(0,0,base,90,0,1,0);
      aux_wall_big_window(0,0,base-wall_thickness,90,0,1,0);
      wall_fill(base-wall_thickness,0,-base,0,0,0,0);
      wall_fill(base-wall_thickness,0,0,0,0,0,0);
   }
      
}

void medium_window_block(int front, int left, int right, int back){
   if(back == 1){
      wall_with_medium_window(0,0,-base,0,0,0,0);
      aux_wall_medium_window(0,0,wall_thickness-base,0,0,0,0);
      wall_fill(base-wall_thickness,0,0,90,0,1,0);
      wall_fill(base-wall_thickness,0,base,90,0,1,0);
   }
   if(right == 1){
      wall(-base,0,0,270,0,1,0);
      wall(0,0,wall_thickness,90,0,1,0);
      wall_fill(0,0,-base,0,0,0,0);
      wall_fill(0,0,0,0,0,0,0);
   }
   if(front == 1){
      wall_with_medium_window(0,0,0,0,0,0,0);
      aux_wall_medium_window(0,0,wall_thickness,0,0,0,0);
      wall_fill(-wall_thickness,0,0,90,0,1,0);
      wall_fill(-wall_thickness,0,base,90,0,1,0);
   }
   if(left == 1){
      wall(0,0,base,90,0,1,0);
      wall(0,0,base-wall_thickness,90,0,1,0);
      wall_fill(base-wall_thickness,0,-base,0,0,0,0);
      wall_fill(base-wall_thickness,0,0,0,0,0,0);
   }
}

void small_window_block(int front, int left, int right, int back){
   if(back == 1){
      wall(0,0,-base,0,0,0,0);
      wall(0,0,wall_thickness-base,0,0,0,0);
      wall_fill(base-wall_thickness,0,0,90,0,1,0);
      wall_fill(base-wall_thickness,0,base,90,0,1,0);
   }
   if(right == 1){
      wall_with_small_window(-base,0,0,270,0,1,0);     
      aux_wall_small_window(-base,0,-wall_thickness,270,0,1,0);
      wall_fill(0,0,-base,0,0,0,0);
      wall_fill(0,0,0,0,0,0,0);
   }
   if(front == 1){
      wall(0,0,0,0,0,0,0);
      wall(0,0,wall_thickness,0,0,0,0);
      wall_fill(-wall_thickness,0,0,90,0,1,0);
      wall_fill(-wall_thickness,0,base,90,0,1,0);
   }

   if(left == 1){
      wall_with_small_window(0,0,base,90,0,1,0);
      aux_wall_small_window(0,0,base-wall_thickness,90,0,1,0);
      wall_fill(base-wall_thickness,0,-base,0,0,0,0);
      wall_fill(base-wall_thickness,0,0,0,0,0,0);
   }
      
}

void front_door_block(int front, int left, int right, int back){
   if(back == 1){
      wall_with_door(0,0,-base,0,0,0,0);
      aux_wall_door(0,0,wall_thickness-base,0,0,0,0);
      wall_fill(base-wall_thickness,0,0,90,0,1,0);
      wall_fill(base-wall_thickness,0,base,90,0,1,0);
      wall_fill(base-wall_thickness,0,base/2+wall_thickness,90,0,1,0);
      wall_fill(base-wall_thickness,0,wall_thickness,90,0,1,0);
   }
   if(right == 1){
      wall(-base,0,0,270,0,1,0);
      wall(0,0,wall_thickness,90,0,1,0);
      wall_fill(0,0,-base,0,0,0,0);
      wall_fill(0,0,0,0,0,0,0);
   }
   if(front == 1){
      wall_with_door(0,0,0,0,0,0,0);
      aux_wall_door(0,0,wall_thickness,0,0,0,0);
      wall_fill(-wall_thickness,0,0,90,0,1,0);
      wall_fill(-wall_thickness,0,base,90,0,1,0);
      wall_fill(-wall_thickness,0,base/2+wall_thickness,90,0,1,0);
      wall_fill(-wall_thickness,0,wall_thickness,90,0,1,0);
   }
   if(left == 1){
      wall(0,0,base,90,0,1,0);
      wall(0,0,base-wall_thickness,90,0,1,0);
      wall_fill(base-wall_thickness,0,-base,0,0,0,0);
      wall_fill(base-wall_thickness,0,0,0,0,0,0);
   }
}

void lateral_door_block(int front, int left, int right, int back){
   if(back == 1){
      wall(0,0,-base,0,0,0,0);
      wall(0,0,wall_thickness-base,0,0,0,0);
      wall_fill(base-wall_thickness,0,0,90,0,1,0);
      wall_fill(base-wall_thickness,0,base,90,0,1,0);
   }
   if(right == 1){
      wall_with_door(-base,0,0,270,0,1,0);
      aux_wall_door(-base,0,-wall_thickness,270,0,1,0);
      wall_fill(0,0,-base,0,0,0,0);
      wall_fill(0,0,0,0,0,0,0);
      wall_fill(0,0,-base/2+wall_thickness,0,0,0,0);
      wall_fill(0,0,-base+wall_thickness,0,0,0,0);
   }
   if(front == 1){
      wall(0,0,0,0,0,0,0);
      wall(0,0,wall_thickness,0,0,0,0);
      wall_fill(-wall_thickness,0,0,90,0,1,0);
      wall_fill(-wall_thickness,0,base,90,0,1,0);
   }
   if(left == 1){
      wall_with_door(0,0,base,90,0,1,0);
      aux_wall_door(0,0,base-wall_thickness,90,0,1,0);
      wall_fill(base-wall_thickness,0,-base,0,0,0,0);
      wall_fill(base-wall_thickness,0,0,0,0,0,0);
   }
}

void right_entrance_door_block(int front, int left, int right, int back){
   if(back == 1){
      wall_with_entrance_door(0,0,-base/2,0,0,0,0);
      aux_entrance_door(0,0,+wall_thickness-base/2,0,0,0,0);
      wall_fill(base/2-wall_thickness,0,base/2,90,0,1,0);
   }
   if(right == 1){
      wall(-base,0,0,270,0,1,0);
      wall(0,0,wall_thickness,90,0,1,0);
      wall_fill(0,0,-base,0,0,0,0);
      wall_fill(0,0,0,0,0,0,0);
   }
   if(front == 1){
      wall_with_entrance_door(0,0,0,0,0,0,0);
   }
   if(left == 1){
      wall(0,0,base,90,0,1,0);
      wall(0,0,base-wall_thickness,90,0,1,0);
      wall_fill(base-wall_thickness,0,-base,0,0,0,0);
      wall_fill(base-wall_thickness,0,0,0,0,0,0);
   }
}

void left_entrance_door_block(int front, int left, int right, int back){
   if(back == 1){
      wall_with_entrance_door(-base,0,base-base/2,180,0,1,0);
      aux_entrance_door(-base,0,-wall_thickness+base/2,180,0,1,0);
      wall_fill(base/2-wall_thickness,0,base/2,90,0,1,0);
   }
   if(right == 1){
      wall(-base,0,0,270,0,1,0);
      wall(0,0,wall_thickness,90,0,1,0);
      wall_fill(0,0,-base,0,0,0,0);
      wall_fill(0,0,0,0,0,0,0);
   }
   if(front == 1){
      wall_with_entrance_door(0,0,0,0,0,0,0);
   }
   if(left == 1){
      wall(0,0,base,90,0,1,0);
      wall(0,0,base-wall_thickness,90,0,1,0);
      wall_fill(base-wall_thickness,0,-base,0,0,0,0);
      wall_fill(base-wall_thickness,0,0,0,0,0,0);
   }
}