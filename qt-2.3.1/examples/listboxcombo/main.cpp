/****************************************************************************
** $Id: qt/examples/listboxcombo/main.cpp   2.3.1   edited 2001-01-26 $
**
** Copyright (C) 1992-2000 Trolltech AS.  All rights reserved.
**
** This file is part of an example program for Qt.  This example
** program may be used, distributed and modified without limitation.
**
*****************************************************************************/

#include "listboxcombo.h"
#include <qapplication.h>

int main( int argc, char **argv )
{
    QApplication a( argc, argv );

    ListBoxCombo listboxcombo;
    listboxcombo.resize( 400, 270 );
    listboxcombo.setCaption( "Examples for Listboxes and Comboboxes" );
    a.setMainWidget( &listboxcombo );
    listboxcombo.show();

    return a.exec();
}
