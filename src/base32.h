
#ifndef BASE32__H
#define BASE32__H

#include "apdlns.h"

#include <QFile>
#include <QTextStream>


APDLNS_(Base32)

extern void encode_qba(const QByteArray& qba, QString& result);
extern void decode_qstring(QString text, QByteArray& result);

_APDLNS(Base32)


#endif

