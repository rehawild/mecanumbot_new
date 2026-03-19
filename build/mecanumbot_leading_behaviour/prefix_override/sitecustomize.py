import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/rehawild/Desktop/mecanumbot_new/install/mecanumbot_leading_behaviour'
