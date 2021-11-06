#include <QCoreApplication>
#include <QCoreApplication>
#include <QApplication>
#include <QApplication>
#include <QTextEdit>
#include <QComboBox>
#include <QDialogButtonBox>
#include<QDialog>
#include <QLineEdit>
#include <QWidget>
#include <QFormLayout>
#include<QObject>
#include <QPushButton>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    auto window = new QWidget ;
    window->setWindowTitle("Button");
    window->resize(400,400);
    auto nameEdit = new QLineEdit;
    auto companyEdit = new QLineEdit;
    auto phoneEdit = new QLineEdit;
    auto emailEdit = new QLineEdit;
    auto  problemEdit = new QLineEdit;
    auto summaryEdit = new QTextEdit;


    auto reproducibilityCombo = new QComboBox;
    reproducibilityCombo->addItem(("Always"));
    reproducibilityCombo->addItem(("Sometimes"));
    reproducibilityCombo->addItem(("Rarely"));

    auto buttonBox = new QDialogButtonBox;
    buttonBox->addButton(("Submit Bug Report"),QDialogButtonBox::AcceptRole);
    buttonBox->addButton(("Don't Submit"),QDialogButtonBox::RejectRole);
    buttonBox->addButton(QDialogButtonBox::Reset);


           auto layout = new QFormLayout;
           layout->addRow(("&Name:"), nameEdit);
           layout->addRow(("&Company:"), companyEdit);
           layout->addRow(("&Phone:"), phoneEdit);
           layout->addRow(("&Email:"), emailEdit);
           layout->addRow(("Problem &Title:"), problemEdit);
           layout->addRow(("&Summary Information:"),summaryEdit);
           layout->addRow(("&Reproducibility:"),reproducibilityCombo);


         //
           auto mainLayout = new QVBoxLayout;
           mainLayout->addLayout(layout);

           mainLayout->addWidget(buttonBox);
           window->setLayout(mainLayout);


           window-> setWindowTitle(("Report Bug"));

    window->show();
    return a.exec();
}
