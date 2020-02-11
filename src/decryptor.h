//
// Created by Huynh Tan Ngan on 2/11/20.
//

#ifndef SRC_DECRYPTOR_H_
#define SRC_DECRYPTOR_H_

#include <proto/config.pb.h>

class Decryptor {
 public:
    std::string Decrypt(const std::string &key);
};


#endif //SRC_DECRYPTOR_H_
