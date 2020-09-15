/* 
 __  __            _                                
|  \/  | ___  _ __| |_ _   _        ___ _ __  _ __  
| |\/| |/ _ \| '__| __| | | |      / __| '_ \| '_ \ 
| |  | | (_) | |  | |_| |_| |  _  | (__| |_) | |_) |
|_|  |_|\___/|_|   \__|\__, | (_)  \___| .__/| .__/ 
                       |___/           |_|   |_|  
*/

// Include the Morty header file
#include "Morty.hpp"

namespace interdimensional{
	args parseArgs(int c, char** v){
		args ret;
		std::string dimen;
		ret.start = atoi(*(v+1));
		ret.stop = atoi(*(v+2));
		if(c==4){
			ret.step=1;
			dimen = *(v+3);
		}
		else if(c==5){
			ret.step=atoi(*(v+3));
			dimen = *(v+4);
		}
		else{
			
		}
		if(dimen.compare("Z286")==0){
			ret.dim = Z286;
		}else if(dimen.compare("C137")==0){
			ret.dim=C137;
		}else{
			ret.dim=UNKNOWN;
		}
		return ret;
	}
}

// =========================================================================== // 
//          Define functions enclosed in Namespace C137 here 
// =========================================================================== // 

namespace C137
{
	void Morty(int start, int stop, int step){
		std::cout << "Morty C137 says:" << std::endl;
		for(int i=start;i<=stop;i+=step){
			std::cout << i << ": ";
			if(i%3==0){
				std::cout << "Aww";
			}
			if(i%15==0){
				std::cout << " ";
			}
			if(i%5==0){
				std::cout << "Geez";
			}
			if(i%15==0){
				std::cout << " Man";
			}
			std::cout << std::endl;
		}
	}
	
	void Morty(int start, int stop){
		C137::Morty(start, stop, 1);
	}
}

// =========================================================================== // 
//          Define functions enclosed in Namespace Z286 here 
// =========================================================================== // 
namespace Z286{
	void Morty(int start, int stop, int step){
		std::cout << "Morty Z286 says:" << std::endl;
		for(int i=start;i<=stop;i+=step){
			std::cout << i << ": ";
			if(i%15==0){
				std::cout << "naM ";
			}
			if(i%5==0){
				std::cout << "zeeG";
			}
			if(i%15==0){
				std::cout << " ";
			}
			if(i%3==0){
				std::cout << "wwA";
			}
			std::cout << std::endl;
		}
	}
	
	void Morty(int start, int stop){
		Z286::Morty(start, stop, 1);
	}
}