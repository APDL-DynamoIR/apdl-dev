
#include "base32.h"

#include <QRegularExpression>


APDLNS_(Base32)

typedef quint64 u64;

void encode_qba(const QByteArray& qba, QString& result)
{
 int s = qba.size();

 int remainder = s % 5;
 if(remainder != 0)
 {
  remainder = 5 - remainder;
 }

 for(int i = 0; i < s; i += 5)
 {
  u64 val = 0;
  memcpy(&val, qba.data() + i, 5);
  result += QString("%1").arg(val, 8, 32, QChar('0')); //?QString::number(val, 32);
 }
 switch(remainder)
 {
 case 0: result += "_"; break;
 case 1: result += "z"; break;
 case 2: result += "y"; break;
 case 3: result += "x"; break;
 case 4: result += "w"; break;
 }
}

void decode_qstring(QString text, QByteArray& result)
{
 int index = text.indexOf(QRegularExpression("[_wxyz]"));
 QString str;
 QChar remainder_code;

 if(index == -1)
 {
  str = text;
  remainder_code = '_';
 }
 else
 {
  str = text.left(index);
  remainder_code = text.at(index);
 }
 int s = str.size();
 for(int i = 0; i < s; i += 8)
 {
  QString c = str.mid(i, 8).toUpper();
  bool conversion_ok = false;
  QByteArray conv = c.toLatin1();
  u64 val = conv.toLongLong(&conversion_ok, 32);
  QByteArray qba(5, 0);
  memcpy(qba.data(), &val, 5);
  result.append(qba);
 }
 int remainder;
 switch(remainder_code.toLatin1())
 {
 case '_': remainder = 0; break;
 case 'z': remainder = 1; break;
 case 'y': remainder = 2; break;
 case 'x': remainder = 3; break;
 case 'w': remainder = 4; break;
 default: remainder = 0; // error?
 }

 result.chop(remainder);

}

_APDLNS(Base32)


