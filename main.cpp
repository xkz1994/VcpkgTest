#include <iostream>
#include <json/json.h>

int main() {
    Json::Value root;
    root["one"] = "one";
    std::cout << root.toStyledString() << std::endl;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
