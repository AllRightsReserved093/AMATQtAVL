#pragma once

#include <QWidget>
#include <QString>
#include <QVector>

#include "airfoil.h"

struct WingData
{
    QString name;           // "Main Wing"
    // 机翼使用的翼型
    // 可以是多个翼型，分别对应不同的展段
    // 从根部到翼尖依次排列
    // 段数由 numSegments 决定，至少 1 段
    // 左右对称
    QVector<Airfoil> airfoil;
    int numSegments = 0;    // 展段数，至少 1
    double span = 0.0;      // 展长
    double rootChord = 0.0; // 根弦长
    double tipChord = 0.0;  // 梢弦长
    double sweep = 0.0;     // 后掠角，单位度
    double dihedral = 0.0;  // 上反角，单位度
};

class Wing : public QWidget
{
    Q_OBJECT
public:
    // 构造函数
    Wing();

    void setAirfoils(const QVector<Airfoil>& airfoils);
    void setNumSegments(int segments);
    void setSpan(double span);
    void setRootChord(double chord);
    void setTipChord(double chord);
    void setSweep(double sweep);
    void setDihedral(double dihedral);

private:
    WingData m_data;
};
