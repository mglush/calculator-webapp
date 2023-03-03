#include "CalcResourceFactory.h"
#include "CalcServiceSettingsFactory.h"
#include "CalcService"

int main(int argc, char** argv) {
    auto resource_factory = make_shared<CalcResourceFactory>();
    auto settings_factory = make_shared<CalcServiceSettingsFactory>();
    CalcService service(resource_factory, settings_factory);

    service.start();

    return 0;
}