var hollowPyramid = n => {
    let nStart = n;
    let pyramid = "";
    for(i=0; i < n; i++){
        pyramid += '* ';
    }
    pyramid = pyramid.substring(0,pyramid.length-1);
    let pyramidFirstRow = '';
    n--;
    for(i=0; i < (pyramid.length/2)-0.5; i++){
        pyramidFirstRow += ' ';
    }
    pyramidFirstRow += '*\n';
    while(n > 1){
        let pyramidRow='';
        for(i=0; i<nStart-n; i++){
            pyramidRow += ' ';
        }
        pyramidRow += '*';
        for(i=0; i<2*nStart-3-(nStart-n)*2; i++){
            pyramidRow += ' '
        }
        pyramidRow += '* \n';
        pyramid = pyramidRow + pyramid
        n--;
    }
    pyramid = pyramidFirstRow + pyramid;
    console.log(pyramid)
}