#include "../include/lowdb/in-memory.hpp"

void lowdb::InMemoryAdapter::set(const std::string& key, const std::string& value) {
    data[key] = value;
}

std::string lowdb::InMemoryAdapter::get(const std::string& key) {
    if (data.find(key) != data.end()) {
        return data[key];
    }
    return "";
}

void lowdb::InMemoryAdapter::update(const std::string &key, const std::string &value) {
    if (data.find(key) != data.end()) {
        data[key] = value;
    }
}

void lowdb::InMemoryAdapter::remove(const std::string& key) {
    data.erase(key);
}
