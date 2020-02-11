//
// Created by Huynh Tan Ngan on 2/11/20.
//

#include "config_repository.h"
#include "config_local_data_source.h"
#include "config_remote_data_source.h"

ConfigRepository::ConfigRepository() {
    local_data_source = std::make_unique<ConfigLocalDataSource>();
    remote_data_source = std::make_unique<ConfigRemoteDataSource>();
}

bool ConfigRepository::IsExpired() {
    return false;
}

std::string ConfigRepository::Get(const std::string &key) {
    if (!IsExpired()) {
        return local_data_source->Get(key);
    }
    return remote_data_source->Get(key);
}
