#ifndef SQS_H
#define SQS_H

#include <queue>
#include <string>
#include <mutex>

class SQS {
public:
    // SQS();  // Constructor
    void sendMessage(const std::string& message);
    std::string receiveMessage();

private:
    std::queue<std::string> messageQueue;
    std::mutex queueMutex;
};

#endif // SQS_H
