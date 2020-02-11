//
// Created by Huynh Tan Ngan on 2/11/20.
//

#include "config_local_data_source.h"

ConfigLocalDataSource::ConfigLocalDataSource() {
    config = std::make_unique<Json::Value>();
    LoadDummyConfig();
}

ConfigLocalDataSource::~ConfigLocalDataSource() {
}

void ConfigLocalDataSource::LoadDummyConfig() {
    std::string config_json(R"({"secret_key":"VNG"})");
    std::istringstream sin(config_json);
    sin >> *config;
}

std::string ConfigLocalDataSource::Get(const std::string &key) {
    auto config_json = (*config)[key];
    if (!config_json.isString()) {
        return "";
    }
    return config_json.asString();
}
