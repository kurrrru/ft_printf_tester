### 使用方法

1. このリポジトリをあなたの `ft_printf` ディレクトリにクローンしてください。
2. `ft_printf_tester` ディレクトリに移動します。
3. **Norm**のチェックを行うには、以下のコマンドを実行してください：
	```sh
	make norm
	```
4. **mandatory part**のテストを行うには、以下のコマンドを実行してください
	```sh
	make mandatory
	```
	必要に応じて、`tester.h` 内の `ft_printf.h` のパスを編集してください。
5. **bonus part**のテストを行うには、以下のコマンドを実行してください
	```sh
	make bonus
	```
	必要に応じて、`tester.h` 内の `ft_printf_bonus.h` のパスを編集してください。
6. `make all` または `make` を実行することで、上記の3つのテストを行うことができます。
	必要に応じて、`tester.h` 内の `ft_printf.h`, `ft_printf_bonus.h` のパスを編集してください。
