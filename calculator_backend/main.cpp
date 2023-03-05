#include <iostream>

#include "CalcResourceFactory.h"
#include "CalcServiceSettingsFactory.h"
#include "CalcService.h"

int main(int argc, char** argv) {
    std::cerr << "CREATING THE RESOURCE FACTORY\n";
    auto resource_factory = make_shared<CalcResourceFactory>();

    std::cerr << "CREATING THE SETTINGS FACTORY\n";
    auto settings_factory = make_shared<CalcServiceSettingsFactory>();

    std::cerr << "CREATING THE CALCULATOR SERVICE\n";
    CalcService service(resource_factory, settings_factory);

    std::cerr << "STARTING THE CALCULATOR SERVICE\n";
    std::cerr << "LISTENING ON PORT " << settings_factory->get_settings()->get_port() << "\n";
    std::cerr << "ROOT IS AT " << settings_factory->get_settings()->get_root() << "\n";

    service.start();

    return 0;
}