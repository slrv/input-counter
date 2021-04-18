//
// Created by roman on 17.04.21.
//

#ifndef TEST_STORE_H
#define TEST_STORE_H
#include <string>

class Store {
public:
    int static getResult(const std::string& input);

private:
    bool static validate(const std::string& input);
    std::string static getFilePath(const std::string& input);
    int static getIncrementedData(const std::string& filePath);
};


#endif //TEST_STORE_H
