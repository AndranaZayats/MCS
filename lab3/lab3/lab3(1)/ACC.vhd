----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    23:05:28 05/08/2021 
-- Design Name: 
-- Module Name:    ACC - Behavioral 
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

entity ACC is
port(
		 WR : in STD_LOGIC;
		 R : in STD_LOGIC;
		 C : in STD_LOGIC;
		 D : in STD_LOGIC_VECTOR(7 downto 0);
		 Q : out STD_LOGIC_VECTOR(7 downto 0)
	     );

end ACC;

architecture Behavioral of ACC is
signal ACC_DATA : STD_LOGIC_VECTOR(7 downto 0);
begin
	process(C,R,WR,D) 
	begin 
			if (rising_edge(C)) then
			if(R = '1') then
				ACC_DATA <= "00000000";
			elsif (WR = '0') then
				ACC_DATA <= D;
			end if;
		end if;
		Q <= ACC_DATA;		
	end process;
end Behavioral;


