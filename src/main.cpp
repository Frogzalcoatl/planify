#include <QApplication>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
#include <QWidget>

// AI Generated template main func
int main(int argc, char* argv[]) {
    // 1. Manages application-wide resources and event handling
    QApplication app(argc, argv);

    // 2. Create the main window container
    QWidget window;
    window.setWindowTitle("My QT Project");
    window.resize(450, 300);

    // 3. Create a vertical layout to manage widget positioning
    QVBoxLayout* layout = new QVBoxLayout(&window);

    // 4. Add UI elements
    QLabel* titleLabel = new QLabel("Welcome to My QT Project!", &window);
    titleLabel->setAlignment(Qt::AlignCenter);
    titleLabel->setStyleSheet("font-size: 18px; font-weight: bold; color: #2C3E50;");

    QPushButton* button = new QPushButton("Get Started", &window);
    button->setStyleSheet("padding: 8px; font-size: 14px;");

    // 5. Connect the button's clicked signal to close the app (example of Signals & Slots)
    QObject::connect(button, &QPushButton::clicked, &app, &QApplication::quit);

    // 6. Add widgets to the layout
    layout->addWidget(titleLabel);
    layout->addWidget(button);

    // 7. Show the window on screen
    window.show();

    // 8. Start the Qt Event Loop (keeps the application open waiting for user events)
    return app.exec();
}