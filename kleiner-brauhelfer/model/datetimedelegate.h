#ifndef DATETIMEDELEGATE_H
#define DATETIMEDELEGATE_H

#include <QStyledItemDelegate>

class DateTimeDelegate : public QStyledItemDelegate
{
    Q_OBJECT

public:
    explicit DateTimeDelegate(bool expiredRed = false, bool readonly = false, QObject *parent = nullptr);
    QWidget* createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const Q_DECL_OVERRIDE;
    void setEditorData(QWidget *editor, const QModelIndex &index) const Q_DECL_OVERRIDE;
    void setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const Q_DECL_OVERRIDE;
    void updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option, const QModelIndex &index) const Q_DECL_OVERRIDE;
    void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const Q_DECL_OVERRIDE;
    QString displayText(const QVariant &value, const QLocale &locale) const Q_DECL_OVERRIDE;

private:
    bool mExpiredRed;
    bool mReadonly;
};

#endif // DATETIMEDELEGATE_H
