/****************************************************************************
** $Id: qt/examples/mdi/main.cpp   2.3.1   edited 2001-01-26 $
**
** Copyright (C) 1992-2000 Trolltech AS.  All rights reserved.
**
** This file is part of an example program for Qt.  This example
** program may be used, distributed and modified without limitation.
**
*****************************************************************************/

#include <qapplication.h>
#include "application.h"

int main( int argc, char ** argv ) {
    QApplication a( argc, argv );
    ApplicationWindow * mw = new ApplicationWindow();
    mw->setCaption( "Multiple Documents" );
    mw->show();
    a.connect( &a, SIGNAL(lastWindowClosed()), &a, SLOT(quit()) );
    int res = a.exec();
    return res;
}
