#include <bits/stdc++.h>

using namespace std;
#define int long long

class user
{
    int id;
    string name;
    string gmail;
    string password;
    vector<int>watched;
    vector<int>liked;
public:
    void display_name
    {
        cout<<name;
    }
    void add_to_watched(int movie_id)
    {

    }
    void add_to_liked(int movie_id)
    {

    }

    class movie{
        int movie_id;
        string title;
        int year ;
        int  review_count;




    };
    class system{
        vector<int>movie_list;
        vector<int>users_list;
        void search_movie(int movie_id)
        {

        }
        void add_movie (int movie_id)
        {
            movie_list.push(movie_id);
        }
        void register_user(int id,string name,string gmail,string password)
        {

        }
        void search_movie (int movie_id)
        {

        }
    };