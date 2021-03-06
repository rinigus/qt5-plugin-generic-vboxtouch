/****************************************************************************
**
** Copyright (c) 2019 Open Mobile Platform LLС
** Contact: Sergey Levin <s.levin@omprussia.ru>
**
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
****************************************************************************/

#ifndef ZOOMINDICATOR_H
#define ZOOMINDICATOR_H

#include <QtQuick/QQuickPaintedItem>
#include <QPoint>

class QPainter;

class ZoomIndicator : public QQuickPaintedItem
{
    Q_OBJECT

public:
    ZoomIndicator(QQuickItem *parent = 0);

    QPointF p1() const;
    QPointF p2() const;
    bool isActive() const;

    void paint(QPainter *painter) override;

    QPointF anchor() const;
    void setAnchor(const QPointF &anchor);
    void moveTo(const QPointF &position);
    void reset();

private:
    QPointF m_anchor;
    QPointF m_p1;
    QPointF m_p2;
};

#endif // ZOOMINDICATOR_H
