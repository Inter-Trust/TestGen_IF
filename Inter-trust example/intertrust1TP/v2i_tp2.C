	numOrdPurposes = 0;
	numPurposes = 1;

	int i;
	for (i=0; i < numPurposes;i++) 
	{
		purposes[i].status = false;
		purposes[i].visited = false;      	
		purposes[i].process = NULL;  
		purposes[i].source = NULL;      	
		purposes[i].target = NULL;  			
		purposes[i].numBoundClocks = 0;
		purposes[i].numActiveClocks = 0;
		purposes[i].numSignals = 0;
		purposes[i].numVariables = 0;
		purposes[i].depth = -1;
	}

	for (i=0; i < numOrdPurposes;i++) 
	{
		ordPurposes[i].status = false;
		ordPurposes[i].visited = false;
		ordPurposes[i].process = NULL;  
		ordPurposes[i].source = NULL;      	
		ordPurposes[i].target = NULL;      	
    		ordPurposes[i].numBoundClocks = 0;
    		ordPurposes[i].numActiveClocks = 0;
    		ordPurposes[i].numSignals = 0;
		ordPurposes[i].numVariables = 0;
		ordPurposes[i].depth = -1;
	}

	purposes[0].numSignals = 1;
	purposes[0].process = "{vehicle}0";
	purposes[0].source = "navigation";
	purposes[0].target = "off_line";

	signalData signal1 = {"arrivedToDestination","input",NULL};
	signalData signal2 = {"Stop_service","output",NULL};
	
	purposes[0].signals[0] = signal1;
	purposes[0].signals[1] = signal2;
	
