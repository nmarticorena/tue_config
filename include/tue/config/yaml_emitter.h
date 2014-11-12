#ifndef TUE_CONFIG2_YAML_EMITTER_H_
#define TUE_CONFIG2_YAML_EMITTER_H_

#include "tue/config/types.h"

namespace tue
{

namespace config
{

class Configuration;

class YAMLEmitter
{

public:

    YAMLEmitter();

    void emit(const tue::config::Configuration& cfg, std::ostream& out, const std::string& indent = "");

    void emit(const tue::config::Configuration& cfg, NodeIdx idx, std::ostream& out, const std::string& indent = "");

};

} // end namespace config

} // end namespace tue

#endif