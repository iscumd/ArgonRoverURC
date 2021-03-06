# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from rover_manual/joystick.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class joystick(genpy.Message):
  _md5sum = "2638f5eded79bb441e076bbda419a866"
  _type = "rover_manual/joystick"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """bool A
bool B
bool X
bool Y
bool LB
bool RB
bool Back
bool Start
bool Guide
bool LS
bool RS

float32 LeftStick_LR
float32 LeftStick_UD
float32 RightStick_LR
float32 RightStick_UD
float32 LT
float32 RT
float32 DPad_LR
float32 DPad_UD"""
  __slots__ = ['A','B','X','Y','LB','RB','Back','Start','Guide','LS','RS','LeftStick_LR','LeftStick_UD','RightStick_LR','RightStick_UD','LT','RT','DPad_LR','DPad_UD']
  _slot_types = ['bool','bool','bool','bool','bool','bool','bool','bool','bool','bool','bool','float32','float32','float32','float32','float32','float32','float32','float32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       A,B,X,Y,LB,RB,Back,Start,Guide,LS,RS,LeftStick_LR,LeftStick_UD,RightStick_LR,RightStick_UD,LT,RT,DPad_LR,DPad_UD

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(joystick, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.A is None:
        self.A = False
      if self.B is None:
        self.B = False
      if self.X is None:
        self.X = False
      if self.Y is None:
        self.Y = False
      if self.LB is None:
        self.LB = False
      if self.RB is None:
        self.RB = False
      if self.Back is None:
        self.Back = False
      if self.Start is None:
        self.Start = False
      if self.Guide is None:
        self.Guide = False
      if self.LS is None:
        self.LS = False
      if self.RS is None:
        self.RS = False
      if self.LeftStick_LR is None:
        self.LeftStick_LR = 0.
      if self.LeftStick_UD is None:
        self.LeftStick_UD = 0.
      if self.RightStick_LR is None:
        self.RightStick_LR = 0.
      if self.RightStick_UD is None:
        self.RightStick_UD = 0.
      if self.LT is None:
        self.LT = 0.
      if self.RT is None:
        self.RT = 0.
      if self.DPad_LR is None:
        self.DPad_LR = 0.
      if self.DPad_UD is None:
        self.DPad_UD = 0.
    else:
      self.A = False
      self.B = False
      self.X = False
      self.Y = False
      self.LB = False
      self.RB = False
      self.Back = False
      self.Start = False
      self.Guide = False
      self.LS = False
      self.RS = False
      self.LeftStick_LR = 0.
      self.LeftStick_UD = 0.
      self.RightStick_LR = 0.
      self.RightStick_UD = 0.
      self.LT = 0.
      self.RT = 0.
      self.DPad_LR = 0.
      self.DPad_UD = 0.

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_11B8f().pack(_x.A, _x.B, _x.X, _x.Y, _x.LB, _x.RB, _x.Back, _x.Start, _x.Guide, _x.LS, _x.RS, _x.LeftStick_LR, _x.LeftStick_UD, _x.RightStick_LR, _x.RightStick_UD, _x.LT, _x.RT, _x.DPad_LR, _x.DPad_UD))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 43
      (_x.A, _x.B, _x.X, _x.Y, _x.LB, _x.RB, _x.Back, _x.Start, _x.Guide, _x.LS, _x.RS, _x.LeftStick_LR, _x.LeftStick_UD, _x.RightStick_LR, _x.RightStick_UD, _x.LT, _x.RT, _x.DPad_LR, _x.DPad_UD,) = _get_struct_11B8f().unpack(str[start:end])
      self.A = bool(self.A)
      self.B = bool(self.B)
      self.X = bool(self.X)
      self.Y = bool(self.Y)
      self.LB = bool(self.LB)
      self.RB = bool(self.RB)
      self.Back = bool(self.Back)
      self.Start = bool(self.Start)
      self.Guide = bool(self.Guide)
      self.LS = bool(self.LS)
      self.RS = bool(self.RS)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_11B8f().pack(_x.A, _x.B, _x.X, _x.Y, _x.LB, _x.RB, _x.Back, _x.Start, _x.Guide, _x.LS, _x.RS, _x.LeftStick_LR, _x.LeftStick_UD, _x.RightStick_LR, _x.RightStick_UD, _x.LT, _x.RT, _x.DPad_LR, _x.DPad_UD))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      _x = self
      start = end
      end += 43
      (_x.A, _x.B, _x.X, _x.Y, _x.LB, _x.RB, _x.Back, _x.Start, _x.Guide, _x.LS, _x.RS, _x.LeftStick_LR, _x.LeftStick_UD, _x.RightStick_LR, _x.RightStick_UD, _x.LT, _x.RT, _x.DPad_LR, _x.DPad_UD,) = _get_struct_11B8f().unpack(str[start:end])
      self.A = bool(self.A)
      self.B = bool(self.B)
      self.X = bool(self.X)
      self.Y = bool(self.Y)
      self.LB = bool(self.LB)
      self.RB = bool(self.RB)
      self.Back = bool(self.Back)
      self.Start = bool(self.Start)
      self.Guide = bool(self.Guide)
      self.LS = bool(self.LS)
      self.RS = bool(self.RS)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_11B8f = None
def _get_struct_11B8f():
    global _struct_11B8f
    if _struct_11B8f is None:
        _struct_11B8f = struct.Struct("<11B8f")
    return _struct_11B8f
