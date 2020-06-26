import math
import numpy as np
import sys
from PyQt5.QtWidgets import QApplication, QMainWindow
import DemoUi


def add_func(x, y):

    app = QApplication(sys.argv)
    myMainWindow = QMainWindow()
    myUi = DemoUi.Ui_MainWindow()
    myUi.setupUi(myMainWindow)
    myMainWindow.show()
    app.exec_()
    #sys.exit(app.exec_())

    a = math.sqrt(9)
    data = [[1, 2], [3, 4], [5, 6]]
    b = np.array(data)
    return x + y+2


if __name__ == '__main__':
    add_func(1,2)