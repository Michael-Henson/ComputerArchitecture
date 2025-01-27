module stimulus ();

   logic   clock;
   logic   reset;
 
   logic  WriteEnable;
   logic [4:0]   ReadAddress1, ReadAddress2, WriteAddress;
   logic [31:0]  WriteData;
   logic [31:0] ReadData1, ReadData2;
   
   integer handle3;
   integer desc3;
   
   // Instantiate DUT
   regfile dut (clock, WriteEnable, ReadAddress1, ReadAddress2, WriteAddress, WriteData, ReadData1, ReadData2);

   // Setup the clock to toggle every 1 time units 
   initial 
     begin	
	clock = 1'b1;
	forever #5 clock = ~clock;
     end

   initial
     begin
	// Gives output file name
	handle3 = $fopen("regfile.out");
	// Tells when to finish simulation
	#500 $finish;		
     end

   // Monitor output signals
   
  always begin
    #10 $display("%0t\t%b\t%b\t%b\t%b\t%b\t%h\t%h\t%h", 
             $time, clock, WriteEnable, ReadAddress1, ReadAddress2, WriteAddress, WriteData, ReadData1, ReadData2);
  end
  
   initial 
     begin      
	// Apply test vectors
    // Test case 0
    #20;
    WriteEnable = 1;  // Enable write
    WriteAddress = 5'b00001;  // Write to register 1
    WriteData = 32'hA5A5A5A5;  // Write value


    ReadAddress1 = 5'b00000;  // Read from register 0
    ReadAddress2 = 5'b00001;  // Read from register 1

    #10;
    // Test case 1
    WriteEnable = 1;
    WriteAddress = 5'b00010;  // Write to register 2
    WriteData = 32'h12345678;  // Write value
    

    ReadAddress1 = 5'b00010;  // Read from register 2
    ReadAddress2 = 5'b00001;  // Read from register 1

    #10;
    // Test case 2
    WriteEnable = 1;
    WriteAddress = 5'b00000;  // Attempt to write to register 0
    WriteData = 32'h87654321;  // Write value
    
   
    ReadAddress1 = 5'b00000;  // Read from register 0 (should still be 0)
    ReadAddress2 = 5'b00101;  // Read from register 5

    #10;
    // Test case 3
    WriteEnable = 1;
    WriteAddress = 5'b00001;  // Write to register 3
    WriteData = 32'hBEEFBEEF;  // Write value
    

    ReadAddress1 = 5'b00011;  // Read from register 3
    ReadAddress2 = 5'b00001;  // Read from register 0 (should be 0)





     end

endmodule // stimulus


