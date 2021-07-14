#include <iostream>

void executeStartupExternals(){
	system("$HOME/.config/polybar/launch.sh --material");
	system("$HOME/Patches/capslockFix/bootstrap.sh");
	system("xset b off");
	std::cout << "Commands executed\n";

}


int main(){
	executeStartupExternals();
	return 0;
}
