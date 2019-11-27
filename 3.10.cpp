#include<iostream>
#include<string>
using namespace std;
class Invoice
{
	public:
		Invoice(std::string pn, std::string pd, int qnt, int prc):
			VAT{0.2};
			discount{0.0}
			{
				setPartNumber(pn);
				setPartDescription(pd);
				setQuantity(qnt);
				setItemPrice(prc);
			}
			void setPartNumber(std::string pn)
			{
				partNumber=pn;
			}
			void setPartDescription(std::string pd)
			{
				partDescription=pd;
			}
			void setQuantity(int qnt)
			{
				if(qnt<0)
				quantity=0;
				if(qnt>=0)
				quantity=qnt;
			}
			void setItemPrice(int prc)
			{
				if(prc<0)
				itemPrice=0;
				if(prc>=0)
				itemPrice=prc;
			}
			void setVAT(double tax)
			{
				if(tax<0)
				VAT=0.0;
				if(tax>=0)
				VAT=tax;
			}
			void setDiscount(double disc)
			{
				if(dsc<0)
				discount=0.0;
				if(dsc>=0) 
				discount=dsc;
			}
			string getPartNumber(){
				return partNumber;
			}
			string getPartDescription(){
				return partDescription;
			}
			int getQuantity(){
				return quantity;
			}
			int getItemPrice(){
				return itemPrice;
			}
			double getVAT(){
				return VAT;
			}
			double getDiscount(){
				return discount;
			}
			double getInvoiceAmount(){
				return quantity*itemPrice*(1.0-VAT-discount);
			}
	private:
			string partNumber;
			string partDescription;
			int quantity;
			int itemPrice;
			double VAT;
			double discount;	
};
int main()
{
	Invoice invoice("K-1","Description",100, -42);
	cout<<"INITIAL INVOICE"<<"\nPart number:   "<<invoice.getPartNumber()<<"\nPart Description:   "<<invoice.getPartDescription()<<"\nQuantity:   "
	<<invoice.getQuantity()<<"\nItem price:   "<<invoice.getItemPrice()<<"\nVAT:   "<<invoice.getVAT()<<"\nSicount rate:   "<<invoice.getDiscount()
	<<"\nInvoice Amount:   "<<invoice.getInvoiceAmount()<<endl;
	invoice.setPartNumber("K-1H");
	invoice.setPartDescription("Modifien Description");
	invoice.setItemPrice(42);
	invoice.setVAT(0.15);
	invoice.setDiscount(0.05);
	cout<<"\nMODIFIED INVOICE"<<"\nPart number:   "<<invoice.getPartNumber()<<"\nPart description:   "<<invoice.getPartDescription()<<"\nQuantity:   "
	<<invoice.getQuantity()<<"\nItem price:   "<<invoice.getItemPrice()<<"\nVAT:   "<<invoice.getVAT()<<"\nDicount rate:   "<<invoice.getDiscount()
	<<"\nInvoice amount:   "<<invoice.getInvoiceAmount()<<endl;
	return 0;
}
