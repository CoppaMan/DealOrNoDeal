#include <iostream>
#include <cmath>
#include <iostream>

#define MAX_CASES 26

using namespace std;

void permute(int* array, int size) {
	bool visited[size];
	for(int i = 0; i < size; i++) visited[i] = false;

	srand48(time(0));

	for(int i = 0; i < size; i++) {
		int next = std::floor(drand48()*size);
		while(visited[next]) next = (next+1) % size;
		array[i] = next;
		visited[next] = true;
	}
}

int main(int argc, char *argv[]) {

	int covered[MAX_CASES];
	for(int i = 0; i < MAX_CASES; i++) covered[i] = 1;

	double prizes[MAX_CASES];

	prizes[0] = 0.01; prizes[1] = 1;
	prizes[2] = 5; prizes[3] = 10;
	prizes[4] = 25; prizes[5] = 50;

	prizes[6] = 75; prizes[7] = 100;
	prizes[8] = 200; prizes[9] = 300;
	prizes[10] = 400; prizes[11] = 500;

	prizes[12] = 750; prizes[13] = 1000;
	prizes[14] = 5000; prizes[15] = 10000;
	prizes[16] = 25000; prizes[17] = 50000;

	prizes[18] = 75000; prizes[19] = 100000;
	prizes[20] = 200000; prizes[21] = 300000;
	prizes[22] = 400000; prizes[23] = 500000;

	prizes[24] = 750000; prizes[25] = 1000000;

	int sum = MAX_CASES;

	int permutation[MAX_CASES];
	permute(permutation, MAX_CASES);

	int selection;
	cout << "Select your prize case [1-" << MAX_CASES << "]:" << endl;
	cin >> selection;
	covered[permutation[selection]] = 0;

	for(int cases = MAX_CASES - 1; cases > 1; cases--) {
		printf("test[%i] = %i\n", i, test[i]);
	}
}