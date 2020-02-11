//
// Created by Huynh Tan Ngan on 2/11/20.
//

#ifndef _CONFIG_LOCAL_DATA_SOURCE_H_
#define _CONFIG_LOCAL_DATA_SOURCE_H_

#include "config_data_source.h"
#include "decryptor.h"

class ConfigLocalDataSource : public ConfigDataSource {
    std::unique_ptr<Decryptor> decryptor;

 public:
    ConfigLocalDataSource();

    ~ConfigLocalDataSource() override;

    std::string Get(const std::string &key) override;
};


#endif //_CONFIG_LOCAL_DATA_SOURCE_H_
