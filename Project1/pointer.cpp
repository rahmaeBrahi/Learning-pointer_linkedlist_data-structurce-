//#include <iostream>
//using namespace std;
//int main() {
////	int num = 100;
////	int* ptr = &num;
////	//بسمي ال pointer بتاعي بالاسم اللي يعجبني 
////	// if i make int*ptr=num that mean =100
////	// memory address فأنا عاوز ال
////	//& اسمها reference operator
//////int* ptr = num; عمل error
////// that pointer mean memory address of num
////
////	cout << ptr << endl;
////
////
////	cout << *ptr<< endl;
////	// هنا هجيب القيمة اللي ال address دابيشاور عليها
////	cout << *ptr + 100<<endl;
////	// dereference operator
////	// pointers of array
////	int nums[]{ 10,12,5,3 };
////	// how to reach to the first element in array 
////	int* pointer = &nums[0] ;
////	int* rahma = nums;
////	cout << pointer << endl;
////	cout << *pointer << endl;
////	cout << *rahma << endl;
////	// sec
////	cout << *(pointer + 1);
////	cout << pointer + 1;
////	//  ف كل مرة هيجيب عنوان في الاريي  هيكون زايد 4 ولو short يبقا هيزود 2
//	int* ptr1=NULL;// wild pointer
//	cout << ptr1<<endl;
//	// garbage value
//	// لو عملته NULL or nullptr هيبقا 000000
//	// لو انا لسه مش عارف نوع البيانات اللي هخلي البوينتر يشاور  عليها بحط قبله فويد
//	void* ptr2;
//	int a=12;
//	ptr2 = &a;
//	cout << ptr2;
//	// هنا هيطلع الادريس بس مش هيعرف يطلع القيمة 
//	/*cout << *ptr2;*/
//	//لحل المشكلة 
//	cout << *(int*)ptr2;
//	cout << *static_cast<int*>(ptr2);
//
//}

//#include<iostream>
//using namespace std;
//int main() {

	// just try 
	//int a = 10;
	//int* ptr = &a;
	//cout << *ptr;
	//void* p = &a;
	//cout << *(int*)p;
	//cout << *static_cast<int*>(p);
	// حركة صايعة 
	//	int nums[]{ 10,12,5,3 };
	//	int* ptr = nums;
	//	ptr++;
	//	cout << *ptr<<endl;
	//	// this is the second element 
	//
	//	// i want to reach to the last element 
	//	ptr += 2;
	//	cout << *ptr;
	//
	//}
	//Note : اسم الايريي في حد ذاته pointer لاول element
	//*nums: هترجع قيمة اول حاجة في الarray
	// *(nums+1) 

	/*float i;
	float* ptr;
	cin >> i;
	ptr =new float[i];
	cout << ptr<<endl;*/
	//طريقتين ف كتابة ال array اما static كدا 
	// واما dynamic 
	// int nums[5]  or int nums[]{1,2,3,4,5]  0r ومش هيقول لا int nums[5]{1,2,3,4,5};
	/*int nums[3]{1,2,3};
	cout << nums[0];*/
	// دلوقتي ال dynamic ال compiler مش بيعرف يتوصل لل heap ;
	// بنوصله عن طريق pointer يا حبيبي
	// الطريقة ال dynamic  ف كتابة الكود
	
	
	/*int i;
	cin >> i;*/
	/*float* ptr;
	ptr = new float [i];*/
	// اللي بعد كلمة new ببقا نوع ال ptr
	// ptr دا حاليا موجود ف ال stack  عشان ي access ال array which who in the heap . ptr carry the address of the array ;
	// لازم امسح الحاجات اللي موجودة ف الهيب اول بأول لانها مش  بتتمسح لوحدها 
	// وهنا هنوصلها ازاي بنفس ال pointer هو اللي هيحذفها 
	// delete []ptr
	// ومسمهاش انا انشأت array ف الهيب اسمها انا حجزت مساحة ف الهيب لكذا وبشاور عليها بكذا 
	// اي مساحة حجزناها ب new بنحذفها ب delete
	// adt datatype how you store the data and the operation you will make in it ;
	// get size not equal get length : 
	//الايري ممكن يستحمل قد ايه الايري  فيه عناصر قد ايه 


	//Or if you want an array of pointers to integers, you can do it like this:
	/*int* rahma[50];
	rahma[7] = new int[78];*/// الشكل دا مينفعش مينفعش ابقا حاطة سايز من الاساس وبعدين اعدل عليه 

	//If you want to dynamically allocate memory for an array of integers, you can use something like this:
	/*int* farah = new int[50];*/

//But in this case, each element of the array rahma is a pointer to an integer
// , and you would need to allocate memory for each individual integer separately, for example, in a loop:
//
//	for (int i = 0; i < 50; ++i) {
//		rahma[i] = new int;
//	}
//
//}


// okay nowwwww i understand
// int * rema;
//rema=new int ;// كدا انشأت انتجير ف الذاكرة الدينامكية 
// delete rema;

// int* hema;
// hema = new int [50];
// عملت ايري ف ال الهيب 
// 
//delet[]hema
// int * raheem[50];
// raheem[1]= new int [40]
// الحمد لله