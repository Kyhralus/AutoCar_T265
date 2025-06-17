from setuptools import find_packages
from setuptools import setup

setup(
    name='car_t265_interface',
    version='0.0.0',
    packages=find_packages(
        include=('car_t265_interface', 'car_t265_interface.*')),
)
