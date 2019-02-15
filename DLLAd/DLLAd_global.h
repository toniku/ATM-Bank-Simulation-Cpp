#ifndef DLLAD_GLOBAL_H
#define DLLAD_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(DLLAD_LIBRARY)
#  define DLLADSHARED_EXPORT Q_DECL_EXPORT
#else
#  define DLLADSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // DLLAD_GLOBAL_H
