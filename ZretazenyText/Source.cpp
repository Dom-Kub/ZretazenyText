template<class T>
class ZretazenyZoznam
{
private:
	ZretazenyZoznam<T>*nasledujuciPrvok;
	T hodnota;
public:
	ZretazenyZoznam(T pHodnota){
		this->hodnota = pHodnota;
		this->nasledujuciPrvok = 0;
	};

	ZretazenyZoznam(T pHodnota, ZretazenyZoznam *nasledujuci){
		this->hodnota = pHodnota;
		this->nasledujuciPrvok = nasledujuci;
	};
	~ZretazenyZoznam();

	T DajHodnotu(){
		return this->hodnota;
	}

	void NapojNa(ZretazenyZoznam *nasledujuci){
		this->nasledujuciPrvok = nasledujuci;
	};
};

