#include<bits/stdc++.h>
using namespace std;

int toInt(char ch)
{
    if(ch=='x') ch = '0';
    return ch - '0';
}

string add(string _num1, string _num2)
{
    string num1 = _num1, num2 = _num2, temp;

    //reverse(num1.begin(), num1.end());
    //reverse(num2.begin(), num2.end());
    int len_num1 = 0, len_num2 = 0;
    len_num1 = num1.size(), len_num2 = num2.size();

    int diff = abs(len_num1 - len_num2);
    
    if(len_num2 > len_num1)
    {
        temp = "";
        while(diff--) temp += '0';
        num1 = num1 + temp; 
    }
    else if(len_num1 > len_num2)
    {
        temp = "";
        while (diff--) temp += '0';
        num2 = num2 + temp; 
    }
    //cout<<num1<<" "<<num2<<endl;

    len_num1 = num1.size(), len_num2 = num2.size();
    int carry = 0, ipos = 0;
    string res = "";
    for(int i=0; i<len_num1; i++)
    {
        int temp = toInt(num1[i]) + toInt(num2[i]);
        temp += carry;
        carry = temp/10;
        res += '0' + (temp - (carry*10));
    }

    if(carry>0) res += '0' + carry;

    //cout<<res<<endl;

    string result = res;
    //reverse(result.begin(), result.end());

    return result;

}

void multiply(string _num1, string _num2)
{
    string num1 = _num1, num2 = _num2;

    reverse(num1.begin(), num1.end());
    reverse(num2.begin(), num2.end());

    vector<string>mult_result;
    mult_result.clear();

    int len_num1 = 0, len_num2 = 0;
    len_num1 = num1.size(), len_num2 = num2.size();
    for(int i=0; i<len_num2; i++)
    {
        int carry = 0, ipos = 0;
        string res = "";//25
        for(int j=0; j<len_num1; j++)
        {
            int temp = toInt(num1[j]) * toInt(num2[i]);
            temp += carry;
            carry = temp/10;
            res += '0' + (temp - (carry*10));
        }

        if(carry>0) res += '0' + carry;
        ////////////////////////////
        int sum = 0, res_len = res.size();
        for(int x=0; x<res_len; x++) sum += res[x]-'0';
        if(sum<=0) res = "0";
        ///////////////////////////
        string cross = "";
        for(int x=0; x<i; x++) cross += 'x';
        if(res!="0")
        {
            res = cross + res;
            //cout<<res<<endl;
            mult_result.push_back(res);
        }
    }

    string result = "0";
    for(int x=0; x<mult_result.size(); x++)
    {
        result = add(result, mult_result[x]);
    }

    reverse(result.begin(), result.end());
    

    //output formatting
    int result_size = result.size();
    int max_size = max(len_num1, len_num2);
    max_size = max(max_size, result_size);
    int vect_size = mult_result.size();
    int vect_element_length[vect_size];
    for(int x=0; x<vect_size; x++)
    {
        string temps = mult_result[x];
        //max_size = max(max_size,  temps.size());
        int s = temps.size();
        max_size = max(max_size, s);
        vect_element_length[x] = s;
        //reverse(mult_result[x].begin(), mult_result[x].end());
    }

    for(int x=0; x<abs(len_num1-max_size); x++) printf(" ");
    for(int x=0; x<len_num1; x++) printf("%c", _num1[x]);
    printf("\n");
    for(int x=0; x<abs(len_num2-max_size); x++) printf(" ");
    for(int x=0; x<len_num2; x++) printf("%c", _num2[x]);
    printf("\n");
    for(int x=0; x<abs(max(len_num1, len_num2)-max_size); x++) printf(" ");
    for(int x=0; x<max(len_num1, len_num2); x++) printf("-");
    printf("\n");

    if(vect_size>1)
    {
        for(int i=0; i<vect_size; i++)
        {
            for(int x=0; x<abs(vect_element_length[i]-max_size); x++) printf(" ");
            for(int j=vect_element_length[i]-1; j>=0; j--)
            {
                if(mult_result[i][j]=='x') break;//printf(" ");
                else printf("%c", mult_result[i][j]);
            }
            printf("\n");
        }
    }

    if(vect_size>1)
    {
        for(int x=0; x<max_size; x++) printf("-");
        printf("\n");
    }

    for(int x=0; x<abs(result_size-max_size); x++) printf(" ");
    cout<<result<<'\n';


    
}

int main()
{
    //freopen ("myfile.txt","w",stdout);
    //cin.ignore();
    string originalString, str, temp;
    while(getline(cin, originalString))
    {
        if(originalString=="0") break;

        vector<string> number;
        stringstream ss(originalString);
        while(ss >> temp) number.push_back(temp);
        multiply(number[0], number[1]);
        printf("\n");
    }
}