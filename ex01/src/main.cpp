#include <iostream>
#include "Serializer.hpp"

int main() {
    int value = 42;
    Serializer::Data originalData;
    originalData.ptr = &value;
    std::cout << "=== TEST SERIALIZER  ===" << std::endl;
    std::cout << "\n[Original]" << std::endl;
    std::cout << "Adress structure : " << &originalData << std::endl;
    std::cout << "Adress data  : " << originalData.ptr << " (Value: " << *originalData.ptr << ")" << std::endl;
    uintptr_t raw = Serializer::serialize(&originalData);
    std::cout << "\n[Serialize]" << std::endl;
    std::cout << "Raw value (uintptr_t) : " << raw << std::endl;
    Serializer::Data* deserializedData = Serializer::deserialize(raw);
    std::cout << "\n[Deserialize]" << std::endl;
    std::cout << "Adress structure : " << deserializedData << std::endl;
    std::cout << "Adress data  : " << deserializedData->ptr << " (Value: " << *deserializedData->ptr << ")" << std::endl;
    std::cout << "\n[Check]" << std::endl;
    if (deserializedData == &originalData) {
        std::cout << "SUCCESS : the ptr deserialize is the same as the serialize." << std::endl;
    } else {
        std::cout << "Fail : Address were different !" << std::endl;
    }

    return 0;
}
