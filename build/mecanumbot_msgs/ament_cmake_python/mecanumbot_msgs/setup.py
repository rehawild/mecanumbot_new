from setuptools import find_packages
from setuptools import setup

setup(
    name='mecanumbot_msgs',
    version='0.0.1',
    packages=find_packages(
        include=('mecanumbot_msgs', 'mecanumbot_msgs.*')),
)
