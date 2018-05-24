
#include "apdl-repository-info.h"

#include "apdlns.h"

#include <QDataStream>


USING_APDLNS(RefI)

APDL_Repository_Info::APDL_Repository_Info(QUrl url)
  : url_(url)
{

}

APDL_Repository_Info::APDL_Repository_Info(_passkey)
{

}

void APDL_Repository_Info::supply_data(QByteArray& qba) const
{
 QDataStream qds(&qba, QIODevice::WriteOnly);

 qds << url_;
 qds << repository_kind_;
 qds << programming_languages_;
 qds << comments_;
 qds << build_folder_template_;
}

void APDL_Repository_Info::absorb_data(QDataStream& qds, APDL_Repository_Info& _this)
{
 qds >> _this.url_;
 qds >> _this.repository_kind_;
 qds >> _this.programming_languages_;
 qds >> _this.comments_;
 qds >> _this.build_folder_template_;
}



