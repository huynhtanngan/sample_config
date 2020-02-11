//
// Created by Huynh Tan Ngan on 2/11/20.
//

#include "config_loader.h"

ConfigLoader::ConfigLoader() {
    repository = std::make_unique<ConfigRepository>();
}

ConfigLoader &ConfigLoader::GetInstance() {
    static std::unique_ptr<ConfigLoader> instance(new ConfigLoader());
    return *instance;
}

std::string ConfigLoader::Get(const std::string &key) {
    return repository->Get(key);
}
