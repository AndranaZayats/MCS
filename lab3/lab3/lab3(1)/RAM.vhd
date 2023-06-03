----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    16:19:24 05/09/2021 
-- Design Name: 
-- Module Name:    RAM - Behavioral 
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
use IEEE.STD_LOGIC_UNSIGNED.ALL;


entity RAM is
port(
	CLOCK : in std_logic;
	RAM_WR : in std_logic;
	RAM_ADDR_BUS : in std_logic_vector(1 downto 0);
	RAM_DATA_IN_BUS : in std_logic_vector(7 downto 0);
	RAM_DATA_OUT_BUS : out std_logic_vector(7 downto 0)
);
end RAM;

architecture Behavioral of RAM is
type ram_type is array (3 downto 0) of STD_LOGIC_VECTOR(7 downto 0);
signal RAM_UNIT : ram_type;
begin

	RAM : process(CLOCK, RAM_ADDR_BUS, RAM_UNIT)
	 begin
		if (rising_edge(CLOCK)) then
			if (RAM_WR = '1') then
				RAM_UNIT(conv_integer(RAM_ADDR_BUS)) <= RAM_DATA_IN_BUS;
			end if;
		end if;
		RAM_DATA_OUT_BUS <= RAM_UNIT(conv_integer(RAM_ADDR_BUS));
	 end process RAM;


end Behavioral;

