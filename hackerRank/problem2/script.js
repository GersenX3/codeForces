let arrA1=[2,6];
let arrA2=[24,36];
let arrB1=[2,4];
let arrB2=[16,32,96];
function solution(arr1,arr2){
    let commons=[];
    let d=[];
    for(let x=2;x<arr2[arr2.length-1];x++){
        let pass=true;
        for(let num of arr2){
            if((num/x)%1!=0){
                pass=false;
                break;
            }
        }
        if(pass==true){d.push(x)}
    }
    console.log(d);
    for(let x=0;x<d.length;x++){
        let test=d[x];
        let pass=true;
        console.log("Prueba:"+x);
        for(let n of arr1){
            if((test/n)%1!=0){
                pass=false;
            }
            console.log("test:"+test+" n:"+n+" pass:"+pass);
        }
        if(pass==true){commons.push(test)}
    }
    console.log(commons.length,commons);
    }

solution(arrA1,arrA2);
solution(arrB1,arrB2);