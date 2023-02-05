let arr0= [[112,42],
           [56,125]];

let arr1= [[112,42,83,119],
           [56,125,56,49],
           [15,78,101,43],
           [62,98,114,108]];

let arr2=[[112,42,83,119,104,15],
          [56,125,56,49,71,113],
          [15,78,101,43,134,84],
          [62,98,114,108,85,32],
          [30,100,64,71,14,89],
          [40,8,32,39,9,200]];

function calculateMatrix(matris){
    let matrix=matris;
    let n = (matrix.length)/2;
    let total=0;
    console.log(n);
    console.log(matrix);
    //total de comparasiones necesarias
    for(x=0;x<(n*n);x++){//  y   x
        let num0=(matrix[0])[0];
        let num1=(matrix[0])[(matrix[0]).length-(1)];
        let num2=(matrix[matrix.length-(1)])[0];
        let num3=(matrix[matrix.length-(1)])[matrix[0].length-(1)];

        //delete
        matrix[matrix.length-1].splice((matrix[0].length-1),1);
        matrix[matrix.length-1].splice(0,1);
        matrix[0].splice((matrix[0].length-1),1);
        matrix[0].splice(0,1);

        if (matrix[0].length==0){matrix.splice(matrix.length-1,1);matrix.splice(0,1)}

        let bigger=num0;
        if(bigger<num1){bigger=num1}
        if(bigger<num2){bigger=num2}
        if(bigger<num3){bigger=num3}
        total=total+bigger
        console.log(num0,num1,num2,num3);
        console.log(bigger);
        console.log(matrix);
    }
    console.log("Total:"+total);
}
calculateMatrix(arr0);
calculateMatrix(arr1);
calculateMatrix(arr2);