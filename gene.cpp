#include <iostream>
#include <cstdlib>
#include<math.h>
using namespace std;
int mutatepoint;
int count=0;
int gene_num=8;
int chro_num=4;
int gene[4][9];
int best1,best2;
int best1num,best2num;
int parent_chrom [2][8];
void print(){
	for(int i=0;i<4;i++){
	cout<<"Chromosome after mutate "<<i+1<<": ";			
		for(int j=0;j<8;j++){
			cout<<gene[i][j];	
					}
			cout<<"\n";
		}
			cout<<"\n";
}
void init_gen(){
	cout<<"initialize \n";
	for(int i=0;i<4;i++){
	cout<<"Chromosome "<<i+1<<": ";			
		for(int j=0;j<8;j++){
			gene[i][j]=rand()%2;
			cout<<gene[i][j];	
					}
			cout<<"\n";
		}
			cout<<"\n";
		}
	
void fitness(){	
	for(int j=0;j<8;j++){
		gene[j][8]=0;		
		}
	for(int i=0;i<4;i++){		
		for(int j=0;j<8;j++){
		gene[i][8]+=gene[i][j]*pow(2,7-j);
		}
		gene[i][8]=(gene[i][8]-5)*(gene[i][8]-7);		
		}
		cout<<"fitness "<<" \n";
		for(int i=0;i<4;i++){	
		cout<<gene[i][8]<<" \n";
		}
	}

void selection(){
best1=(256-5)*(256-7);
best2=(256-5)*(256-7); 
best1num=0;
best2num=0;
for(int i=0;i<chro_num;i++){
	if(gene[i][8]<best1)
		{
		 best1=gene[i][8];
		 best1num=i;
		}
	
}
for(int i=0;i<chro_num;i++){
	if(gene[i][8]<best2&&i!=best1num)
		{
		 best2=gene[i][8];
		 best2num=i;
		}	
}
cout<<"parent: "<<best1num+1<<" "<<best2num+1<<"\n";
		}
	
void crossover(){
	for(int i=0;i<8;i++){
		parent_chrom[0][i]=gene[best1num][i];
		parent_chrom[1][i]=gene[best2num][i];
			}
	for(int i=0;i<8;i++){
		gene[0][i]=parent_chrom[0][i];
		gene[1][i]=parent_chrom[1][i];
			}
	for(int i=0;i<4;i++){
			gene[2][i]=gene[0][i];
		}
	for(int i=4;i<8;i++){
			gene[2][i]=gene[1][i];
		}
		
	for(int i=0;i<4;i++){
			gene[3][i]=gene[1][i];
		}
	for(int i=4;i<8;i++){
			gene[3][i]=gene[0][i];
		}	
	
	for(int i=0;i<4;i++){
	cout<<"Chromosome after crossover "<<i+1<<": ";			
		for(int j=0;j<8;j++){
			cout<<gene[i][j];	
					}
			cout<<"\n";
		}
		cout<<"\n";
			
	}
				
void mutation(){	
		mutatepoint=rand()%8;
		gene[2][mutatepoint]=1-gene[2][mutatepoint];	
		mutatepoint=rand()%8;	
		gene[3][mutatepoint]=1-gene[3][mutatepoint];
}
int main() {
	cout<<"=======generation1=======\n";	
	init_gen();
	fitness();
	do{	
	cout<<"=======generation "<<count+2<<"=======\n";
	selection();
	crossover();
	fitness();
	cout<<"after mutate ";
	mutation();
	fitness();
	print();
	count++;
	}while(gene[0][8]!=-1&&gene[1][8]!=-1&&gene[2][8]!=-1&&gene[3][8]!=-1);		
	
	return 0;
	}



