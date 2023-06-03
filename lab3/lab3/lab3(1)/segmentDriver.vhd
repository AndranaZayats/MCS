----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    22:03:51 05/11/2021 
-- Design Name: 
-- Module Name:    segmentDriver - Behavioral 
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

entity segmentDriver is
 port(
	display_A : in STD_LOGIC_VECTOR(3 downto 0);
	display_B : in STD_LOGIC_VECTOR(3 downto 0);
	display_C : in STD_LOGIC_VECTOR(3 downto 0);
	display_D : in STD_LOGIC_VECTOR(3 downto 0);
	segA : out STD_LOGIC;
	segB : out STD_LOGIC;
	segC : out STD_LOGIC;
	segD : out STD_LOGIC;
	segE : out STD_LOGIC;
	segF : out STD_LOGIC;
	segG : out STD_LOGIC;
	select_Display_A : out STD_LOGIC;
	select_Display_B : out STD_LOGIC;
	select_Display_C : out STD_LOGIC;
	select_Display_D : out STD_LOGIC;
	clk : in STD_LOGIC
	);
end segmentDriver;

architecture Behavioral of segmentDriver is

	COMPONENT SevenSegmentDecoder
	port(
		Diget : in STD_LOGIC_VECTOR(3 downto 0);
		segment_A : out STD_LOGIC;
		segment_B : out STD_LOGIC;
		segment_C : out STD_LOGIC;
		segment_D : out STD_LOGIC;
		segment_E : out STD_LOGIC;
		segment_F : out STD_LOGIC;
		segment_G : out STD_LOGIC
	);
	END COMPONENT;
	
	COMPONENT clock_divider
	port(
		clk : in STD_LOGIC_VECTOR(3 downto 0);
		reset : out STD_LOGIC;
		data_clk : out STD_LOGIC
	);
	END COMPONENT;
	
SIGNAL temperary_data : STD_LOGIC_VECTOR(3 downto 0);
SIGNAL clock_word : STD_LOGIC_VECTOR(15 downto 0);
SIGNAL slow_clock : STD_LOGIC;

begin


end Behavioral;

