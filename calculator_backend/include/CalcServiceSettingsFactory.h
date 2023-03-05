#pragma once

#include "IServiceSettingsFactory.h"

class CalcServiceSettingsFactory : public IServiceSettingsFactory {
    shared_ptr<restbed::Settings> settings_;
    int getEnvVar( std::string const & key ) const;
public:
    CalcServiceSettingsFactory();
    shared_ptr<restbed::Settings> get_settings() const final;
};