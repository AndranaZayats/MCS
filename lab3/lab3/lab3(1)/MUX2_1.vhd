----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    22:16:39 05/11/2021 
-- Design Name: 
-- Module Name:    MUX2_1 - Behavioral 
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

entity MUX2_1 is
port(
	D0,D1:in std_logic_vector(3 downto 0);
	S0: 	in std_logic;
	O : 	out std_logic_vector(3 downto 0)
);
end MUX2_1;

architecture Behavioral of MUX2_1 is

begin
	process (D0,D1,S0)
		begin
		if S0 = '0' then
		O <= D0;
		else
		O <= D1;
		end if;
	end process;
end Behavioral;

