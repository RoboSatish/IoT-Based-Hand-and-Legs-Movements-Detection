<?PHP
$one;
$two;
$three;
$four;
$data = array_slice(file('dataa.txt'), -1);

foreach ($data as $line) {
    echo $line;
	//echo fgetc($line);
	header('Refresh: 5');
	//echo $line[1] + $line[2];
	for ($x=0;$x<=2;$x++)
	{
	$one=$line[$x];
	echo $one;
	}
	
	for ($y=4;$y<=7;$y++)
	{
	$two=$line[$y];
	echo $two;
	}
	
	for ($z=9;$z<=12;$z++)
	{
	$three=$line[$z];
	echo $three;
	}
	for ($w=14;$w<=17;$w++)
	{
	$four=$line[$w];
	echo $four;
	}
}

?>