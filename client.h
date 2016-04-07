//Client
#ifndef CLIENT
#define CLIENT

class Client{

 private:

  Account account;

 public:
  
  bool loadCharacter();
  
  void processResponse(Response response);

}

#endif
