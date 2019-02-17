#ifndef WDGBEWERTUNG_H
#define WDGBEWERTUNG_H

#include <QWidget>
#include <QDate>

namespace Ui {
class WdgBewertung;
}

class WdgBewertung : public QWidget
{
	Q_OBJECT

public:
    explicit WdgBewertung(int index, QWidget *parent = nullptr);
    ~WdgBewertung();
    bool eventFilter(QObject *obj, QEvent *e) Q_DECL_OVERRIDE;
    void setActive(bool active);
    bool isActive() const;

public slots:
    void updateValues();

signals:
    void clicked(int index);

private slots:
    void on_btnLoeschen_clicked();

private:
    QVariant data(const QString &fieldName) const;
    bool setData(const QString &fieldName, const QVariant &value);
    void mousePressEvent(QMouseEvent *e) Q_DECL_OVERRIDE;

private:
	Ui::WdgBewertung *ui;
    int mIndex;
    bool mActive;
};

#endif // WDGBEWERTUNG_H
