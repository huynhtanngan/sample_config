//
// Created by Huynh Tan Ngan on 2/11/20.
//

#ifndef _CONFIG_LOADER_H_
#define _CONFIG_LOADER_H_

#include <json/json.h>
#include "config_repository.h"

class ConfigLoader {
    std::unique_ptr<ConfigRepository> repository;

 public:
    ConfigLoader();

    static ConfigLoader &GetInstance();

    std::string Get(const std::string &key);
};


#endif //_CONFIG_LOADER_H_
