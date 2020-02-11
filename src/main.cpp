#include <iostream>
#include <fstream>
#include "config_loader.h"

void GenerateSampleConfig() {
    std::fstream output("config.dat", std::ios::out | std::ios::trunc | std::ios::binary);
    Config config;
    (*config.mutable_values())["secret_key"] = "VNG";
    config.SerializeToOstream(&output);
}

int main() {
    GOOGLE_PROTOBUF_VERIFY_VERSION;

    GenerateSampleConfig();

    std::cout << "This is secret key" << std::endl;

    ConfigLoader config_loader;
    auto secret_key = config_loader.Get("secret_key");
    std::cout << secret_key << std::endl;

    google::protobuf::ShutdownProtobufLibrary();
    return 0;
}