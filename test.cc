#include<iostream>
#include<string>
#include<vector>
#include<iterator>


using std::string;
using std::vector;
using std::cout;
using std::cin;
using std::endl;

void elimDups(vector<string> &words);

/**/
/**/

template <typename T>
void swap(T &a,T &b){
    auto temp = a;
    a = b;
    b = temp;
}

int main(int argc,char *argv[]){
    vector<int> a={4,2,7,1,3};

    for(size_t i = 0;i < a.size();++i){
        for(size_t k = 0;k < i;++k){
            if(a[k] > a[k+1]){
                swap(a[k],a[k+1]);
            }
        }
    }

    for(auto i: a){
        cout << i << endl;
    }
}

void elimDups(vector<string> &words)
{
    // sort words alphabetically so we can find the duplicates
    sort(words.begin(),words.end());
    // unique reorders the input range so that each word appears once
    // in the front portion of the range and return iterator one past
    // the unique range
    auto end_unique = unique(words.begin(),words.end());
    // erase uses a vector operation to remove the nonunique elements;
    words.earse(end_unique,words.end());
}
