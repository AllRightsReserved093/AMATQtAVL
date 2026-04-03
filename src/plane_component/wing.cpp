#include "wing.h"

#include <QtGlobal>

// --- Wing Implementation ---
Wing::Wing()
    : QWidget(nullptr)
{
}

// 设置翼型列表
void Wing::setAirfoils(const QVector<Airfoil>& airfoils)
{
    m_data.airfoil = airfoils;
}

// 设置展段数，至少为 1
void Wing::setNumSegments(int segments)
{
    m_data.numSegments = qMax(1, segments);
}

// 设置展长，必须为非负且有限值
void Wing::setSpan(double span)
{
    if (!qIsFinite(span)) {
        return;
    }
    m_data.span = qMax(0.0, span);
}

// 设置根弦长，必须为非负且有限值
void Wing::setRootChord(double chord)
{
    if (!qIsFinite(chord)) {
        return;
    }
    m_data.rootChord = qMax(0.0, chord);
}

// 设置梢弦长，必须为非负且有限值
void Wing::setTipChord(double chord)
{
    if (!qIsFinite(chord)) {
        return;
    }
    m_data.tipChord = qMax(0.0, chord);
}

// 设置后掠角（单位：度）
void Wing::setSweep(double sweep)
{
    if (!qIsFinite(sweep)) {
        return;
    }
    m_data.sweep = sweep;
}

// 设置上反角（单位：度）
void Wing::setDihedral(double dihedral)
{
    if (!qIsFinite(dihedral)) {
        return;
    }
    m_data.dihedral = dihedral;
}
