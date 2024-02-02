#include <iostream>
#include <fstream>
#include <ctime>

class Logger {
public:
    Logger(const std::string& filename) {
        logFile.open(filename, std::ios::out | std::ios::app);
        if (!logFile.is_open()) {
            std::cerr << "Error opening log file: " << filename << std::endl;
        }
    }

    ~Logger() {
        if (logFile.is_open()) {
            logFile.close();
        }
    }

    void log(const std::string& message) {
        if (logFile.is_open()) {
            std::time_t now = std::time(0);
            std::tm* currentTime = std::localtime(&now);

            logFile << "[" << (currentTime->tm_year + 1900) << "-"
                    << (currentTime->tm_mon + 1) << "-"
                    << currentTime->tm_mday << " "
                    << currentTime->tm_hour << ":"
                    << currentTime->tm_min << ":"
                    << currentTime->tm_sec << "] "
                    << message << std::endl;
        }
    }

private:
    std::ofstream logFile;
};

int main() {
    Logger logger("logfile.txt");

    // Example usage
    logger.log("Program started");

    int result = 42; // Some operation or computation
    logger.log("Operation result: " + std::to_string(result));

    // ...

    logger.log("Program finished");

    return 0;
}
