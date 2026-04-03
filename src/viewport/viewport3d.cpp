#include "viewport3d.h"

#include <QColor>
#include <QVector3D>
#include <QVBoxLayout>

#include <Qt3DCore/QTransform>
#include <Qt3DRender/QCamera>
#include <Qt3DRender/QCameraLens>
#include <Qt3DRender/QPointLight>
#include <Qt3DExtras/QCuboidMesh>
#include <Qt3DExtras/QOrbitCameraController>
#include <Qt3DExtras/QPhongMaterial>

Viewport3D::Viewport3D(QWidget *parent)
    : QWidget(parent)
{
    // 创建 Qt3D 窗口并嵌入到 QWidget 中
    m_view = new Qt3DExtras::Qt3DWindow();                      // 创建 Qt3D 窗口
    m_container = QWidget::createWindowContainer(m_view, this); // 将 Qt3D 窗口嵌入到 QWidget 中
    m_container->setFocusPolicy(Qt::StrongFocus);               // 设置焦点策略以接受键盘输入

    // 使用 QVBoxLayout 布局管理器将 Qt3D 窗口添加到 QWidget 中
    auto *layout = new QVBoxLayout(this);
    layout->setContentsMargins(0, 0, 0, 0);
    layout->addWidget(m_container);

    // 设置 Qt3D 场景
    m_rootEntity = new Qt3DCore::QEntity();

    // 创建一个立方体实体(仅测试用)
    auto *cubeEntity = new Qt3DCore::QEntity(m_rootEntity);
    auto *cubeMesh = new Qt3DExtras::QCuboidMesh(cubeEntity);
    auto *cubeTransform = new Qt3DCore::QTransform(cubeEntity);
    cubeTransform->setScale(2.0f);
    auto *cubeMaterial = new Qt3DExtras::QPhongMaterial(cubeEntity);
    cubeMaterial->setDiffuse(QColor(70, 130, 180));

    // 将组件添加到立方体实体中
    cubeEntity->addComponent(cubeMesh);
    cubeEntity->addComponent(cubeTransform);
    cubeEntity->addComponent(cubeMaterial);

    auto *lightEntity = new Qt3DCore::QEntity(m_rootEntity);
    auto *light = new Qt3DRender::QPointLight(lightEntity);
    light->setIntensity(1.0f);
    auto *lightTransform = new Qt3DCore::QTransform(lightEntity);
    lightTransform->setTranslation(QVector3D(10.0f, 10.0f, 10.0f));

    lightEntity->addComponent(light);
    lightEntity->addComponent(lightTransform);

    Qt3DRender::QCamera *camera = m_view->camera();
    camera->lens()->setPerspectiveProjection(45.0f, 16.0f / 9.0f, 0.1f, 1000.0f);
    camera->setPosition(QVector3D(0.0f, 0.0f, 15.0f));
    camera->setViewCenter(QVector3D(0.0f, 0.0f, 0.0f));

    auto *cameraController = new Qt3DExtras::QOrbitCameraController(m_rootEntity);
    cameraController->setLinearSpeed(50.0f);
    cameraController->setLookSpeed(180.0f);
    cameraController->setCamera(camera);

    m_view->setRootEntity(m_rootEntity);
}
