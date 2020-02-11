//
// Created by Huynh Tan Ngan on 2/11/20.
//

#ifndef _CONFIG_REMOTE_DATA_SOURCE_H_
#define _CONFIG_REMOTE_DATA_SOURCE_H_


#include "config_data_source.h"

class ConfigRemoteDataSource : public ConfigDataSource {
 public:
    ~ConfigRemoteDataSource() override;

    std::string Get(const std::string &key) override;
};


#endif //_CONFIG_REMOTE_DATA_SOURCE_H_
