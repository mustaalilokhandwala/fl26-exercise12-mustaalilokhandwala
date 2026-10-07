#include <QtTest/QtTest>
#include <QtWidgets>
#include <QDebug>

#include "toggle_widget.h"

class TestToggleWidget : public QObject {
  Q_OBJECT

private slots:

  // Define tests here
  void testToggle();
  
};

// Implement the tests here
void TestToggleWidget::testToggle()
{
  ToggleWidget w;
  QPushButton * pb = w.findChild<QPushButton *>();

  QVERIFY(pb != nullptr);
  QVERIFY(!w.isOn());

  QTest::mouseClick(pb, Qt::LeftButton);
  QVERIFY(w.isOn());

  QTest::mouseClick(pb, Qt::LeftButton);
  QVERIFY(!w.isOn());
}


QTEST_MAIN(TestToggleWidget)
#include "test_toggle_widget.moc"
