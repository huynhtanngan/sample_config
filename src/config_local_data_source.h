//
// Created by Huynh Tan Ngan on 2/11/20.
//

#ifndef _CONFIG_LOCAL_DATA_SOURCE_H_
#define _CONFIG_LOCAL_DATA_SOURCE_H_


#include <json/json.h>
#include "config_data_source.h"

class ConfigLocalDataSource : public ConfigDataSource {
    std::unique_ptr<Json::Value> config;

    void LoadDummyConfig();

 public:
    ConfigLocalDataSource();

    ~ConfigLocalDataSource() override;

    std::string Get(const std::string &key) override;

};


#endif //_CONFIG_LOCAL_DATA_SOURCE_H_
