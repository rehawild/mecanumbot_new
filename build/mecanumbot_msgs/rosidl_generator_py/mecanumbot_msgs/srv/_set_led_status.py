# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mecanumbot_msgs:srv/SetLedStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetLedStatus_Request(type):
    """Metaclass of message 'SetLedStatus_Request'."""

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
                'mecanumbot_msgs.srv.SetLedStatus_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_led_status__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_led_status__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_led_status__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_led_status__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_led_status__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetLedStatus_Request(metaclass=Metaclass_SetLedStatus_Request):
    """Message class 'SetLedStatus_Request'."""

    __slots__ = [
        '_fl_mode',
        '_fl_color',
        '_fr_mode',
        '_fr_color',
        '_br_mode',
        '_br_color',
        '_bl_mode',
        '_bl_color',
    ]

    _fields_and_field_types = {
        'fl_mode': 'int8',
        'fl_color': 'int8',
        'fr_mode': 'int8',
        'fr_color': 'int8',
        'br_mode': 'int8',
        'br_color': 'int8',
        'bl_mode': 'int8',
        'bl_color': 'int8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.fl_mode = kwargs.get('fl_mode', int())
        self.fl_color = kwargs.get('fl_color', int())
        self.fr_mode = kwargs.get('fr_mode', int())
        self.fr_color = kwargs.get('fr_color', int())
        self.br_mode = kwargs.get('br_mode', int())
        self.br_color = kwargs.get('br_color', int())
        self.bl_mode = kwargs.get('bl_mode', int())
        self.bl_color = kwargs.get('bl_color', int())

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
        if self.fl_mode != other.fl_mode:
            return False
        if self.fl_color != other.fl_color:
            return False
        if self.fr_mode != other.fr_mode:
            return False
        if self.fr_color != other.fr_color:
            return False
        if self.br_mode != other.br_mode:
            return False
        if self.br_color != other.br_color:
            return False
        if self.bl_mode != other.bl_mode:
            return False
        if self.bl_color != other.bl_color:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def fl_mode(self):
        """Message field 'fl_mode'."""
        return self._fl_mode

    @fl_mode.setter
    def fl_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'fl_mode' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'fl_mode' field must be an integer in [-128, 127]"
        self._fl_mode = value

    @builtins.property
    def fl_color(self):
        """Message field 'fl_color'."""
        return self._fl_color

    @fl_color.setter
    def fl_color(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'fl_color' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'fl_color' field must be an integer in [-128, 127]"
        self._fl_color = value

    @builtins.property
    def fr_mode(self):
        """Message field 'fr_mode'."""
        return self._fr_mode

    @fr_mode.setter
    def fr_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'fr_mode' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'fr_mode' field must be an integer in [-128, 127]"
        self._fr_mode = value

    @builtins.property
    def fr_color(self):
        """Message field 'fr_color'."""
        return self._fr_color

    @fr_color.setter
    def fr_color(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'fr_color' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'fr_color' field must be an integer in [-128, 127]"
        self._fr_color = value

    @builtins.property
    def br_mode(self):
        """Message field 'br_mode'."""
        return self._br_mode

    @br_mode.setter
    def br_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'br_mode' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'br_mode' field must be an integer in [-128, 127]"
        self._br_mode = value

    @builtins.property
    def br_color(self):
        """Message field 'br_color'."""
        return self._br_color

    @br_color.setter
    def br_color(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'br_color' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'br_color' field must be an integer in [-128, 127]"
        self._br_color = value

    @builtins.property
    def bl_mode(self):
        """Message field 'bl_mode'."""
        return self._bl_mode

    @bl_mode.setter
    def bl_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bl_mode' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'bl_mode' field must be an integer in [-128, 127]"
        self._bl_mode = value

    @builtins.property
    def bl_color(self):
        """Message field 'bl_color'."""
        return self._bl_color

    @bl_color.setter
    def bl_color(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bl_color' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'bl_color' field must be an integer in [-128, 127]"
        self._bl_color = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetLedStatus_Response(type):
    """Metaclass of message 'SetLedStatus_Response'."""

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
                'mecanumbot_msgs.srv.SetLedStatus_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_led_status__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_led_status__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_led_status__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_led_status__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_led_status__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetLedStatus_Response(metaclass=Metaclass_SetLedStatus_Response):
    """Message class 'SetLedStatus_Response'."""

    __slots__ = [
        '_success',
        '_message',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.message = kwargs.get('message', str())

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
        if self.message != other.message:
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

    @builtins.property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value


class Metaclass_SetLedStatus(type):
    """Metaclass of service 'SetLedStatus'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mecanumbot_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mecanumbot_msgs.srv.SetLedStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_led_status

            from mecanumbot_msgs.srv import _set_led_status
            if _set_led_status.Metaclass_SetLedStatus_Request._TYPE_SUPPORT is None:
                _set_led_status.Metaclass_SetLedStatus_Request.__import_type_support__()
            if _set_led_status.Metaclass_SetLedStatus_Response._TYPE_SUPPORT is None:
                _set_led_status.Metaclass_SetLedStatus_Response.__import_type_support__()


class SetLedStatus(metaclass=Metaclass_SetLedStatus):
    from mecanumbot_msgs.srv._set_led_status import SetLedStatus_Request as Request
    from mecanumbot_msgs.srv._set_led_status import SetLedStatus_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
