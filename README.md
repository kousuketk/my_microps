# my_microps
### step-1
- nullデバイス(dev)を作成し、devに対してテストデータを書き込む(dev->ops->transmit)
- nullデバイスは、プロトコル・スタックに渡す関数(net_input_handler)を呼び出す(今回はまだ)

### step-2
- step2.exeを実行しても、loopback_transmitで"segmentation fault"を引き起こしてしまう。理由はわからない。