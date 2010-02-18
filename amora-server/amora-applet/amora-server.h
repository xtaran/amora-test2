/*
 * Copyright (C) 2008-2010
 * Ademar de Souza Reis Jr. <ademar@ademar.org>
 * GPLv2+
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version
 * 2 of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See file COPYING for details.
 *
 */

#ifndef __AMORA_H__
#define __AMORA_H__

#include <QThread>

struct amora_s;

class Amora : public QThread
{
    Q_OBJECT

public:
    Amora(int argc, char **argv);
    virtual ~Amora();

    void emitSignal(int change);

signals:
    void changeStatus(int change);

private:
    int _argc;
    char **_argv;
    struct amora_s *amora;
    char *logfile;
    int bt_hci;
    int bt_channel;

    void run(void);
    void parse_args(int argc, char *argv[]);
    void show_usage(const char *path);

    Q_DISABLE_COPY(Amora);
};

#endif
