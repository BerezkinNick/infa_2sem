#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int k;
    bool news;
    string name;
    bool f;

    struct speaker {
        speaker(string name, bool t ) : name(name), t(t){}
        string name;
        bool t;
    };

    vector<speaker> p;

    cin >> k >> news;
    for (int i = 0; i < k; i++){
        cin >> name >> f;
        p.push_back(speaker(name, f));
    }

    int d;
    cin >> d;
    int j = -1;
    int z = j % p.size();
    for (int i = 0; i < d; i++){
        j++;
        if (p.size() == 1)
        {goto s;
        }
        else  if (!p[z].t)
        {   if (!news)
                p[z].t = true;
            news = !news;
        }

        else if (p[z].t and !news)
        {p.erase(p.begin() + z);
            j--;
        }
    }
    s: for (int i = 0; i < p.size(); i++) {
    if (p[i].t)
        cout << p[i].name << ' ' << 1 << '\n';
    else cout << p[i].name << ' ' << 0 << '\n';
}
    return 0;
}