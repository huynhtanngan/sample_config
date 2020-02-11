//
// Created by Huynh Tan Ngan on 2/11/20.
//

#ifndef _CONFIG_LOADER_H_
#define _CONFIG_LOADER_H_

#include "config_repository.h"
#include <proto/config.pb.h>

class ConfigLoader {
    std::unique_ptr<ConfigRepository> repository;

 public:
    ConfigLoader();

    std::string Get(const std::string &key);
};


#endif //_CONFIG_LOADER_H_
