#ifndef COMMAND
#define COMMAND

class Command{

 private: 
  
  Client client; //What client sent this command
  int commandCode; //ARE WE USING THIS?
  string commandArg;
  
 public:

  Command(string input);
  Command(int code, string arg);
  
  

}

#endif
