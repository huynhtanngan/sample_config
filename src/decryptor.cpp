//
// Created by Huynh Tan Ngan on 2/11/20.
//

#include <fstream>
#include "decryptor.h"

const char *const kConfigFileName = "config.dat";

std::string Decryptor::Decrypt(const std::string &key) {
    std::fstream input(kConfigFileName, std::ios::in | std::ios::binary);
    if (!input) {
        throw std::runtime_error("config.dat file not found");
    }
    Config config;
    config.ParseFromIstream(&input);
    return config.values().at(key);
}
