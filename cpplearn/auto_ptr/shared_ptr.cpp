#include<iostream>
#include<memory>
#include<vector>
using namespace std;

class StrBlob
{
    friend class StrBlobPtr;
    public:
    typedef std::vector<std::string>::size_type size_type; 
    StrBlob();
    StrBlob(std::initializer_list<std::string> li);
    size_type size() const{return data->size();}
    bool empty() const{return data->empty();}
    void push_back(const std::string &t){data->push_back(t);}
    void pop_back();
    std::string& front();
    std::string& back();
    StrBlobPtr begin() { return StrBlobPtr(*this); }
    StrBlobPtr end() { auto ret = StrBlobPtr(*this, data->size()); return ret; }

        
    private:
    std::shared_ptr<std::vector<string>> data;
    void check(size_type i, const std::string &msg) const;

};

class StrBlobPtr 
{
    public:
    StrBlobPtr():curr(0){}
    StrBlobPtr(StrBlob &a,size_t sz=0):wptr(a.data),curr(sz){}   
    std::string& deref() const;
    StrBlobPtr& incr();
    
    private:
    std::shared_ptr<std::vector<std::string>> check(std::size_t, const std::string&) const;
    std::weak_ptr<std::vector<std::string>> wptr;
    std::size_t curr;



};

StrBlob::StrBlob():data(make_shared<std::vector<string>>()){};
StrBlob::StrBlob(initializer_list<string> il):data(make_shared<vector<string>>(il)){ }

void StrBlob::check(size_type i, const std::string &msg)const
{
    if(i >= data->size()){throw out_of_range(msg);}
}

string &StrBlob::front()
{
    check(0, "front on empty StrBlob");
    return data->front();
}

string &StrBlob::back()
{
    check(0, "back on empty StrBlob");
    return data->back();
}

void StrBlob::pop_back()
{
    check(0, "pop_back on empty StrBlob");
    data->pop_back();
}


std::shared_ptr<std::vector<std::string>> StrBlobPtr:: check(std::size_t i, const std::string&msg) const
{
   auto ret=wptr.lock();
   if(!ret)
   {
    throw(std::runtime_error("unbound StrBlobPtr"));      
   } 
   if(i>=ret->size())
   {
    throw(std::out_of_range(msg));
    return ret;
   }
};

std::string& StrBlobPtr::deref() const
{
auto p=check(curr,"dereference past end");
return (*p)[curr];
}

StrBlobPtr&StrBlobPtr::incr()
{
check(curr,"increment past end of StrBlobPtr");
++ curr;
return *this;
}






int main()
{
    StrBlob b1;
    {
        StrBlob b2{"dada","rerekt","pgdgkkd"};
        b1=b2;
        b2.push_back("jjj");
    }
    cout<<b1.size()<<endl;
}