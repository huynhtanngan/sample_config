//
// Created by Huynh Tan Ngan on 2/11/20.
//

#include <fstream>
#include "config_local_data_source.h"

ConfigLocalDataSource::ConfigLocalDataSource() {
    decryptor = std::make_unique<Decryptor>();
}

ConfigLocalDataSource::~ConfigLocalDataSource() {
}

std::string ConfigLocalDataSource::Get(const std::string &key) {
    return decryptor->Decrypt(key);
}
