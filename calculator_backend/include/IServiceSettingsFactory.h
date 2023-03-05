#pragma once

#include <memory>
#include <restbed>

using namespace std;

class IServiceSettingsFactory {
public:
    virtual shared_ptr<restbed::Settings> get_settings() const = 0;
};