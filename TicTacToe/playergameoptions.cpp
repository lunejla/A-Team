#include "playergameoptions.h"
#include "ui_playergameoptions.h"
#include "gameboard.h"
#include <QMessageBox>
#include "aiclass.h"

PlayerGameOptions::PlayerGameOptions(QWidget *parent) : QDialog(parent), ui(new Ui::PlayerGameOptions)
{
    ui->setupUi(this);
}

PlayerGameOptions::~PlayerGameOptions()
{
    delete ui;
}

void PlayerGameOptions::on_pushButton_clicked()
{
    //allows user to choose either X or O


    if(ui->playerGameOption->currentIndex()== 0)
    {
        //if default item is chosen in combo box
        QMessageBox :: information(this,tr("Game Information"),tr("Choose between X and O"));
    }
    else if(ui->playerGameOption->currentIndex() == 1)
    {
        //starts the game with player 1 as X and player2 as O
        AiClass pvpGame;
        pvpGame.AiBoard();
        pvpGame.settingAiLevel(0);
        close();
    }
    else if(ui->playerGameOption->currentIndex() == 2)
    {
        //starts the game with player 1 as O and player2 as X

        AiClass pvpGame;
        pvpGame.settingTurn();
        pvpGame.AiBoard();
        pvpGame.settingAiLevel(0);
        close();
    }
    else
    {
        //Exception handler
        QMessageBox :: information(this,tr("Game Information"),tr("Choose between X and O"));
    }

}

void PlayerGameOptions::on_playerOptionHelpButton_clicked()
{
    //Help button
    QMessageBox :: information(this,tr("help button"),tr("Choose to go either as X or O"));
}
