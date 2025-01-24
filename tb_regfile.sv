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
   regfile dut (clock, reset, In, Out);

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
    $display("%0t\t%b\t%b\t%b\t%b\t%b\t%h\t\t%h\t%h", 
             $time, clk, we3, ra1, ra2, wa3, wd3, rd1, rd2);
  end
  
   initial 
     begin      
	// Apply test vectors
    // Test case 1: Write to register 2, read from register 0 and 1
    #10;
    we3 = 1;  // Enable write
    wa3 = 5'b00010;  // Write to register 2
    wd3 = 32'hA5A5A5A5;  // Write value
    #10;
    we3 = 0;  // Disable write
    ra1 = 5'b00000;  // Read from register 0
    ra2 = 5'b00001;  // Read from register 1
    #10;

    // Test case 2: Write to register 5, read from register 2
    we3 = 1;
    wa3 = 5'b00101;  // Write to register 5
    wd3 = 32'h12345678;  // Write value
    #10;
    we3 = 0;
    ra1 = 5'b00010;  // Read from register 2
    ra2 = 5'b00101;  // Read from register 5
    #10;

    // Test case 3: Write to register 0 (should not change, it's hardwired to 0)
    we3 = 1;
    wa3 = 5'b00000;  // Attempt to write to register 0
    wd3 = 32'h87654321;  // Write value
    #10;
    we3 = 0;
    ra1 = 5'b00000;  // Read from register 0 (should still be 0)
    ra2 = 5'b00101;  // Read from register 5
    #10;

    // Test case 4: Write to register 3, check output
    we3 = 1;
    wa3 = 5'b00011;  // Write to register 3
    wd3 = 32'hDEADBEEF;  // Write value
    #10;
    we3 = 0;
    ra1 = 5'b00011;  // Read from register 3
    ra2 = 5'b00000;  // Read from register 0 (should be 0)
    #10;
     end

endmodule // stimulus


