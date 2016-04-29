/*
 *  This file is part of Manjaro Settings Manager.
 *
 *  Ramon Buldó <ramon@manjaro.org>
 *
 *  Manjaro Settings Manager is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  Manjaro Settings Manager is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with Manjaro Settings Manager.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef PAGENOTIFICATIONS_H
#define PAGENOTIFICATIONS_H

#include "PageWidget.h"


namespace Ui
{
class PageNotifications;
}


class PageNotifications : public PageWidget
{
    Q_OBJECT

public:
    explicit PageNotifications( QWidget* parent = 0 );
    ~PageNotifications();

    void load();
    void save();

private:
    Ui::PageNotifications* ui;

protected slots:
    void unsupportedKernelStateBoxChanged( int );
    void newKernelStateBoxChanged( int );
};

#endif // PAGENOTIFICATIONS_H