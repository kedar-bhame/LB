function SumFactors(iNo)
{
    let iCnt = 0
    let iSum = 0

    console.log("Factors of : ",iNo)
    
    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum
}

function main()
{
    let iRet

    iRet = SumFactors(12)

    console.log("Summation of factors : ",iRet)
}

main()