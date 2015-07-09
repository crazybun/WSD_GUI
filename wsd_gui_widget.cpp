#include "wsd_gui_widget.h"
#include "ui_wsd_gui_widget.h"

WSD_GUI_Widget::WSD_GUI_Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WSD_GUI_Widget)
{
    ui->setupUi(this);
}

WSD_GUI_Widget::~WSD_GUI_Widget()
{
    delete ui;
}
