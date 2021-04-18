//
// Created by roman on 17.04.21.
//

#include "Store.h"

#include <string>
#include <fstream>
#include <cctype>
#include <algorithm>

int Store::getResult(const std::string &input) {
    return validate(input) ? getIncrementedData(getFilePath(input)) : 0;
}

bool Store::validate(const std::string& input) {
    return !input.empty() && input.length() <= 20;
}

std::string Store::getFilePath(const std::string& input) {
    std::string lowerInput;
    std::transform(input.begin(), input.end(), lowerInput.begin(), ::tolower);

    if (input.length() <= 3) {
        return "./data/less3/" + lowerInput;
    } else {
        return "./data/more3/" + lowerInput;
    }
}

int Store::getIncrementedData(const std::string& filePath) {
    std::string value;
    std::fstream storedFile(getFilePath(filePath));
    getline(storedFile, value);
    int storedData = value.empty() ? 0 : std::stoi(value);
    storedData++;
    storedFile.clear();
    storedFile << storedData << std::endl;
    storedFile.close();

    return storedData;
}