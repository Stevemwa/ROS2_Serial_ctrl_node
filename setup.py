from setuptools import find_packages, setup

package_name = 'serial_ctrl'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools',
                      'geometry_msgs',
                      ],
    zip_safe=True,
    maintainer='root',
    maintainer_email='smwasmaish18@gmail.com',
    description='Control an Arduino via serial',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'serial_key_controller = serial_ctrl.serial_key_controller:main',
        ],
    },
)
