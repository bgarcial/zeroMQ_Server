#include <iostream>
#include "server.h"


int main() {
    Server s;
    s.receiveRequests();
    s.sendReplyToClient();
    return 0;
}