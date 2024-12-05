#include <stdio.h>
	int main(){
		int n;
		int choise;
		int a[100];
		int l;//length
		do{
			printf("\tMENU\n");
			printf("1. Nhap so phan tu va gia tri cho mang\n");
			printf("2. In ra gia tri cac phan tu trong mang theo dang(arr[0] = 1, arr[1] = 5)\n");
			printf("3. Dem so luong cac so hoan hao co trong mang. Biet so hoan hao la so co tong cac uoc bang chinh no\n");
			printf("4. Tim gia tri nho thu 2 trong mang, khong duoc sap xep mang\n");
			printf("5. Them mot phan tu vao vi tri dau tien trong  mang, phan tu moi them vao mang phai do nguoi dung nhap vao\n");
			printf("6. Xoa phan tu tai mot vi tri cu the (nguoi dung nhap vi tri)\n");
			printf("7. Sap xep mang theo thu tu giam dan (Selection sort)\n");
			printf("8. Tim kiem phan tu trong mang, phan tu tim kiem do nguoi dung nhap vao. Su dung thuat toan Binary search\n");
			printf("9. Sap xep lai mang va hien thi ra toan bo phan tu co trong mang sao cho toan bo so le dung truoc, so chan dung sau\n");
			printf("10. Dao nguoc thu tu cua cac phan tu co trong mang va hien thi ra toan bo phan tu co trong mang theo dang \n");
			printf("11. thoat\n");
			printf("chon thao tac cua ban: ");
			scanf("%d",&choise);
			printf("\n");
			
			switch(choise){
				case 1://Nhap so phan tu va gia tri cho mang
					printf("nhap do dai mang: ");
					scanf("%3d",&l);
					
					if (l>0){
						for (int i=0; i < l; i++){
							printf ("nhap mot so (%d): ",i);
							scanf ("%3d",&a[i]);
						}
					}else{
						printf("vui long thao tac lai\n");	
					}
					break;
				case 2://In ra gia tri cac phan tu trong mang theo dang
					if (l>0){
						for (int i=0; i < l; i++){
							printf ("%d ",a[i]);
						}
						printf("\n");
					}else{
						printf("vui long thao tac lai\n");	
					}
					break;
				case 3://Dem so luong cac so hoan hao co trong mang. Biet so hoan hao la so co tong cac uoc bang chinh no
					if (l>0){
						for (int i=0; i < l; i++){
							int sum = 0;//khai bao biem sum
							for(int j=1;j<=l/2;j++){
								if(a[i]%j==0){
									sum+=j;
									if(sum == a[i]){ // tra ve true
										printf("%d ",a[i]);
									}
								} 
							}
								
						}
						printf("\n");
					}else{
						printf("vui long thao tac lai\n");	
					}
					break;
				case 4://Tim gia tri nho thu 2 trong mang, khong duoc sap xep mang
					
					break;
				case 5://Them mot phan tu vao vi tri dau tien trong  mang, phan tu moi them vao mang phai do nguoi dung nhap vao
					if (l>0){
						int num;
						printf("nhap so ban muon them: ");
						scanf("%d",&num);
						for (int i=0; i < l; i++){
							a[i]=a[i+1];
						}
						printf("\n");
					}else{
						printf("vui long thao tac lai\n");	
					}
					break;
				case 6://Xoa phan tu tai mot vi tri cu the
					if (l>0){
						int xoa_phantu;
						do{
	                		printf("Nhap vi tri phan tu can xoa(0 den %d): ",l-1);
	                		scanf("%d", &xoa_phantu);
	               		 if(xoa_phantu>l){
	                		printf("moi ban nhap lai gia tri can xoa");
						}	
			    		}while(xoa_phantu>l);
	                		for(int i=xoa_phantu;i<l;i++){
	                		if(xoa_phantu==i){
	                		a[i]=a[i+1];
						}
					}
						l--;
						printf("mang sau khi xoa pha");
						for(int i=0;i<l;i++){
							printf("%d\t",a[i]);
						}
						printf("\n");
					}else{
						printf("vui long thao tac lai\n");	
					}
					break;
				case 7://Sap xep mang theo thu tu giam dan
						if(l>0){
							printf("Mang sau khi duoc sap xep: \n");
						for(int i=0;i<l-1;i++){
							for (int j=i+1;j<l;j++){
								if(a[i]<a[j]){
									int temp=a[i];
									a[i]=a[j];
									a[j]=temp;
								}
							}
						}
				for(int i=0;i<l;i++){
					printf("%d",a[i]);
					printf("\n");
				}
			
					}else{
						printf("vui long thao tac lai\n");	
					}
					break;
				case 8://Tim kiem phan tu trong mang, phan tu tim kiem do nguoi dung nhap vao.
					if (l>0){
						int cnt,t;
							printf("moi ban nhap vao gia tri can tim kiem");
							scanf("%d",&t);
						for(int i=0;i<l;i++){
							if(t==a[i]){
								printf("gia tri ban can tim nam o vi tri arr[%d]\n",i);
								cnt=1;
							}
						}
						if(cnt!=1){
							printf("gia tri ban can tim khong co trong mang\n");
						}
					}else{
						printf("vui long thao tac lai\n");	
					}
					break;
				case 9://Sap xep lai mang va hien thi ra toan bo phan tu co trong mang sao cho toan bo so le dung truoc, so chan dung sau
					break;
				case 10:
					break;
				case 11:
					printf("ban da thoat chuong trinh\n");
					break;
				default:
					printf("vui long thao tac lal\n");
		}
	}while(choise);
	return 0;
}

