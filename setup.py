import os
import sys

from setuptools import setup, Extension, find_packages

try:
    import pybind11
    pybind11_include_path = pybind11.get_include()
except ImportError:
    pybind11_include_path = ""

ext_name = "geoidgen"
ext_version = "1.0.0"

include_dirs = [
    pybind11_include_path,
]

libraries = [
    "Geographic",
]


library_dirs = [
]

sources = []

for dirname, dirs, filenames in os.walk("src"):
    for filename in filenames:
        if not filename.endswith(".cpp"):
            continue
        sources.append(os.path.abspath(os.path.join(dirname, filename)))

extras = [
]
link_extras = [
]

extension = Extension(
    name=ext_name,
    include_dirs=include_dirs,
    libraries=libraries,
    library_dirs=library_dirs,
    sources=sources,
    extra_compile_args=extras,
    extra_link_args=link_extras,
)


install_requires = []
requirements_path = os.path.join(os.path.dirname(os.path.realpath(__file__)), "requirements.txt")
if os.path.exists(requirements_path):
    with open(requirements_path) as fp:
        install_requires = fp.read().splitlines()

setup(
    name=ext_name,
    version=ext_version,
    packages=find_packages(),
    classifiers=[
        "Development Status :: 4 - Beta",
        "Intended Audience :: Developers",
        "Programming Language :: Python :: 3.6",
        "License :: OSI Approved :: MIT License",
    ],
    ext_modules=[extension],
    install_requires=install_requires,
    zip_safe=False
)
