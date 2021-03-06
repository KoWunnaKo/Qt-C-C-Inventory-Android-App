#ifndef STATEOPTION_H
#define STATEOPTION_H

#include "include.h"
#include "downloadstate.h"

class StateOption : public QMainWindow
{
    Q_OBJECT
public:
    explicit StateOption(QWidget *parent = nullptr,int key=0);
    void resizeEvent(QResizeEvent *event)override;
    void objectGeometry();
    QLabel* pageTitle;
    QTableView *taskMenu;
    DownloadStateModel table;

    QDomElement root;

    int userKey;
    int width;
    int height;

    void interface();

signals:

public slots:
};

#endif // GENERALOPTION_H
