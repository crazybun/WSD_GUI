#include "wsd_gui_widget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    WSD_GUI_Widget w;
    w.show();
    
    return a.exec();
}
