
#ifndef TEXTIO__H
#define TEXTIO__H

#include "apdlns.h"

#include <QFile>
#include <QTextStream>


APDLNS_(TextIO)


inline QString load_file(QString path)
{
 QString result;
 QFile infile(path);
 if (!infile.open(QIODevice::ReadOnly | QIODevice::Text))
   return result;
 QTextStream in_ts(&infile);
 result = in_ts.readAll();
 infile.close();
 return result;
}

inline void load_file(QString path, QString& result)
{
 QFile infile(path);
 if (!infile.open(QIODevice::ReadOnly | QIODevice::Text))
   return;
 QTextStream in_ts(&infile);
 result = in_ts.readAll();
 infile.close();
}

inline void load_file(QString path, QByteArray& contents)
{
 QFile infile(path);
 if (!infile.open(QIODevice::ReadOnly))
   return;
 contents = infile.readAll();
 infile.close();
}

inline void save_file(QString path, QByteArray& contents)
{
 QFile outfile(path);
 if (!outfile.open(QIODevice::WriteOnly))
   return;
 outfile.write(contents);
 outfile.close();
}

inline void save_file(QString path, QString text)
{
 QFile outfile(path);
 if (!outfile.open(QIODevice::WriteOnly | QIODevice::Text))
   return;
 QTextStream outstream(&outfile);
 outstream << text;
 outfile.close();
}

_APDLNS(TextIO)


#endif
