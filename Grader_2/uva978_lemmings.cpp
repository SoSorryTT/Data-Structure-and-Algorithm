#include <bits/stdc++.h>

using namespace std;

typedef queue<int> qi;
typedef multiset<int, greater<int> > msi;
typedef multiset<int, greater<int> >::iterator msii;

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int test_cases;
	cin >> test_cases;

	while(test_cases--)
	{
		int blue_color;
		int green_color;
		int field;
		msi blue_power;
		msi green_power;

		cin >> field >> green_color >> blue_color;
		
		for(int i = 0; i < green_color; ++i) {
			int energy;
			cin >> energy;
			green_power.insert(energy);
		}

		for(int i = 0; i < blue_color; ++i) {
			int energy;
			cin >> energy;
			blue_power.insert(energy);
		}

		while(!blue_power.empty() && !green_power.empty()) {
			qi blue_fighters;
			qi green_fighters;
			int min_scale = min(field, (int)min(blue_power.size(), green_power.size()));
			
			for(int i = 0; i < min_scale; ++i) {
				msii Blue = blue_power.begin();
				msii Green = green_power.begin();

				blue_fighters.push(*Blue);
				green_fighters.push(*Green);

				blue_power.erase(Blue);
				green_power.erase(Green);
			}

			for(int i = 0; i < min_scale; ++i) {
				int Blue = blue_fighters.front();
				int Green = green_fighters.front();
			
				blue_fighters.pop();
				green_fighters.pop();
			
				if(Blue == Green) {
					continue;
				}
				if(Blue < Green) {
					green_power.insert(Green - Blue);
				}
				else {
					blue_power.insert(Blue - Green);
				}
			}
		}
		
		msii start;
		msii last;

		if(blue_power.empty() && green_power.empty()) {
			cout << "green and blue died\n";
			if(test_cases) {
				cout << "\n";
			}
			continue;
		}

		if(blue_power.empty()) {

			cout << "green wins\n";

			last = green_power.end();
			start = green_power.begin();
		}
		else {
			cout << "blue wins\n";

			last = blue_power.end();
			start = blue_power.begin();
		}
		
		for(msii i = start; i != last; ++i) {
			cout << *i << "\n";
		}
		if(test_cases) {
			cout << "\n";
		}
	}

	return 0;
}