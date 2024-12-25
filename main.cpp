#include <iostream>
#include "SQS.h"  // Ensure this path is correct

int main() {
    SQS sqs;
    sqs.sendMessage("Hello, SQS!");
    std::string message = sqs.receiveMessage();
    std::cout << "Received message: " << message << std::endl;
    return 0;
}
