function CheckEven(iNo)
{
    if((iNo % 2) == 0)
    {
        console.log("It is even number")
    }
    else
    {
        console.log("It is odd number")
    }
}

function main()
{
    let iValue = 12

    CheckEven(iValue);
}

main()