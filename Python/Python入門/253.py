import sys
import traceback
try:
    f = open("temp.txt","r")
except IOError:
    error_type, error_value, traceback_ = sys.exc_info()
    tb_list = traceback.format_tb(traceback_)
    print(error_type)
    print(error_value)
    print(tb_list)
