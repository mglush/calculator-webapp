#include "CalcServiceSettingsFactory.h"

CalcServiceSettingsFactory::CalcServiceSettingsFactory() {
    settings_ = make_shared<restbed::Settings>();
    settings_->set_port(getEnvVar("PORT"));
    settings_->set_default_header("Connection", "close");
    settings_->set_default_header("Access-Control-Allow-Origin", "*"); // prevents CORS errors.
}

int getEnvVar( std::string const & key ) {
    char* val = getenv( key.c_str() );
    return val == NULL ? 80 : atoi(val);
}

shared_ptr<restbed::Settings> CalcServiceSettingsFactory::get_settings() const {
    return settings_;
}