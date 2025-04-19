#pragma once
#include <string>
#include <sstream>
#include <msclr/marshal_cppstd.h>

namespace Utils {

    /// <summary>
    /// Converts a System::String^ to std::string
    /// </summary>
    inline std::string toStdString(System::String^ sysStr) {
        return msclr::interop::marshal_as<std::string>(sysStr);
    }

    /// <summary>
    /// Converts std::string to System::String^
    /// </summary>
    inline System::String^ toSysStr(const std::string& nativeStr) {
        return gcnew System::String(nativeStr.c_str());
    }

    /// <summary>
    /// Converts System::String^ to int
    /// </summary>
    inline int toInt(System::String^ sysStr) {
        return System::Int32::Parse(sysStr);
    }

    /// <summary>
    /// Converts int to System::String^
    /// </summary>
    inline System::String^ toSysString(int value) {
        return value.ToString();
    }

    /// <summary>
    /// Converts System::String^ to float
    /// </summary>
    inline float toFloat(System::String^ sysStr) {
        return System::Single::Parse(sysStr);
    }

    /// <summary>
    /// Converts float to System::String^
    /// </summary>
    inline System::String^ toSysString(float value) {
        return value.ToString();
    }

    /// <summary>
    /// Converts System::String^ to double
    /// </summary>
    inline double toDouble(System::String^ sysStr) {
        return System::Double::Parse(sysStr);
    }

    /// <summary>
    /// Converts double to System::String^
    /// </summary>
    inline System::String^ toSysString(double value) {
        return value.ToString();
    }

    /// <summary>
    /// Converts System::String^ to bool
    /// </summary>
    inline bool toBool(System::String^ sysStr) {
        return System::Boolean::Parse(sysStr);
    }

    /// <summary>
    /// Converts bool to System::String^
    /// </summary>
    inline System::String^ toSysString(bool value) {
        return value.ToString();
    }

    /// <summary>
    /// Converts System::String^ to a vector of strings (split by delimiter)
    /// </summary>
    inline std::vector<std::string> toStringVector(System::String^ sysStr, char delimiter = ',') {
        std::vector<std::string> result;
        std::string stdStr = toStdString(sysStr);
        std::stringstream ss(stdStr);
        std::string token;

        while (std::getline(ss, token, delimiter)) {
            result.push_back(token);
        }

        return result;
    }
    inline System::String^ toSysStr(char c) {
        wchar_t wcharArr[2] = { (wchar_t)c, 0 };
        return gcnew System::String(wcharArr);
    }


    /// <summary>
    /// Converts a vector of strings to System::String^ (joined by delimiter)
    /// </summary>
    inline System::String^ toSysString(const std::vector<std::string>& strVec, char delimiter = ',') {
        std::string joinedStr = "";

        for (const auto& str : strVec) {
            joinedStr += str + delimiter;
        }

        // Remove last delimiter
        if (!joinedStr.empty()) {
            joinedStr.pop_back();
        }

        return toSysStr(joinedStr);
    }

}  // namespace Utils


