#ifndef DHTFEXP_GLOBAL_H
#define DHTFEXP_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(DHTFEXP_LIBRARY)
#  define DHTFEXPSHARED_EXPORT Q_DECL_EXPORT
#else
#  define DHTFEXPSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // VECTORGRADIENTWITHSWAPEXP_GLOBAL_H
