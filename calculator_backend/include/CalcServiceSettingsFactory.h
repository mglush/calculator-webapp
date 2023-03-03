#pragma once

#include "IServiceSettingsFactory.h"

class CalcServiceSettingsFactory : public IServiceSettingsFactory {
    shared_ptr<Settings> settings_;
public:
    CalcServiceSettingsFactory();
    shared_ptr<Settings> get_settings() const final;
};