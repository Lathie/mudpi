//Server
#ifndef SERVER
#define SERVER

#include<vector>
#include<queue>
using namespace std;

class Server{

 private:

  std::vector<Map> world;
  std::vector<Player> playerList;
  // queue<Command> commandQueue;
  
 public:
  
  Server();
  
  bool validateLogin(Client& client);
  bool buildWorld();
  
  Response processInput(Command command);
  




};

#endif
