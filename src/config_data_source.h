//
// Created by Huynh Tan Ngan on 2/11/20.
//

#ifndef _CONFIG_DATA_SOURCE_H_
#define _CONFIG_DATA_SOURCE_H_

#include <string>

class ConfigDataSource {
 public:
    ConfigDataSource() = default;

    virtual ~ConfigDataSource() = default;

    virtual std::string Get(const std::string &key) = 0;
};


#endif //_CONFIG_DATA_SOURCE_H_
