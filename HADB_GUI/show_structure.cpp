#include "show_structure.h"
#include "ui_show_structure.h"

Show_Structure::Show_Structure(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Show_Structure)
{
    ui->setupUi(this);
    movie->setScaledSize(QSize(425,720));
    ui->labelgif->setMovie(movie);
    movie->start();


}

Show_Structure::~Show_Structure()
{
    delete ui;
}
