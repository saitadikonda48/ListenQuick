// qsqldriver.sip generated by MetaSIP
//
// This file is part of the QtSql Python extension module.
//
// Copyright (c) 2016 Riverbank Computing Limited <info@riverbankcomputing.com>
// 
// This file is part of PyQt4.
// 
// This file may be used under the terms of the GNU General Public License
// version 3.0 as published by the Free Software Foundation and appearing in
// the file LICENSE included in the packaging of this file.  Please review the
// following information to ensure the GNU General Public License version 3.0
// requirements will be met: http://www.gnu.org/copyleft/gpl.html.
// 
// If you do not wish to use this file under the terms of the GPL version 3.0
// then you may purchase a commercial license.  For more information contact
// info@riverbankcomputing.com.
// 
// This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
// WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.


class QSqlDriver : QObject
{
%TypeHeaderCode
#include <qsqldriver.h>
%End

%ConvertToSubClassCode
    static struct class_graph {
            const char *name;
            sipTypeDef **type;
            int yes, no;
        } graph[] = {
            {sipName_QSqlQueryModel,	&sipType_QSqlQueryModel,	3, 1},
            {sipName_QSqlRelationalDelegate,	&sipType_QSqlRelationalDelegate,	-1, 2},
            {sipName_QSqlDriver,	&sipType_QSqlDriver,	-1, -1},
            {sipName_QSqlTableModel,	&sipType_QSqlTableModel,	4, -1},
            {sipName_QSqlRelationalTableModel,	&sipType_QSqlRelationalTableModel,	-1, -1},
        };
    
        int i = 0;
    
        sipType = 0;
    
        do
        {
            struct class_graph *cg = &graph[i];
    
            if (cg->name != NULL && sipCpp->inherits(cg->name))
            {
                sipType = *cg->type;
                i = cg->yes;
            }
            else
                i = cg->no;
        }
        while (i >= 0);
%End

public:
    enum DriverFeature
    {
        Transactions,
        QuerySize,
        BLOB,
        Unicode,
        PreparedQueries,
        NamedPlaceholders,
        PositionalPlaceholders,
        LastInsertId,
        BatchOperations,
%If (Qt_4_3_0 -)
        SimpleLocking,
%End
%If (Qt_4_3_0 -)
        LowPrecisionNumbers,
%End
%If (Qt_4_4_0 -)
        EventNotifications,
%End
%If (Qt_4_4_0 -)
        FinishQuery,
%End
%If (Qt_4_4_0 -)
        MultipleResultSets,
%End
    };

    enum StatementType
    {
        WhereStatement,
        SelectStatement,
        UpdateStatement,
        InsertStatement,
        DeleteStatement,
    };

    enum IdentifierType
    {
        FieldName,
        TableName,
    };

    explicit QSqlDriver(QObject *parent /TransferThis/ = 0);
    virtual ~QSqlDriver();
    virtual bool isOpen() const;
    bool isOpenError() const;
    virtual bool beginTransaction() /ReleaseGIL/;
    virtual bool commitTransaction() /ReleaseGIL/;
    virtual bool rollbackTransaction() /ReleaseGIL/;
    virtual QStringList tables(QSql::TableType tableType) const;
    virtual QSqlIndex primaryIndex(const QString &tableName) const;
    virtual QSqlRecord record(const QString &tableName) const;
    virtual QString formatValue(const QSqlField &field, bool trimStrings = false) const;
    virtual QString escapeIdentifier(const QString &identifier, QSqlDriver::IdentifierType type) const;
    virtual QString sqlStatement(QSqlDriver::StatementType type, const QString &tableName, const QSqlRecord &rec, bool preparedStatement) const;
    QSqlError lastError() const;
    virtual QVariant handle() const;
    virtual bool hasFeature(QSqlDriver::DriverFeature f) const = 0;
    virtual void close() = 0;
    virtual QSqlResult *createResult() const = 0 /Factory/;
    virtual bool open(const QString &db, const QString &user = QString(), const QString &password = QString(), const QString &host = QString(), int port = -1, const QString &options = QString()) = 0 /ReleaseGIL/;

protected:
    virtual void setOpen(bool o);
    virtual void setOpenError(bool e);
    virtual void setLastError(const QSqlError &e);

public:
%If (Qt_5_0_0 -)
    virtual bool subscribeToNotification(const QString &name);
%End
%If (Qt_4_4_0 - Qt_5_0_0)
    bool subscribeToNotification(const QString &name);
%End
%If (Qt_5_0_0 -)
    virtual bool unsubscribeFromNotification(const QString &name);
%End
%If (Qt_4_4_0 - Qt_5_0_0)
    bool unsubscribeFromNotification(const QString &name);
%End
%If (Qt_5_0_0 -)
    virtual QStringList subscribedToNotifications() const;
%End
%If (Qt_4_4_0 - Qt_5_0_0)
    QStringList subscribedToNotifications() const;
%End
%If (Qt_5_0_0 -)

    enum NotificationSource
    {
        UnknownSource,
        SelfSource,
        OtherSource,
    };

%End

signals:
%If (Qt_4_4_0 -)
    void notification(const QString &name);
%End
%If (Qt_5_0_0 -)
    void notification(const QString &name, QSqlDriver::NotificationSource source, const QVariant &payload);
%End

protected slots:
%If (Qt_4_4_0 - Qt_5_0_0)
    bool subscribeToNotificationImplementation(const QString &name);
%End
%If (Qt_4_4_0 - Qt_5_0_0)
    bool unsubscribeFromNotificationImplementation(const QString &name);
%End
%If (Qt_4_4_0 - Qt_5_0_0)
    QStringList subscribedToNotificationsImplementation() const;
%End
%If (Qt_4_6_0 - Qt_5_0_0)
    bool isIdentifierEscapedImplementation(const QString &identifier, QSqlDriver::IdentifierType type) const;
%End
%If (Qt_4_6_0 - Qt_5_0_0)
    QString stripDelimitersImplementation(const QString &identifier, QSqlDriver::IdentifierType type) const;
%End

public:
%If (Qt_5_0_0 -)
    virtual bool isIdentifierEscaped(const QString &identifier, QSqlDriver::IdentifierType type) const;
%End
%If (Qt_4_6_0 - Qt_5_0_0)
    bool isIdentifierEscaped(const QString &identifier, QSqlDriver::IdentifierType type) const;
%End
%If (Qt_5_0_0 -)
    virtual QString stripDelimiters(const QString &identifier, QSqlDriver::IdentifierType type) const;
%End
%If (Qt_4_6_0 - Qt_5_0_0)
    QString stripDelimiters(const QString &identifier, QSqlDriver::IdentifierType type) const;
%End
%If (Qt_4_6_0 -)
    void setNumericalPrecisionPolicy(QSql::NumericalPrecisionPolicy precisionPolicy);
%End
%If (Qt_4_6_0 -)
    QSql::NumericalPrecisionPolicy numericalPrecisionPolicy() const;
%End

private:
    QSqlDriver(const QSqlDriver &);
};
