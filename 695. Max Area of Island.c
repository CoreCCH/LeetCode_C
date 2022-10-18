void DFS(int **grid, int row, int col, int sr, int sc, int *curr){
  
    if(sr<0||sr>=row||sc<0||sc>=col){
        return;
    }
    if(grid[sr][sc] == 1){
        *curr = *curr + 1;
        grid[sr][sc] = 2;
        DFS(grid, row, col, sr-1, sc, curr);
        DFS(grid, row, col, sr, sc-1, curr);
        DFS(grid, row, col, sr+1, sc, curr);
        DFS(grid, row, col, sr, sc+1, curr);
    }
    return;
}

int maxAreaOfIsland(int** grid, int gridSize, int* gridColSize){
    int ret = 0;
    int Row = gridSize;
    int Col = *gridColSize;
    
    for(int i = 0; i < gridSize; i++){
        for(int j = 0; j < *gridColSize; j++){
            if(grid[i][j]==1){
                int *curr = calloc(1, sizeof(int)); 
                DFS(grid, Row, Col, i, j, curr);
                if(*curr>ret){
                    ret = *curr;
                }
            }
        }
    }
    return ret;
}