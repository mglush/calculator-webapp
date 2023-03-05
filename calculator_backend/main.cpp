#include <iostream>

#include "CalcResourceFactory.h"
#include "CalcServiceSettingsFactory.h"
#include "CalcService.h"

int main(int argc, char** argv) {
    std::cout << "CREATING THE RESOURCE FACTORY\n";
    auto resource_factory = make_shared<CalcResourceFactory>();

    std::cout << "CREATING THE SETTINGS FACTORY\n";
    auto settings_factory = make_shared<CalcServiceSettingsFactory>();

    std::cout << "CREATING THE CALCULATOR SERVICE\n";
    CalcService service(resource_factory, settings_factory);

    std::cout << "STARTING THE CALCULATOR SERVICE\n";
    std::cout << "LISTENING ON PORT " << settings_factory->get_settings()->get_port() << "\n";
    std::cout << "ROOT IS AT " << settings_factory->get_settings()->get_root() << "\n";

    service.start();

    return 0;
}