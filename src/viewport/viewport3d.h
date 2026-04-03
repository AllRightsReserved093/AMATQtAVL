#pragma once

#include <QWidget>

#include <Qt3DExtras/Qt3DWindow>
#include <Qt3DCore/QEntity>

class Viewport3D : public QWidget
{
    Q_OBJECT

public:
    explicit Viewport3D(QWidget *parent = nullptr);

private:
    Qt3DExtras::Qt3DWindow *m_view = nullptr;
    QWidget *m_container = nullptr;
    Qt3DCore::QEntity *m_rootEntity = nullptr;
};
