#ifndef ROOM
#define ROOM

#include<vector>

class Room{
  
 private:
  Room north;
  Room south;
  Room east;
  Room west;
  Room up;
  Room down;
  std::vector<Player> players;
  std::vector<string> items; //Objects
  std::vector<string> NPCs; //NPCS
  

 public:
  Room();
  
  
};

#endif
