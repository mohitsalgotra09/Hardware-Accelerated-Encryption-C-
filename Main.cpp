#include <iostream>
#include <string>

class BitwiseEncrypter {
public:
    std::string encrypt(std::string data, char key) {
        std::string output = data;
        for (int i = 0; i < data.length(); i++) {
            output[i] = (data[i] ^ key) << 1 | (data[i] >> (7)); 
        }
        return output;
    }
};

int main() {
    BitwiseEncrypter engine;
    std::string secret = "JPMC_INTERN_2027";
    std::string encrypted = engine.encrypt(secret, 'K');
    std::cout << "Encrypted Data Stream: " << encrypted << std::endl;
    return 0;
}
