#ifndef SSSERVER_HPP_
#define SSSERVER_HPP_

#include <stdexcept>
#include "lib.h"

namespace sssr
{

class Server {
public: 
        unsigned long long time(){ return slvr::lib::fixed_time_in_usec();}
};

/**
Error type that can be avoided by some way, for example, repeated try or after correction
of input data.
*/
struct err_logic : public std::logic_error {};

/**
Error type that cannot be avoided and normally is generated by external objects or functions.
*/
struct err_runtime : public std::runtime_error {};

} // namespace sssr


#endif /* SSSERVER_HPP_ */
