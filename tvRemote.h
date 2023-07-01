//
// Created by stas on 01.07.2023.
//
#pragma once

#ifndef SKILLBOX_C_PLUS_PLUS_37_TVREMOTE_H
#define SKILLBOX_C_PLUS_PLUS_37_TVREMOTE_H

#include <QMainWindow>
#include <QtWidgets/QLabel>

class TvRemoteMainWindow : public QMainWindow {
    Q_OBJECT

public:

    QLabel* label_2{};
    QLabel* label{};
    int volumeLevel{};

    explicit TvRemoteMainWindow(QWidget* parent);

    void UpDown(bool upDown) const;

    void PlusMinus(bool plusMinus);

public slots:

    void slot0() const;
    void slot1() const;
    void slot2() const;
    void slot3() const;
    void slot4() const;
    void slot5() const;
    void slot6() const;
    void slot7() const;
    void slot8() const;
    void slot9() const;
    void slotPlus();
    void slotMinus();
    void slotUp() const;
    void slotDown() const;
};

#endif //SKILLBOX_C_PLUS_PLUS_37_TVREMOTE_H
