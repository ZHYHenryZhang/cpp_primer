/* for cpp experiments
 * started by HenryZhang
 */

#include <iostream>
#include <map>
#include <vector>

using namespace std;

void mapbasic()
{
    map<int, int> pcl;
    map<int, int>::iterator itr;
    pcl.insert(pair< int, int>( 1, 10));
    pcl.insert(pair< int, int>( 2, 20));
    for (itr = pcl.begin(); itr != pcl.end(); itr++){
        std::cout << itr->first << itr->second << std::endl;
    }
    std::cout << pcl.at(1) << std::endl;
}

template<class T>
map<int, map<int, vector<T> > > creat_map(int imax, int jmax)
{
    map<int, map<int, vector<T> > > pcl;
    for ( int i=0; i < imax; i++)
    {
        map<int, vector<T> > x1;
        pcl.insert(pair<int, map<int, vector<T> > >(i, x1));
        for( int j = 0; j < jmax; j++)
        {
            vector<T> y11;
            pcl.at(i).insert(pair<int, vector<T> >(j, y11));
        }
    }
    return pcl;
}

void stlmap()
{
    /*
    map<int, map<int, vector<int> > > pcl; //error: ‘>>’ should be ‘> >’ within a nested template argument list
    
    map<int, vector<int> > x1;
    map<int, vector<int> > x2;
    map<int, vector<int> > x3;
    map<int, vector<int> > x4;
    
    vector<int> y11;
    vector<int> y12;
    vector<int> y13;
    vector<int> y14;
    vector<int> y21;
    vector<int> y22;
    vector<int> y23;
    vector<int> y24;
    vector<int> y31;
    vector<int> y32;
    vector<int> y33;
    vector<int> y34;
    vector<int> y41;
    vector<int> y42;
    vector<int> y43;
    vector<int> y44;
    pcl.insert(pair<int, map<int, vector<int> > >(0, x1));
    pcl.insert(pair<int, map<int, vector<int> > >(1, x2));
    pcl.insert(pair<int, map<int, vector<int> > >(2, x3));
    pcl.insert(pair<int, map<int, vector<int> > >(3, x4));
    pcl.at(0).insert(pair<int, vector<int> >(0, y11));
    pcl.at(0).insert(pair<int, vector<int> >(1, y12));
    pcl.at(0).insert(pair<int, vector<int> >(2, y13));
    pcl.at(0).insert(pair<int, vector<int> >(3, y14));
    pcl.at(1).insert(pair<int, vector<int> >(0, y21));
    pcl.at(1).insert(pair<int, vector<int> >(1, y22));
    pcl.at(1).insert(pair<int, vector<int> >(2, y23));
    pcl.at(1).insert(pair<int, vector<int> >(3, y24));
    pcl.at(2).insert(pair<int, vector<int> >(0, y31));
    pcl.at(2).insert(pair<int, vector<int> >(1, y32));
    pcl.at(2).insert(pair<int, vector<int> >(2, y33));
    pcl.at(2).insert(pair<int, vector<int> >(3, y34));
    pcl.at(3).insert(pair<int, vector<int> >(0, y41));
    pcl.at(3).insert(pair<int, vector<int> >(1, y42));
    pcl.at(3).insert(pair<int, vector<int> >(2, y43));
    pcl.at(3).insert(pair<int, vector<int> >(3, y44));
    */

    map<int, map<int, vector<int> > > pcl = creat_map<int>( 4, 4);
    map<int, map<int, vector<int> > >::iterator itr;
    map<int, vector<int> >::iterator its;
    
    vector<int> num{0, 1, 2, 3, 4, 5, 6, 7, 33, 34, 35, 36, 37 , 38, 39, 40, 41, 42, 43}; //error: in C++98 ‘num’ must be initialized by constructor, not by ‘{...}’ 
    //vector<int> num = {1, 2, 3, 4, 5, 6, 7};
    vector<int>::iterator itl;
    for(itl = num.begin(); itl != num.end(); itl++)
    {
        int i = *itl / 4 % 4;
        // int i = itl / 4;no match for ‘operator/’ (operand types are ‘std::vector<int>::iterator {aka __gnu_cxx::__normal_iterator<int*, std::vector<int> >}’ and ‘int’)
        int j = *itl % 4;
        pcl.at(i).at(j).push_back(*itl);
    }
    
    // print
    for(itr = pcl.begin(); itr!=pcl.end(); itr++)
    {
        for (its = itr->second.begin(); its != itr->second.end(); its++)
        {
            for (itl = its->second.begin(); itl != its->second.end(); itl++)
            {
                std::cout << *itl << " " ;
            }
            std::cout << std::endl;
        }
    }
}


int main( int argc, char ** argv)
{
    stlmap();
}