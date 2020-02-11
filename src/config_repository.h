//
// Created by Huynh Tan Ngan on 2/11/20.
//

#ifndef _CONFIG_REPOSITORY_H_
#define _CONFIG_REPOSITORY_H_

#include <string>

#include <proto/config.pb.h>
#include "config_data_source.h"

class ConfigRepository {
    std::unique_ptr<ConfigDataSource> local_data_source;

    std::unique_ptr<ConfigDataSource> remote_data_source;

    bool IsExpired();

 public:
    ConfigRepository();

    std::string Get(const std::string &key);
};


#endif //_CONFIG_REPOSITORY_H_
