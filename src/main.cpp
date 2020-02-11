#include <iostream>
#include "config_loader.h"

int main() {
    std::cout << "This is secret key:" << std::endl;
    std::cout << ConfigLoader::GetInstance().Get("secret_key") << std::endl;
    return 0;
}