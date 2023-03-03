#pragma once

#include "IResourceFactory.h"
#include <tuple>
#include <string>

class CalcResourceFactory : public IResourceFactory {
    shared_ptr<Resource> resource_;

    void get_handler(const shared_ptr<Session> session);
    tuple<float, float, string> get_path_parameters(const shared_ptr<Session> session);
    float calculate(float num1, float num2, string operation);
    string to_json(float result);

public:
    CalcResourceFactory();
    shared_ptr<Resource> get_resource() const final;
};