#include<iostream>

using namespace std;


class foobar {
	public:
		foobar() { cout << "foobar::foobar()\n"; }
		~foobar() { cout << "foobar::~foobar()\n"; }

		foobar( const foobar &rhs )
		{ cout << "foobar::foobar( const foobar & )\n"; }

		foobar& operator=( const foobar &rhs )
		{ cout << "foobar::operator=( const foobar & )\n"; }

		void ival( int nval ) { _ival = nval; }
	private:
		int _ival;
};

foobar f( int val ) {
	foobar local;
	local.ival( val );
	return local;
}

int main(){
	foobar ml = f( 1024 );
	return 0;
}
