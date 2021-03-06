
#ifndef APDL_REPOSITORY_INFO__H
#define APDL_REPOSITORY_INFO__H

#include "apdlns.h"

#include "accessors.h"

#include <QString>
#include <QUrl>
#include <QTextStream>


APDLNS_(RefI)



class APDL_Repository_Info
{
 QUrl url_;
 QString repository_kind_;
 QStringList programming_languages_;
 QStringList comments_;
 QString build_folder_template_;

public:

 APDL__PASSKEY

 ACCESSORS(QUrl ,url)
 ACCESSORS(QString ,repository_kind)
 ACCESSORS__RGET(QStringList ,programming_languages)
 ACCESSORS__RGET(QStringList ,comments)
 ACCESSORS(QString ,build_folder_template)

 APDL_Repository_Info(_passkey);

   // // not explicit
 APDL_Repository_Info(QUrl url);

 void supply_report(QTextStream& qts) const;
 void supply_data(QByteArray& qba) const;
 void supply_data(QDataStream& qds) const;

 static void absorb_data(QDataStream& qds, APDL_Repository_Info& _this);
 friend void operator>>(QDataStream& qds, APDL_Repository_Info& _this)
 {
  APDL_Repository_Info::absorb_data(qds, _this);
 }

};

_APDLNS(RefI)


#endif
