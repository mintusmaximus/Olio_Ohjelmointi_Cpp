#include "myhttp.h"

Users::Users(QObject *parent)
    : QObject{parent}
{}

void Users::getUsers(int x)
{
    QString s = QString::number(x);
    QString site_url="https://reqres.in/api/users/"+s;
    qDebug()<<site_url;
    QNetworkRequest request((site_url));

    getManager = new QNetworkAccessManager(this);

    connect(getManager, SIGNAL(finished (QNetworkReply*)), this, SLOT(getUsersSlot(QNetworkReply*)));

    reply = getManager->get(request);
}

void Users::getUsersSlot(QNetworkReply *reply)
{
    qDebug()<<"SLOT";
    response_data = reply->readAll();
    qDebug()<<response_data;

    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonObject json_obj = json_doc.object();
    QJsonObject data_obj = json_obj["data"].toObject();

    QString first_name = data_obj["first_name"].toString();
    QString last_name = data_obj["last_name"].toString();

    qDebug()<<"Etunimi : "+first_name;
    qDebug()<<"Sukunimi : "+last_name;


    reply->deleteLater();
    getManager->deleteLater();
}
