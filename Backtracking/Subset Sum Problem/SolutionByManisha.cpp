#include<iostream>
  
#define ARRAYSIZE(a) (sizeof(a))/(sizeof(a[0])) 
  
static int total_nodes; 
void printSubset(int A[], int size) { 
    for(int i = 0; i < size; i++) { 
        cout << A[i] << "\t"; 
    } 
   cout << endl;
} 
  
void subset_sum(int s[], int t[], int s_size, int t_size, int sum, int ite, int const target_sum) { 
    total_nodes++; 
    if( target_sum == sum ) {
        printSubset(t, t_size); 
        subset_sum(s, t, s_size, t_size-1, sum - s[ite], ite + 1, target_sum); 
        return; 
    } 
    else { 
        for( int i = ite; i < s_size; i++ ) { 
            t[t_size] = s[i]; 
            subset_sum(s, t, s_size, t_size + 1, sum + s[i], i + 1, target_sum); 
        } 
    } 
} 

void generateSubsets(int s[], int size, int target_sum) { 
    int *tuplet_vector = (int *)malloc(size * sizeof(int)); 
  
    subset_sum(s, tuplet_vector, size, 0, 0, 0, target_sum); 
  
    free(tuplet_vector); 
} 
  
int main() { 
    int n;
    cout << "\nEnter Size of Set\t:\t";
    cin >> n;
    int a[n];
    cout << "\nEnter Set Elements\n";
    for(int i = 0; i < n ; i++ ) {
      cin >> a[i];
    }
    int sum;
    cout << "\nEnter sum value\t:\t";
    cin >> sum;
    generateSubsets(a, n, sum); 
    cout << "Total Sum\t:\t" << total_nodes; 
    return 0; 
}
