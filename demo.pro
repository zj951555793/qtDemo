################################################################
# MyDemo Test
# Copyright (C) 20210710   Jason
#
################################################################
lessThan(QT_MAJOR_VERSION, 5) {
       error(Qt >= 5 required.)
}


TEMPLATE = subdirs
CONFIG   += ordered


SUBDIRS = \
    $$PWD/EchoPluginTest \
    $$PWD/qmlTest \


