1) Изначально мы создаем большой двумерный массив (к примеру 72 строки на 8 столбцов) и заполняем его нулями.
2) Поскольку мы не обращаем внимание на масть карты, то можем внести в нашу таблицу только значения карт, причем Вольта, Даму, Король и Туз мы вводим симолами V D K T соответственно.
3) Далее, для удобства, переприсвоим V = 11, D = 12, K = 13, T = 14, чтобы сохранить старшинство карт и удобнее ими пользоваться.
4) Теперь проверим в нулевой строке наличие тузов, то есть куда мы потенциально сможем набрать все карты по старшинству. Если мы его не нашли, значит нам необходимо освободить полностью место, куда мы сможем потом скинуть туз. Для этого нужно полностью раскидать один столбец среди остальных. 
5) Этот столбец вообще не должен содержать в себе тузов, поскольку их некуда будет кинуть, они старше всех остальных карт.
6) Если мы нашли такой столбец, то также нужно проверять, чтобы данный столбец, если идти снизу, не составлял неубывающую арифметическую последовательность. Если же это так, то тогда ДАЖЕ ЕСЛИ мы сможем разбросать предыдущие 7 карт по оставшимся столбцам, то мы не сможем откинуть эти 2 карты, так как они будут старше всех предыдущих.
7) В программе при перекладывании карт в какое-то место, мы пишем его вместо нуля, а на позицию, откуда мы только что убрали число - пишем нолик.
8) Также необходимо вначале проверить, что все нижние карты не одинаковые, поскольку в таком случае мы, естественно, не сможем ничего никуда кинуть и пасьянс не разрешится. 
