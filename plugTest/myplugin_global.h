#ifndef PLUGTEST_GLOBAL_H
#define PLUGTEST_GLOBAL_H

#include <QtGlobal>

#if defined(MYPLUGIN_LIBRARY)
#  define MYPLUGINSHARED_EXPORT Q_DECL_EXPORT
#else
#  define MYPLUGINSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // PLUGTEST_GLOBAL_H
