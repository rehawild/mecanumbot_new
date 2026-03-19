# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mecanumbot_msgs:msg/OpenCRState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_OpenCRState(type):
    """Metaclass of message 'OpenCRState'."""

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
            module = import_type_support('mecanumbot_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mecanumbot_msgs.msg.OpenCRState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__open_cr_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__open_cr_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__open_cr_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__open_cr_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__open_cr_state

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class OpenCRState(metaclass=Metaclass_OpenCRState):
    """Message class 'OpenCRState'."""

    __slots__ = [
        '_header',
        '_cmd_vel_bl',
        '_cmd_vel_br',
        '_cmd_vel_fl',
        '_cmd_vel_fr',
        '_vel_bl',
        '_vel_br',
        '_vel_fl',
        '_vel_fr',
        '_pos_bl',
        '_pos_br',
        '_pos_fl',
        '_pos_fr',
        '_curr_bl',
        '_curr_br',
        '_curr_fl',
        '_curr_fr',
        '_acc_bl',
        '_acc_br',
        '_acc_fl',
        '_acc_fr',
        '_pos_n',
        '_pos_gl',
        '_pos_gr',
        '_battery_voltage',
        '_imu_angular_vel_x',
        '_imu_angular_vel_y',
        '_imu_angular_vel_z',
        '_imu_linear_acc_x',
        '_imu_linear_acc_y',
        '_imu_linear_acc_z',
        '_imu_magnetic_x',
        '_imu_magnetic_y',
        '_imu_magnetic_z',
        '_imu_orientation_w',
        '_imu_orientation_x',
        '_imu_orientation_y',
        '_imu_orientation_z',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'cmd_vel_bl': 'int16',
        'cmd_vel_br': 'int16',
        'cmd_vel_fl': 'int16',
        'cmd_vel_fr': 'int16',
        'vel_bl': 'int16',
        'vel_br': 'int16',
        'vel_fl': 'int16',
        'vel_fr': 'int16',
        'pos_bl': 'int16',
        'pos_br': 'int16',
        'pos_fl': 'int16',
        'pos_fr': 'int16',
        'curr_bl': 'int16',
        'curr_br': 'int16',
        'curr_fl': 'int16',
        'curr_fr': 'int16',
        'acc_bl': 'int16',
        'acc_br': 'int16',
        'acc_fl': 'int16',
        'acc_fr': 'int16',
        'pos_n': 'int16',
        'pos_gl': 'int16',
        'pos_gr': 'int16',
        'battery_voltage': 'float',
        'imu_angular_vel_x': 'float',
        'imu_angular_vel_y': 'float',
        'imu_angular_vel_z': 'float',
        'imu_linear_acc_x': 'float',
        'imu_linear_acc_y': 'float',
        'imu_linear_acc_z': 'float',
        'imu_magnetic_x': 'float',
        'imu_magnetic_y': 'float',
        'imu_magnetic_z': 'float',
        'imu_orientation_w': 'float',
        'imu_orientation_x': 'float',
        'imu_orientation_y': 'float',
        'imu_orientation_z': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.cmd_vel_bl = kwargs.get('cmd_vel_bl', int())
        self.cmd_vel_br = kwargs.get('cmd_vel_br', int())
        self.cmd_vel_fl = kwargs.get('cmd_vel_fl', int())
        self.cmd_vel_fr = kwargs.get('cmd_vel_fr', int())
        self.vel_bl = kwargs.get('vel_bl', int())
        self.vel_br = kwargs.get('vel_br', int())
        self.vel_fl = kwargs.get('vel_fl', int())
        self.vel_fr = kwargs.get('vel_fr', int())
        self.pos_bl = kwargs.get('pos_bl', int())
        self.pos_br = kwargs.get('pos_br', int())
        self.pos_fl = kwargs.get('pos_fl', int())
        self.pos_fr = kwargs.get('pos_fr', int())
        self.curr_bl = kwargs.get('curr_bl', int())
        self.curr_br = kwargs.get('curr_br', int())
        self.curr_fl = kwargs.get('curr_fl', int())
        self.curr_fr = kwargs.get('curr_fr', int())
        self.acc_bl = kwargs.get('acc_bl', int())
        self.acc_br = kwargs.get('acc_br', int())
        self.acc_fl = kwargs.get('acc_fl', int())
        self.acc_fr = kwargs.get('acc_fr', int())
        self.pos_n = kwargs.get('pos_n', int())
        self.pos_gl = kwargs.get('pos_gl', int())
        self.pos_gr = kwargs.get('pos_gr', int())
        self.battery_voltage = kwargs.get('battery_voltage', float())
        self.imu_angular_vel_x = kwargs.get('imu_angular_vel_x', float())
        self.imu_angular_vel_y = kwargs.get('imu_angular_vel_y', float())
        self.imu_angular_vel_z = kwargs.get('imu_angular_vel_z', float())
        self.imu_linear_acc_x = kwargs.get('imu_linear_acc_x', float())
        self.imu_linear_acc_y = kwargs.get('imu_linear_acc_y', float())
        self.imu_linear_acc_z = kwargs.get('imu_linear_acc_z', float())
        self.imu_magnetic_x = kwargs.get('imu_magnetic_x', float())
        self.imu_magnetic_y = kwargs.get('imu_magnetic_y', float())
        self.imu_magnetic_z = kwargs.get('imu_magnetic_z', float())
        self.imu_orientation_w = kwargs.get('imu_orientation_w', float())
        self.imu_orientation_x = kwargs.get('imu_orientation_x', float())
        self.imu_orientation_y = kwargs.get('imu_orientation_y', float())
        self.imu_orientation_z = kwargs.get('imu_orientation_z', float())

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
        if self.header != other.header:
            return False
        if self.cmd_vel_bl != other.cmd_vel_bl:
            return False
        if self.cmd_vel_br != other.cmd_vel_br:
            return False
        if self.cmd_vel_fl != other.cmd_vel_fl:
            return False
        if self.cmd_vel_fr != other.cmd_vel_fr:
            return False
        if self.vel_bl != other.vel_bl:
            return False
        if self.vel_br != other.vel_br:
            return False
        if self.vel_fl != other.vel_fl:
            return False
        if self.vel_fr != other.vel_fr:
            return False
        if self.pos_bl != other.pos_bl:
            return False
        if self.pos_br != other.pos_br:
            return False
        if self.pos_fl != other.pos_fl:
            return False
        if self.pos_fr != other.pos_fr:
            return False
        if self.curr_bl != other.curr_bl:
            return False
        if self.curr_br != other.curr_br:
            return False
        if self.curr_fl != other.curr_fl:
            return False
        if self.curr_fr != other.curr_fr:
            return False
        if self.acc_bl != other.acc_bl:
            return False
        if self.acc_br != other.acc_br:
            return False
        if self.acc_fl != other.acc_fl:
            return False
        if self.acc_fr != other.acc_fr:
            return False
        if self.pos_n != other.pos_n:
            return False
        if self.pos_gl != other.pos_gl:
            return False
        if self.pos_gr != other.pos_gr:
            return False
        if self.battery_voltage != other.battery_voltage:
            return False
        if self.imu_angular_vel_x != other.imu_angular_vel_x:
            return False
        if self.imu_angular_vel_y != other.imu_angular_vel_y:
            return False
        if self.imu_angular_vel_z != other.imu_angular_vel_z:
            return False
        if self.imu_linear_acc_x != other.imu_linear_acc_x:
            return False
        if self.imu_linear_acc_y != other.imu_linear_acc_y:
            return False
        if self.imu_linear_acc_z != other.imu_linear_acc_z:
            return False
        if self.imu_magnetic_x != other.imu_magnetic_x:
            return False
        if self.imu_magnetic_y != other.imu_magnetic_y:
            return False
        if self.imu_magnetic_z != other.imu_magnetic_z:
            return False
        if self.imu_orientation_w != other.imu_orientation_w:
            return False
        if self.imu_orientation_x != other.imu_orientation_x:
            return False
        if self.imu_orientation_y != other.imu_orientation_y:
            return False
        if self.imu_orientation_z != other.imu_orientation_z:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def cmd_vel_bl(self):
        """Message field 'cmd_vel_bl'."""
        return self._cmd_vel_bl

    @cmd_vel_bl.setter
    def cmd_vel_bl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cmd_vel_bl' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'cmd_vel_bl' field must be an integer in [-32768, 32767]"
        self._cmd_vel_bl = value

    @builtins.property
    def cmd_vel_br(self):
        """Message field 'cmd_vel_br'."""
        return self._cmd_vel_br

    @cmd_vel_br.setter
    def cmd_vel_br(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cmd_vel_br' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'cmd_vel_br' field must be an integer in [-32768, 32767]"
        self._cmd_vel_br = value

    @builtins.property
    def cmd_vel_fl(self):
        """Message field 'cmd_vel_fl'."""
        return self._cmd_vel_fl

    @cmd_vel_fl.setter
    def cmd_vel_fl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cmd_vel_fl' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'cmd_vel_fl' field must be an integer in [-32768, 32767]"
        self._cmd_vel_fl = value

    @builtins.property
    def cmd_vel_fr(self):
        """Message field 'cmd_vel_fr'."""
        return self._cmd_vel_fr

    @cmd_vel_fr.setter
    def cmd_vel_fr(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cmd_vel_fr' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'cmd_vel_fr' field must be an integer in [-32768, 32767]"
        self._cmd_vel_fr = value

    @builtins.property
    def vel_bl(self):
        """Message field 'vel_bl'."""
        return self._vel_bl

    @vel_bl.setter
    def vel_bl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vel_bl' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'vel_bl' field must be an integer in [-32768, 32767]"
        self._vel_bl = value

    @builtins.property
    def vel_br(self):
        """Message field 'vel_br'."""
        return self._vel_br

    @vel_br.setter
    def vel_br(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vel_br' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'vel_br' field must be an integer in [-32768, 32767]"
        self._vel_br = value

    @builtins.property
    def vel_fl(self):
        """Message field 'vel_fl'."""
        return self._vel_fl

    @vel_fl.setter
    def vel_fl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vel_fl' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'vel_fl' field must be an integer in [-32768, 32767]"
        self._vel_fl = value

    @builtins.property
    def vel_fr(self):
        """Message field 'vel_fr'."""
        return self._vel_fr

    @vel_fr.setter
    def vel_fr(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vel_fr' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'vel_fr' field must be an integer in [-32768, 32767]"
        self._vel_fr = value

    @builtins.property
    def pos_bl(self):
        """Message field 'pos_bl'."""
        return self._pos_bl

    @pos_bl.setter
    def pos_bl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pos_bl' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'pos_bl' field must be an integer in [-32768, 32767]"
        self._pos_bl = value

    @builtins.property
    def pos_br(self):
        """Message field 'pos_br'."""
        return self._pos_br

    @pos_br.setter
    def pos_br(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pos_br' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'pos_br' field must be an integer in [-32768, 32767]"
        self._pos_br = value

    @builtins.property
    def pos_fl(self):
        """Message field 'pos_fl'."""
        return self._pos_fl

    @pos_fl.setter
    def pos_fl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pos_fl' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'pos_fl' field must be an integer in [-32768, 32767]"
        self._pos_fl = value

    @builtins.property
    def pos_fr(self):
        """Message field 'pos_fr'."""
        return self._pos_fr

    @pos_fr.setter
    def pos_fr(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pos_fr' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'pos_fr' field must be an integer in [-32768, 32767]"
        self._pos_fr = value

    @builtins.property
    def curr_bl(self):
        """Message field 'curr_bl'."""
        return self._curr_bl

    @curr_bl.setter
    def curr_bl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'curr_bl' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'curr_bl' field must be an integer in [-32768, 32767]"
        self._curr_bl = value

    @builtins.property
    def curr_br(self):
        """Message field 'curr_br'."""
        return self._curr_br

    @curr_br.setter
    def curr_br(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'curr_br' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'curr_br' field must be an integer in [-32768, 32767]"
        self._curr_br = value

    @builtins.property
    def curr_fl(self):
        """Message field 'curr_fl'."""
        return self._curr_fl

    @curr_fl.setter
    def curr_fl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'curr_fl' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'curr_fl' field must be an integer in [-32768, 32767]"
        self._curr_fl = value

    @builtins.property
    def curr_fr(self):
        """Message field 'curr_fr'."""
        return self._curr_fr

    @curr_fr.setter
    def curr_fr(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'curr_fr' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'curr_fr' field must be an integer in [-32768, 32767]"
        self._curr_fr = value

    @builtins.property
    def acc_bl(self):
        """Message field 'acc_bl'."""
        return self._acc_bl

    @acc_bl.setter
    def acc_bl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'acc_bl' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'acc_bl' field must be an integer in [-32768, 32767]"
        self._acc_bl = value

    @builtins.property
    def acc_br(self):
        """Message field 'acc_br'."""
        return self._acc_br

    @acc_br.setter
    def acc_br(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'acc_br' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'acc_br' field must be an integer in [-32768, 32767]"
        self._acc_br = value

    @builtins.property
    def acc_fl(self):
        """Message field 'acc_fl'."""
        return self._acc_fl

    @acc_fl.setter
    def acc_fl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'acc_fl' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'acc_fl' field must be an integer in [-32768, 32767]"
        self._acc_fl = value

    @builtins.property
    def acc_fr(self):
        """Message field 'acc_fr'."""
        return self._acc_fr

    @acc_fr.setter
    def acc_fr(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'acc_fr' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'acc_fr' field must be an integer in [-32768, 32767]"
        self._acc_fr = value

    @builtins.property
    def pos_n(self):
        """Message field 'pos_n'."""
        return self._pos_n

    @pos_n.setter
    def pos_n(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pos_n' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'pos_n' field must be an integer in [-32768, 32767]"
        self._pos_n = value

    @builtins.property
    def pos_gl(self):
        """Message field 'pos_gl'."""
        return self._pos_gl

    @pos_gl.setter
    def pos_gl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pos_gl' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'pos_gl' field must be an integer in [-32768, 32767]"
        self._pos_gl = value

    @builtins.property
    def pos_gr(self):
        """Message field 'pos_gr'."""
        return self._pos_gr

    @pos_gr.setter
    def pos_gr(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pos_gr' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'pos_gr' field must be an integer in [-32768, 32767]"
        self._pos_gr = value

    @builtins.property
    def battery_voltage(self):
        """Message field 'battery_voltage'."""
        return self._battery_voltage

    @battery_voltage.setter
    def battery_voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'battery_voltage' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'battery_voltage' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._battery_voltage = value

    @builtins.property
    def imu_angular_vel_x(self):
        """Message field 'imu_angular_vel_x'."""
        return self._imu_angular_vel_x

    @imu_angular_vel_x.setter
    def imu_angular_vel_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'imu_angular_vel_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'imu_angular_vel_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._imu_angular_vel_x = value

    @builtins.property
    def imu_angular_vel_y(self):
        """Message field 'imu_angular_vel_y'."""
        return self._imu_angular_vel_y

    @imu_angular_vel_y.setter
    def imu_angular_vel_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'imu_angular_vel_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'imu_angular_vel_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._imu_angular_vel_y = value

    @builtins.property
    def imu_angular_vel_z(self):
        """Message field 'imu_angular_vel_z'."""
        return self._imu_angular_vel_z

    @imu_angular_vel_z.setter
    def imu_angular_vel_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'imu_angular_vel_z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'imu_angular_vel_z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._imu_angular_vel_z = value

    @builtins.property
    def imu_linear_acc_x(self):
        """Message field 'imu_linear_acc_x'."""
        return self._imu_linear_acc_x

    @imu_linear_acc_x.setter
    def imu_linear_acc_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'imu_linear_acc_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'imu_linear_acc_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._imu_linear_acc_x = value

    @builtins.property
    def imu_linear_acc_y(self):
        """Message field 'imu_linear_acc_y'."""
        return self._imu_linear_acc_y

    @imu_linear_acc_y.setter
    def imu_linear_acc_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'imu_linear_acc_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'imu_linear_acc_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._imu_linear_acc_y = value

    @builtins.property
    def imu_linear_acc_z(self):
        """Message field 'imu_linear_acc_z'."""
        return self._imu_linear_acc_z

    @imu_linear_acc_z.setter
    def imu_linear_acc_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'imu_linear_acc_z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'imu_linear_acc_z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._imu_linear_acc_z = value

    @builtins.property
    def imu_magnetic_x(self):
        """Message field 'imu_magnetic_x'."""
        return self._imu_magnetic_x

    @imu_magnetic_x.setter
    def imu_magnetic_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'imu_magnetic_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'imu_magnetic_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._imu_magnetic_x = value

    @builtins.property
    def imu_magnetic_y(self):
        """Message field 'imu_magnetic_y'."""
        return self._imu_magnetic_y

    @imu_magnetic_y.setter
    def imu_magnetic_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'imu_magnetic_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'imu_magnetic_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._imu_magnetic_y = value

    @builtins.property
    def imu_magnetic_z(self):
        """Message field 'imu_magnetic_z'."""
        return self._imu_magnetic_z

    @imu_magnetic_z.setter
    def imu_magnetic_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'imu_magnetic_z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'imu_magnetic_z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._imu_magnetic_z = value

    @builtins.property
    def imu_orientation_w(self):
        """Message field 'imu_orientation_w'."""
        return self._imu_orientation_w

    @imu_orientation_w.setter
    def imu_orientation_w(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'imu_orientation_w' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'imu_orientation_w' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._imu_orientation_w = value

    @builtins.property
    def imu_orientation_x(self):
        """Message field 'imu_orientation_x'."""
        return self._imu_orientation_x

    @imu_orientation_x.setter
    def imu_orientation_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'imu_orientation_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'imu_orientation_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._imu_orientation_x = value

    @builtins.property
    def imu_orientation_y(self):
        """Message field 'imu_orientation_y'."""
        return self._imu_orientation_y

    @imu_orientation_y.setter
    def imu_orientation_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'imu_orientation_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'imu_orientation_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._imu_orientation_y = value

    @builtins.property
    def imu_orientation_z(self):
        """Message field 'imu_orientation_z'."""
        return self._imu_orientation_z

    @imu_orientation_z.setter
    def imu_orientation_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'imu_orientation_z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'imu_orientation_z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._imu_orientation_z = value
