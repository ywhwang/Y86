/*
 *   Copyright (C) 2012 by Xiangyan Sun <wishstudio@gmail.com>
 *
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as
 *   published by the Free Software Foundation; either version 3, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details
 *
 *   You should have received a copy of the GNU General Public
 *   License along with this program; if not, write to the
 *   Free Software Foundation, Inc.,
 *   51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#ifndef HEXWIDGET_H
#define HEXWIDGET_H

#include <QWidget>
#include <QFont>

class HexWidget: public QWidget
{
    Q_OBJECT

public:
    HexWidget(QWidget *parent = 0);

    void paintEvent(QPaintEvent *);
    void setBits(int number);
    void setNumber(unsigned int number);
    void setShowChanges(bool showChanges);

private:
    QFont font;
    bool changed, showChanges;
    int w, h;
    unsigned int number;
    int bits;
};

#endif
