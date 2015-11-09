#ifndef FILECONFLICTCONTROLLER_H
#define FILECONFLICTCONTROLLER_H

#include <QObject>
#include <QString>
#include <dbusinterface/services/conflictdaptor.h>
#include <dbusinterface/dbustype.h>

class FileConflictController : public QObject
{
    Q_OBJECT
public:
    explicit FileConflictController(QObject *parent = 0);
    ~FileConflictController();
    void registerDBusService();
    void unRegisterDBusService();
    static int count;

    QString getObjectPath();

signals:

public slots:
    ConflictInfo AskSkip(const QString &primaryText, const QString &secondaryText, const QString &detailText, int flags);
    ConflictInfo ConflictDialog();

    void setJobDetail(const QMap<QString, QString>& detail);

public slots:

private:
    QMap<QString, QString> m_jobDetail;
    QString m_objectPath;
    ConflictAdaptor* m_conflictAdaptor=NULL;
};

#endif // FILECONFLICTCONTROLLER_H
