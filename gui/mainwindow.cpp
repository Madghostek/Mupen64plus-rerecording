#include <QtWidgets>
#include "mainwindow.h"

MainWindow::MainWindow()
{
    createActions();
    createMenus();
    //QString message = tr("A context menu is available by right-clicking");
    setMinimumSize(160, 160);
    resize(640, 480);
}

#ifndef QT_NO_CONTEXTMENU
void MainWindow::contextMenuEvent(QContextMenuEvent *event)
{
    QMenu menu(this);
    menu.exec(event->globalPos());
}
#endif
void MainWindow::createActions()
{
    loadRomAct = new QAction(tr("&Load ROM..."), this);
    closeRomAct = new QAction(tr("&Close ROM"), this);
    resetRomAct = new QAction(tr("&Reset ROM"), this);
    pauseAct = new QAction(tr("&Pause"), this);
    frameAdvanceAct = new QAction(tr("&Frame Advance"), this);
}
void MainWindow::createMenus()
{
//! [9] //! [10]
    fileMenu = menuBar()->addMenu(tr("&File"));
    fileMenu->addAction(loadRomAct);
    fileMenu->addAction(closeRomAct);
    fileMenu->addAction(resetRomAct);
    emuMenu = menuBar()->addMenu(tr("&Emulation"));
    emuMenu->addAction(pauseAct);
    emuMenu->addAction(frameAdvanceAct);
    optionsMenu = menuBar()->addMenu(tr("&Options"));
    utilsMenu = menuBar()->addMenu(tr("&Utilities"));
    helpMenu = menuBar()->addMenu(tr("&Help"));
    luaMenu = menuBar()->addMenu(tr("&Lua Script"));
}
