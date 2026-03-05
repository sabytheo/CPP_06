#include <iostream>
#include "Serializer.hpp"

int main() {

    int value = 42;
    Serializer::Data originalData;
    originalData.ptr = &value;
    std::cout << "=== TEST SERIALIZER (Data imbriquée) ===" << std::endl;
    std::cout << "\n[Original]" << std::endl;
    std::cout << "Adresse structure : " << &originalData << std::endl;
    std::cout << "Adresse contenue  : " << originalData.ptr << " (Valeur: " << *originalData.ptr << ")" << std::endl;
    uintptr_t raw = Serializer::serialize(&originalData);
    std::cout << "\n[Serialize]" << std::endl;
    std::cout << "Valeur raw (uintptr_t) : " << raw << std::endl;
    Serializer::Data* deserializedData = Serializer::deserialize(raw);
    std::cout << "\n[Deserialize]" << std::endl;
    std::cout << "Adresse structure : " << deserializedData << std::endl;
    std::cout << "Adresse contenue  : " << deserializedData->ptr << " (Valeur: " << *deserializedData->ptr << ")" << std::endl;
    std::cout << "\n[Vérification]" << std::endl;
    if (deserializedData == &originalData) {
        std::cout << "✅ SUCCÈS : Le pointeur deserializé est identique à l'original." << std::endl;
    } else {
        std::cout << "❌ ÉCHEC : Les adresses diffèrent !" << std::endl;
    }

    return 0;
}
