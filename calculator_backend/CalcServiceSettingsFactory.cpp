#include "CalcServiceSettingsFactory.h"

CalcServiceSettingsFactory::CalcServiceSettingsFactory() {
    settings_ = make_shared<restbed::Settings>();

    string temp = "PORT";
    char* val = getenv( temp.c_str() );
    int port = (val == NULL ? 80 : atoi(val));

    settings_->set_port(port);
    settings_->set_default_header("Connection", "close");
    settings_->set_default_header("Access-Control-Allow-Origin", "*"); // prevents CORS errors.
}

shared_ptr<restbed::Settings> CalcServiceSettingsFactory::get_settings() const {
    return settings_;
}