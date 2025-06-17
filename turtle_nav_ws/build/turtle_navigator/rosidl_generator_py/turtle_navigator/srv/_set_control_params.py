# generated from rosidl_generator_py/resource/_idl.py.em
# with input from turtle_navigator:srv/SetControlParams.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetControlParams_Request(type):
    """Metaclass of message 'SetControlParams_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('turtle_navigator')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'turtle_navigator.srv.SetControlParams_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_control_params__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_control_params__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_control_params__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_control_params__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_control_params__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetControlParams_Request(metaclass=Metaclass_SetControlParams_Request):
    """Message class 'SetControlParams_Request'."""

    __slots__ = [
        '_linear_gain',
        '_angular_gain',
        '_max_speed',
    ]

    _fields_and_field_types = {
        'linear_gain': 'float',
        'angular_gain': 'float',
        'max_speed': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.linear_gain = kwargs.get('linear_gain', float())
        self.angular_gain = kwargs.get('angular_gain', float())
        self.max_speed = kwargs.get('max_speed', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.linear_gain != other.linear_gain:
            return False
        if self.angular_gain != other.angular_gain:
            return False
        if self.max_speed != other.max_speed:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def linear_gain(self):
        """Message field 'linear_gain'."""
        return self._linear_gain

    @linear_gain.setter
    def linear_gain(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'linear_gain' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'linear_gain' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._linear_gain = value

    @builtins.property
    def angular_gain(self):
        """Message field 'angular_gain'."""
        return self._angular_gain

    @angular_gain.setter
    def angular_gain(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angular_gain' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'angular_gain' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._angular_gain = value

    @builtins.property
    def max_speed(self):
        """Message field 'max_speed'."""
        return self._max_speed

    @max_speed.setter
    def max_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_speed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'max_speed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._max_speed = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetControlParams_Response(type):
    """Metaclass of message 'SetControlParams_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('turtle_navigator')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'turtle_navigator.srv.SetControlParams_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_control_params__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_control_params__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_control_params__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_control_params__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_control_params__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetControlParams_Response(metaclass=Metaclass_SetControlParams_Response):
    """Message class 'SetControlParams_Response'."""

    __slots__ = [
        '_success',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.success != other.success:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value


class Metaclass_SetControlParams(type):
    """Metaclass of service 'SetControlParams'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('turtle_navigator')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'turtle_navigator.srv.SetControlParams')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_control_params

            from turtle_navigator.srv import _set_control_params
            if _set_control_params.Metaclass_SetControlParams_Request._TYPE_SUPPORT is None:
                _set_control_params.Metaclass_SetControlParams_Request.__import_type_support__()
            if _set_control_params.Metaclass_SetControlParams_Response._TYPE_SUPPORT is None:
                _set_control_params.Metaclass_SetControlParams_Response.__import_type_support__()


class SetControlParams(metaclass=Metaclass_SetControlParams):
    from turtle_navigator.srv._set_control_params import SetControlParams_Request as Request
    from turtle_navigator.srv._set_control_params import SetControlParams_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
