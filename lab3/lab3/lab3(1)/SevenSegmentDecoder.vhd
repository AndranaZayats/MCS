----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    21:00:34 05/11/2021 
-- Design Name: 
-- Module Name:    SevenSegmentDecoder - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity SevenSegmentDecoder is
port(
	Digit : in STD_LOGIC_VECTOR (3 downto 0);
	segment_A,segment_B,segment_C,segment_D,segment_E,segment_F,segment_G: out STD_LOGIC
);
end SevenSegmentDecoder;

architecture Behavioral of SevenSegmentDecoder is

begin
process (Digit)
	variable Decode_Data : STD_LOGIC_VECTOR(6 downto 0);
	begin
	case Digit is
			when "0000" =>	Decode_Data := "0000001"; --0
			when "0001" =>	Decode_Data :="1001111"; --1
			when "0010" =>	Decode_Data := "0010010"; --2
			when "0011" =>	Decode_Data := "0000110"; --3
			when "0100" =>	Decode_Data := "1001100"; --4
			when "0101" =>	Decode_Data := "0100100"; --5
			when "0110" =>	Decode_Data := "0100000"; --6
			when "0111" =>	Decode_Data := "0001111"; --7
			when "1000" =>	Decode_Data := "0000000"; --8
			when "1001" =>	Decode_Data := "0000100"; --9
		    when "1010" => Decode_Data := "0000010"; -- a
			 when "1011" => Decode_Data :="1100000"; -- b
			 when "1100" => Decode_Data :="0110001"; -- C
			 when "1101" => Decode_Data :="1000010"; -- d
			 when "1110" => Decode_Data :="0110000"; -- E
			 when "1111" => Decode_Data :="0111000"; -- F
		when others =>	Decode_Data := "1111111"; --null
		end case;
		
		segment_A <= not Decode_Data(6);
		segment_B <= not Decode_Data(5);
		segment_C <= not Decode_Data(4);
		segment_D <= not Decode_Data(3);
		segment_E <= not Decode_Data(2);
		segment_F <= not Decode_Data(1);
		segment_G <= not Decode_Data(0);
		
end process;

end Behavioral;

