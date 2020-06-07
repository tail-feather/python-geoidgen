#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

extern void init_GeographicLib_Geoid_hpp(pybind11::module scope);


PYBIND11_MODULE(geoidgen, module) {
  init_GeographicLib_Geoid_hpp(module);
}
