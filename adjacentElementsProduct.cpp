//Code Signal Arcade
//Given an array of integers, find the pair of adjacent elements that has the largest product and return that product.

int adjacentElementsProduct(vector<int> inputArray) {

int biggestElementProduct = -1001;
    
    for (int i = 0; i < inputArray.size() - 1; i++) {
        int firstNum = inputArray[i];
        int secondNum = inputArray[i+1];
        int currentProd = firstNum * secondNum;
        
        if (currentProd > biggestElementProduct) {
            biggestElementProduct = currentProd;
        }
    }
    
    return biggestElementProduct;
}
