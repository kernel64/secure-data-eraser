#pragma once
#include <msclr\marshal_cppstd.h>


namespace securedataeraser {
    System::String^ ConvertirStdString(std::string const& input) {
        return msclr::interop::marshal_as<System::String^>(input);
    }
}
