#include "CalcServiceSettingsFactory.h"

CalcServiceSettingsFactory::CalcServiceSettingsFactory() {
    settings_ = make_shared<Settings>();
//    settings_->set_port(8080);
    settings_->set_default_header("Connection", "close");
    settings_->set_default_header("Access-Control-Allow-Origin", "*"); // prevents CORS errors.
}

shared_ptr<Settings> CalcServiceSettingsFactory::get_settings() const {
    return settings_;
}