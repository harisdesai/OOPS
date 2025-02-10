#include <iostream>
#include <string.h>
using namespace std;
class Book{
	private:
	   char* Title;
	   char* Author;
	   int page_count;
	   bool format_type;
	   float* chapter_pg;
	   int chapter_number;
	public:
		Book(){
			Title=new char[1];
			Title[0]='\0';
			Author=new char[1];
			Author[0]='\0';
			page_count=0;
			format_type=false;
			chapter_pg=NULL;
			chapter_number=0;
		}
		Book(const char* t, const char* a, int pages, bool format, float* chap_pg,int chap_num)
		{
			Title=new char[strlen(t)+1];
			strcpy(Title,t);
			
			Author=new char[strlen(a)+1];
			strcpy(Author,a);
			
			page_count=pages;
			format_type=format;
			chapter_pg= new float[chap_num];
			for (int i = 0; i < chap_num; i++) {
            chapter_pg[i] = page_count / float(chap_num);
        }
			chapter_number=chap_num;
		}
		Book(const Book &obj){
			Title=obj.Title;
			Author=obj.Author;
			page_count=obj.page_count;
			format_type=obj.format_type;
			chapter_pg=obj.chapter_pg;
			chapter_number=obj.chapter_number;
		}
		void setChapterpagecount(int x){
			page_count=x;
		}
		void getinfo(){
			cout<<"Book Name :"<<Title << endl; 
			cout<<"Author Name :"<<Author <<endl;
			cout<<"Page Count :"<<page_count<<endl;
			cout<<"Format type : ";
			if(format_type == 1){
				cout<<"Hardcover" <<endl;
			}
			else{
				cout<<"Softcover"<<endl;
			}
			cout<<"Chapter Pages :";
			for(int i=0;i<chapter_number;i++)
				cout<<chapter_pg[i];
			cout<<endl;
			cout<<"number of chapters :" <<chapter_number<<endl;
		}
};
int main() {
	Book b1;
	float arr[20]={10,11,12,13,14,15,16,17,18,19};
	Book b2("BOOK","Haris",121,true,arr,10);
	b2.getinfo();
}
