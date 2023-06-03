----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    22:55:45 05/08/2021 
-- Design Name: 
-- Module Name:    MUX_2_1 - Behavioral 
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

entity MUX_3_1 is
port(
	D0,D1,D2 : in std_logic_vector(7 downto 0);
	S0 : in std_logic_vector(1 downto 0);
	O : out std_logic_vector(7 downto 0)
);

end MUX_3_1;

architecture Behavioral of MUX_3_1 is

begin
process (D0,D1,D2,S0) 
	begin
	if	(S0 = "00") then
	O <= D0;
	elsif(S0 = "01") then
	O <= D1;
	elsif(S0 = "10") then
	O <= D2;
	end if;
end process;
end Behavioral;

