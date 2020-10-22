function stringPermutations(str) {
    let letters = str.split('')
      , results = [[letters.shift()]] 
    while (letters.length) {
        const currLetter = letters.shift()
        let tmpResults = []
        results.forEach(result => {
            let rIdx = 0
            while (rIdx <= result.length) {
                const tmp = [...result]
                tmp.splice(rIdx, 0, currLetter)
                tmpResults.push(tmp)
                rIdx++
            }
        })
        results = tmpResults
    }
    return results
      .map(letterArray => letterArray.join(''))
      .filter((el, idx, self) => (self.indexOf(el) === idx))
      .sort()
}
