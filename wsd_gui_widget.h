#ifndef WSD_GUI_WIDGET_H
#define WSD_GUI_WIDGET_H

#include <QWidget>

namespace Ui {
class WSD_GUI_Widget;
}

class WSD_GUI_Widget : public QWidget
{
    Q_OBJECT
    
public:
    explicit WSD_GUI_Widget(QWidget *parent = 0);
    ~WSD_GUI_Widget();
    
private:
    Ui::WSD_GUI_Widget *ui;
};

#endif // WSD_GUI_WIDGET_H
