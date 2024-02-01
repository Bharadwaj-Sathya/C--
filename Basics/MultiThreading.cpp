#include <iostream>
#include <thread>

// Function to be executed by the first thread
void threadFunction1() {
    for (int i = 0; i < 5; ++i) {
        std::cout << "Thread 1: " << i << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }
}

// Function to be executed by the second thread
void threadFunction2() {
    for (int i = 0; i < 5; ++i) {
        std::cout << "Thread 2: " << i << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }
}

int main() {
    // Create two threads
    std::thread t1(threadFunction1);
    std::thread t2(threadFunction2);

    // Wait for both threads to finish
    t1.join();
    t2.join();

    std::cout << "Main thread exiting." << std::endl;

    return 0;
}
