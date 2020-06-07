// generate by pypp
// original source code: GeographicLib/Geoid.hpp

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include "GeographicLib/Geoid.hpp"





void init_GeographicLib_Geoid_hpp(pybind11::module scope) {
    auto pybind11_GeographicLib_Geoid = pybind11::class_<GeographicLib::Geoid, std::shared_ptr<GeographicLib::Geoid>>(scope, "Geoid")
        .def(pybind11::init<const std::string &>())
        .def("CacheArea", &GeographicLib::Geoid::CacheArea)
        .def("CacheAll", &GeographicLib::Geoid::CacheAll)
        .def("CacheClear", &GeographicLib::Geoid::CacheClear)
        .def("__call__", &GeographicLib::Geoid::operator())
        .def("ConvertHeight", &GeographicLib::Geoid::ConvertHeight)
        .def("Description", &GeographicLib::Geoid::Description, pybind11::return_value_policy::reference_internal)
        .def("DateTime", &GeographicLib::Geoid::DateTime, pybind11::return_value_policy::reference_internal)
        .def("GeoidFile", &GeographicLib::Geoid::GeoidFile, pybind11::return_value_policy::reference_internal)
        .def("GeoidName", &GeographicLib::Geoid::GeoidName, pybind11::return_value_policy::reference_internal)
        .def("GeoidDirectory", &GeographicLib::Geoid::GeoidDirectory, pybind11::return_value_policy::reference_internal)
        .def("Interpolation", &GeographicLib::Geoid::Interpolation)
        .def("MaxError", &GeographicLib::Geoid::MaxError)
        .def("RMSError", &GeographicLib::Geoid::RMSError)
        .def("Offset", &GeographicLib::Geoid::Offset)
        .def("Scale", &GeographicLib::Geoid::Scale)
        .def("ThreadSafe", &GeographicLib::Geoid::ThreadSafe)
        .def("Cache", &GeographicLib::Geoid::Cache)
        .def("CacheWest", &GeographicLib::Geoid::CacheWest)
        .def("CacheEast", &GeographicLib::Geoid::CacheEast)
        .def("CacheNorth", &GeographicLib::Geoid::CacheNorth)
        .def("CacheSouth", &GeographicLib::Geoid::CacheSouth)
        .def("MajorRadius", &GeographicLib::Geoid::MajorRadius)
        .def("Flattening", &GeographicLib::Geoid::Flattening)
        .def_static("DefaultGeoidPath", &GeographicLib::Geoid::DefaultGeoidPath)
        .def_static("DefaultGeoidName", &GeographicLib::Geoid::DefaultGeoidName)
        ;
    pybind11::enum_<GeographicLib::Geoid::convertflag>(pybind11_GeographicLib_Geoid, "convertflag")
        .value("ELLIPSOIDTOGEOID", GeographicLib::Geoid::ELLIPSOIDTOGEOID)
        .value("NONE", GeographicLib::Geoid::NONE)
        .value("GEOIDTOELLIPSOID", GeographicLib::Geoid::GEOIDTOELLIPSOID)
        .export_values()
        ;
}
