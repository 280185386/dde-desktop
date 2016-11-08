/**
 * Copyright (C) 2016 Deepin Technology Co., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 **/

#pragma once

#include <QWidget>

#include "../interface/widget.h"

class FileWidget : public QWidget, public WidgetInterface
{
    Q_OBJECT
public:
    explicit FileWidget(QWidget *parent = 0);

signals:

public slots:
};

