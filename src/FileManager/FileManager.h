#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_FileManager.h"

class FileManager : public QMainWindow
{
    Q_OBJECT

public:
    FileManager(QWidget *parent = Q_NULLPTR);

private:
    Ui::FileManagerClass ui;
};
