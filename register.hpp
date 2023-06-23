#ifndef REGISTER_HPP
#define REGISTER_HPP



#include <string>

class Registers
{
    int num_registers;
    Registers() : num_registers(0) {}
    Registers(Registers const& r) = delete;
public:
    
    static Registers &instance() 
    {
        static Registers inst;
        return inst;
    }

    std::string freshVar(std::string var_name = "", bool is_global = false)
    {
        if( var_name != "main")
        {
        std::string prefix = (is_global) ? "@" : "%";
        if(var_name == "") var_name = "ig";
        return prefix + var_name + "_" + std::to_string(num_registers++);}
        else{
        assert(is_global);
        return "@main";
        }
    }
};

#endif
