// This file is part of the SpeedCrunch project
// Copyright (C) 2007 Ariya Hidayat <ariya@kde.org>
// Copyright (C) 2008-2009 Helder Correia <helder.pereira.correia@gmail.com>
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; see the file COPYING.  If not, write to
// the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
// Boston, MA 02110-1301, USA.

#include "gui/historydock.hxx"

#include "gui/historywidget.hxx"

#include <QtGui/QIcon>

struct HistoryDock::Private
{
    HistoryWidget * widget;
};

HistoryDock::HistoryDock( QWidget * parent )
    : QDockWidget( parent ), d( new HistoryDock::Private )
{
    d->widget = new HistoryWidget( this );
    setWidget( d->widget );

    setMinimumWidth( 200 );
    setAllowedAreas( Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea );
    setWindowIcon( QIcon() );

    retranslateText();
}

HistoryDock::~HistoryDock()
{
}

void HistoryDock::retranslateText()
{
    setWindowTitle( tr("History") );
    d->widget->setLayoutDirection( Qt::LeftToRight );
}

