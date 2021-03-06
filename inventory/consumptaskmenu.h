#ifndef CONSUMPTASKMENU_H
#define CONSUMPTASKMENU_H

#include "include.h"
#include "consumptask.h"
#include "consumptaskcreate.h"


class ConsumpTaskMenu : public QMainWindow
{
    Q_OBJECT
public:
    explicit ConsumpTaskMenu(QWidget *parent = nullptr,int key=0);

    void resizeEvent(QResizeEvent *event);
    void objectGeometry();

    bool deleteData(QString pri_id);


    QTableView *taskMenu;
    TableModel table;
    QLabel* pageTitle;

    QPushButton *createBtn;
    QPushButton *deleteBtn;
    QPushButton *editBtn;
    QPushButton *menuBtn;

    QDomElement root;

    ConsumpTaskCreate *createTaskView;
    bool permission[3];

    void interface();


    int userKey;
    int width;
    int height;

signals:

public slots:

    void menuShow();
    void deleteConfirm();
    void editShow();
    void createShow();
    void rowSelected(const QModelIndex & index);
};

#endif // CONSUMPTASKMENU_H
