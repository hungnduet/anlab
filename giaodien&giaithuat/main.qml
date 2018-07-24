import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.0
import Bai2 1.0
import Bai3 1.0
import Bai4 1.0
import Bai5 1.0
import Bai6 1.0
import Bai7 1.0

ApplicationWindow {
id: root
visible: true
width: 660
height: 400
title: qsTr("bt giao dien & giai thuat")
property int i: 0

//property int j: 0

Bai2
{
    id: idbai2
}
Bai3
{
    id: idbai3
}
Bai4
{
    id: idbai4
}
Bai5
{
    id: idbai5
}
Bai6
{
    id: idbai6
}
Bai7
{
    id: idbai7
}

Rectangle {
    id: mennu
    visible: true
    border.color: "green"
    width: 700
    height:  50

    Button {
        id:button2
        y:5
        text: "bai2"
        onClicked: {
            input.visible = true
            output.visible = true
            boxkq2.visible = true
            text2.visible = true
        }
    }
    Button {
        id:button3
        x:80
        y:5
        text: "bai3"
        onClicked: {
            input.visible = true
            output.visible = true
            boxkq3.visible = true
            text3.visible = true
        }
    }
    Button {
        id:button4
        x:160
        y:5
        text: "bai4"
        onClicked: {
            input.visible = true
            output.visible = true
            boxkq4.visible = true
            text4.visible = true
        }
    }
    Button {
        id:button5
        x:240
        y:5
        text: "bai5"
        onClicked: {
            input.visible = true
            output.visible = true
            boxkq5.visible = true
            text5.visible = true
        }
    }
    Button {
        id:button6
        x:320
        y:5
        text: "bai6"
        onClicked: {
            input.visible = true
            output.visible = true
            boxkq6.visible = true
            text6.visible = true
            input1.visible = true
            text6_.visible = true
        }
    }
    Button {
        id:button7
        x:400
        y:5
        text: "bai7"
        onClicked:
        {
            input.visible = true
            output.visible = true
            boxkq7.visible = true
            text7.visible = true
        }
    }

    Button {
        id:reset                //hiện tại nút reset này chỉ có tác dụng xoá trường
        x:560                   // em muốn hỏi có cách nào xoá được bộ nhớ đệm của input output
        y:5                     // để có thể chuyển sang bài khác tính toán luôn ko ạ
        text: "reset"
        onClicked: {
//            input2.visible = false
            input.clear()
//            output2.visible = false
            output.clear()
//            boxkq2.visible = false
            text2.visible = false
//            boxkq3.visible = false
            text3.visible = false
            text4.visible = false
            text5.visible = false
            text6.visible = false
            text6_.visible = false
            input1.visible = false
            text7.visible = false



        }
    }
}
Rectangle {
    id : background
    y: 60
    border.color: "blue"
    width: 700
    height: 340
    TextField {
        id: input
        x:300
        y:80
        visible: false
        placeholderText: qsTr("input in here")
    }
    Text {
        id: text2
        x:30
        y:80
        visible: false
        font.pointSize: 10
        text: qsTr("mời nhập 1 số ")
    }
    Button {
        id : boxkq2
        x : 300
        y : 160
        visible: false
        text : "ket qua"
        onClicked: {
            for(i;i< input.length;i++)
                           {
                               if(0<=input.text[i] && input.text[i]<=9 )  {
                                      output.text = idbai2.output(Number(input.text))
                                  }
                               else   {

                                   output.text = "error"; break;
                               }
                           }
        }
    }
    TextField {
        id: output
        x:300
        y:200
        visible: false
        placeholderText: qsTr("output in here")
    }
    Text {
        id: text3
        x:30
        y:80
        visible: false
        font.pointSize: 10
        text: qsTr("mời nhập 1 số phần tử trong dãy Fibonacci")
      }
    Button {
        id : boxkq3
        x : 300
        y : 160
        visible: false
        text : "ket qua"
        onClicked: {
            for(i;i< input.length;i++)
                           {
                               if(0<=input.text[i] && input.text[i]<=9 )  {
                                     output.text = idbai3.infibo(parseInt(input.text))
                                  }
                               else   {

                                   output.text = "error"; break;
                               }
                           }
        }
    }
    Text {
        id: text4
        x:30
        y:80
        visible: false
        font.pointSize: 10
        text: qsTr("mời bạn nhập 1 kí tự bất kì")
    }
    Button {
        id : boxkq4
        x : 300
        y : 160
        visible: false
        text : "ket qua"
        onClicked: {
           output.text = idbai4.output(input.text)
        }
    }
    Text {
        id: text5
        x:30
        y:80
        visible: false
        font.pointSize: 10
        text: qsTr("mời bạn nhập 1 kí tự ")
    }
    Button {
        id : boxkq5
        x : 300
        y : 160
        visible: false
        text : "ket qua"
        onClicked: {

          output.text = idbai5.inkitu(input.text);
//           output.text = idbai5.maAscci(input.text);

        }
    }
    Text {
        id: text6
        x:30
        y:100
        visible: false
        font.pointSize: 10
        text: qsTr("mời bạn nhập ")
    Text {
        id: text6_
        visible: false
        x:0
        y:-60
        font.pointSize: 10
        text: qsTr("nhập đơn vị nhiệt độ ( C or F )")
    }
    TextField {
        id: input1
        visible: false
        x:270
        y:-80
        placeholderText: qsTr("input in here")
    }
    }
    Button {
        id : boxkq6
        x : 300
        y : 160
        visible: false
        text : "ket qua"
        onClicked: {
           output.text = idbai6.convert((input1.text),input.text);

        }
    }
    Text {
        id: text7
        x:30
        y:80
        visible: false
        font.pointSize: 10
        text: qsTr("mời bạn nhập 1 câu: ")
    }
    Button {
        id : boxkq7
        x : 300
        y : 160
        visible: false
        text : "ket qua"
        onClicked: {

          output.text = idbai7.output(input.text);

        }
    }
}




}

