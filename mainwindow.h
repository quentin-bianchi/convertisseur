#include <QApplication>
#define CELCIUS_FARENHEIT 0
#define FARENHEIT_CELCIUS 1


#if QT_VERSION >= 0x050000
#include <QtWidgets> /* tous les widgets de Qt5 */
#else
#include <QtGui> /* tous les widgets de Qt4 */
#endif
#define BINAIRE_DECIMALE 2
#define DECIMALE_BINAIRE 3
class MaFenetre : public QDialog
{
    Q_OBJECT
    // Membre(s) public(s)
public:
    MaFenetre( QWidget *parent = 0 );
    // Membre(s) privé(s)
private:
    // Les widgets
    QLineEdit *valeur;
    QLabel *resultat;
    QLabel *unite;
    QComboBox *choixConversion;
    QPushButton *bConvertir;
    QPushButton *bQuitter;
    QDoubleValidator *doubleValidator;
    void afficherUnite();
    // Mécanisme(s) Qt
signals:
    void actualiser();
private slots:
    void convertir();
    void permuter();

} ;
