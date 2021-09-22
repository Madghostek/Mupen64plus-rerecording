#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
class QAction;
class QActionGroup;
class QLabel;
class QMenu;
//namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow();

protected:
#ifndef QT_NO_CONTEXTMENU
    void contextMenuEvent(QContextMenuEvent *event) override;
#endif // QT_NO_CONTEXTMENU

/*private slots:
    void loadRom();
    void closeRom();
    void resetRom();
    void pause();
    void frameAdvance();
    void screenShot();
    void fullScreen();
    void romProp();
    void auditRoms();
    void ramStart();
    void about();
    void newInstance(); */

private:
    void createActions();
    void createMenus();
    QMenu *fileMenu;
    QMenu *emuMenu;
    QMenu *optionsMenu;
    QMenu *utilsMenu;
    QMenu *helpMenu;
    QMenu *luaMenu;
    QAction *loadRomAct;
    QAction *closeRomAct;
    QAction *resetRomAct;
    QAction *pauseAct;
    QAction *frameAdvanceAct;
    QAction *screenShotAct;
    QAction *fullScreenAct;
    QAction *romPropAct;
    QAction *auditRomsAct;
    QAction *ramStartAct;
    QAction *aboutAct;
    QAction *newInstanceAct;

};

#endif // MAINWINDOW_H
