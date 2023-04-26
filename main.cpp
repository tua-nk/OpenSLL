#include <openssl/sha.h>
#include <iostream>
#include <string>

int main() {
    std::string message = "Hello, world!";
    unsigned char hash[SHA256_DIGEST_LENGTH];

    // compute SHA256 hash of message
    SHA256((const unsigned char*) message.c_str(), message.size(), hash);

    // print the hash in hexadecimal format
    for (int i = 0; i < SHA256_DIGEST_LENGTH; i++) {
        printf("%02x", hash[i]);
    }

    std::cout << std::endl;
    return 0;
}
