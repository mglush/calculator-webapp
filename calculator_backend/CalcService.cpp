#include "CalcService.h"

CalcService::CalcService(shared_ptr<IResourceFactory> resource_factory,
                shared_ptr<IServiceSettingsFactory> settings_factory) {
    settings_factory_ = settings_factory;
    service_.publish(resource_factory->get_resource());
}

void CalcService::start() {
    service_.start(settings_factory_->get_settings());
}