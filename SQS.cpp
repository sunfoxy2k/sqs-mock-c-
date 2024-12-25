#include "SQS.h"

// SQS::SQS() {
//     // Constructor implementation (if needed)
// }

void SQS::sendMessage(const std::string& message) {
    std::lock_guard<std::mutex> lock(queueMutex);
    messageQueue.push(message);
}

std::string SQS::receiveMessage() {
    std::lock_guard<std::mutex> lock(queueMutex);
    if (messageQueue.empty()) {
        return "";
    }
    std::string message = messageQueue.front();
    messageQueue.pop();
    return message;
}
