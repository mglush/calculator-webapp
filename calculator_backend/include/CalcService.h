#pragma once

#include "IService.h"
#include "IResourceFactory.h"
#include "IServiceSettingsFactory.h"

class CalcService : public IService {
    Service service_;
    shared_ptr<IServiceSettingsFactory> settings_factory_;
public:
    CalcService(shared_ptr<IResourceFactory> resource_factory,
                shared_ptr<IServiceSettingsFactory> settings_factory);
    void start() final;
};