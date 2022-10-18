/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
void DFS(int **image, int sr, int sc, int color, int oldcolor, int row, int col){
    if(sr<0||sr>=row||sc<0||sc>=col){
        return;
    }
    if(image[sr][sc] == oldcolor){
        printf("image[%d][%d]: %d->%d\n", sr, sc, oldcolor, color);
        image[sr][sc] = color;
        DFS(image, sr-1, sc, color, oldcolor, row, col);
        DFS(image, sr, sc-1, color, oldcolor, row, col);
        DFS(image, sr+1, sc, color, oldcolor, row, col);
        DFS(image, sr, sc+1, color, oldcolor, row, col);
    }
    return;
}


int** floodFill(int** image, int imageSize, int* imageColSize, int sr, int sc, int color, int* returnSize, int** returnColumnSizes){
    int oldcolor = image[sr][sc];
    int row = imageSize;
    int col = *imageColSize;
    if(oldcolor!=color){
        DFS(image, sr, sc, color, oldcolor, row, col);
    }
    
    *returnSize = imageSize;
    *returnColumnSizes = imageColSize;
    return image;
}