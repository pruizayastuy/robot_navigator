from setuptools import setup

package_name = 'turtle_navigator'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='tu_nombre',
    maintainer_email='tu@email.com',
    description='Navegación de tortuga con waypoints',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'navigator_controller = turtle_navigator.navigator_controller:main',
            'waypoint_commander = turtle_navigator.waypoint_commander:main',
        ],
    },
)
