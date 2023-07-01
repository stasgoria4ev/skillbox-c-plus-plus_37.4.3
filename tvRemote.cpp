//
// Created by stas on 01.07.2023.
//

#include "tvRemote.h"

[[maybe_unused]] QLabel* label_2 = nullptr;
[[maybe_unused]] QLabel* label = nullptr;
[[maybe_unused]] int volumeLevel = 0;

TvRemoteMainWindow::TvRemoteMainWindow(QWidget* parent): QMainWindow(parent) {
    parent = nullptr;
}

void TvRemoteMainWindow::UpDown(bool upDown) const {
    if (label_2->text() != "channel:") {
        QString numberText = "";
        for (int i = 8; i < label_2->text().length(); i++)
            numberText += label_2->text()[i];
        int number = numberText.toInt();
        if (upDown)
            number++;
        else if (number > 1)
            number--;
        numberText.setNum(number);
        label_2->setText("channel: " + numberText);
    }
}

void TvRemoteMainWindow::PlusMinus(bool plusMinus) {
    label->clear();
    if (plusMinus && volumeLevel < 50 ) {
        int counter = 50 * 10 / 100;//50-максимальная громкость
        volumeLevel += counter;
    } else if (!plusMinus && volumeLevel > 0 ) {
        int counter = 50 * 10 / 100;//
        volumeLevel -= counter;
    }
    QString volumeLevelText = "";
    volumeLevelText = ' ' + volumeLevelText.setNum(volumeLevel) + '%';
    label->setText("volume(max = 50):" + volumeLevelText);
}

void TvRemoteMainWindow::slot0() const {
    if (label_2->text() != "channel:")
        label_2->setText(label_2->text() + "0");
}
void TvRemoteMainWindow::slot1() const {
    label_2->clear();
    label_2->setText(label_2->text() + "channel: 1");
}
void TvRemoteMainWindow::slot2() const {
    label_2->clear();
    label_2->setText(label_2->text() + "channel: 2");
}
void TvRemoteMainWindow::slot3() const {
    label_2->clear();
    label_2->setText(label_2->text() + "channel: 3");
}
void TvRemoteMainWindow::slot4() const {
    label_2->clear();
    label_2->setText(label_2->text() + "channel: 4");
}
void TvRemoteMainWindow::slot5() const {
    label_2->clear();
    label_2->setText(label_2->text() + "channel: 5");
}
void TvRemoteMainWindow::slot6() const {
    label_2->clear();
    label_2->setText(label_2->text() + "channel: 6");
}
void TvRemoteMainWindow::slot7() const {
    label_2->clear();
    label_2->setText(label_2->text() + "channel: 7");
}
void TvRemoteMainWindow::slot8() const {
    label_2->clear();
    label_2->setText(label_2->text() + "channel: 8");
}
void TvRemoteMainWindow::slot9() const {
    label_2->clear();
    label_2->setText(label_2->text() + "channel: 9");
}
void TvRemoteMainWindow::slotPlus() {
    bool plusMinus = true;
    PlusMinus(plusMinus);
}
void TvRemoteMainWindow::slotMinus() {
    bool plusMinus = false;
    PlusMinus(plusMinus);
}
void TvRemoteMainWindow::slotUp() const {
    bool upDown = true;
    UpDown(upDown);
}
void TvRemoteMainWindow::slotDown() const {
    bool upDown = false;
    UpDown(upDown);
}