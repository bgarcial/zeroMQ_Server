//
// Created by bgarcial on 27/11/17.
//

#include "server.h"
#include <iostream>
#include <zmq.hpp>

#include <unistd.h> // for sleep


using std::cout;
using std::endl;

zmq::context_t context (1);
zmq::socket_t socket (context, ZMQ_REP);

Server::Server() {
    socket.bind ("tcp://*:5555");
};

void Server::receiveRequests() {
    zmq::message_t request;

    //  Wait for next request from client
    socket.recv(&request);
    std::string incomingMessage = std::string(static_cast<char *>(request.data()), request.size());
    std::cout << "Incoming message from client" << incomingMessage << std::endl;

    // Do some work
    sleep(1);

}

void Server::sendReplyToClient() {
    //  Send reply back to client
    zmq::message_t reply (20);
    memcpy (reply.data(), "Hello Python client", 20);
    socket.send(reply);
}