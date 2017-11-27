//
// Created by bgarcial on 27/11/17.
//

#ifndef ZEROMQ_SERVER_SERVER_H
#define ZEROMQ_SERVER_SERVER_H

class Server{
public:
    Server();
    void receiveRequests();
    void sendReplyToClient();


};


#endif //ZEROMQ_SERVER_SERVER_H
