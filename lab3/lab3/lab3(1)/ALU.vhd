----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    23:33:45 05/08/2021 
-- Design Name: 
-- Module Name:    ALU - Behavioral 
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
use IEEE.STD_LOGIC_UNSIGNED.all;
use ieee.std_logic_arith.all;
use IEEE.NUMERIC_STD.ALL;
entity ALU is
port(
		B : in STD_LOGIC_vector (7 downto 0);
		A : in STD_LOGIC_vector (7 downto 0);
		ALU_SEL : in STD_LOGIC_vector (2 downto 0);
		CARRYOUT : out STD_LOGIC := '0';
		ALU_OUT : out STD_LOGIC_vector (7 downto 0)
		);
end ALU;

architecture Behavioral of ALU is
signal ALU_Result : std_logic_vector (7 downto 0);

signal tmp: std_logic_vector (8 downto 0);
begin
	process(A, B, ALU_SEL)
	variable ALU_Mul_Result : std_logic_vector (15 downto 0);
	begin
	case ALU_SEL is
		when "000" => --add
		ALU_Result <= STD_LOGIC_VECTOR(A+B);
		tmp <= ('0' & A) + ('0' & B);
		when "001" => -- Subs
		ALU_Result <= A - B ;
		
		when "010" => --B*A
		ALU_Mul_Result := A * B;
		ALU_Result <= ALU_Mul_Result(7 downto 0);
		if (ALU_Mul_Result(15 downto 8) > 0) then
		tmp(8)  <= '1';
		else
		tmp(8) <= '0';
		end if;
		
		when "011" => --A<<1
		ALU_Result(7 downto 1)<=A(6 downto 0); 
		ALU_Result(0)<='0';
		tmp <= A & '0';
		
		when "100" => --B>>1
		ALU_Result(6 downto 0)<=B(7 downto 1); 
		ALU_Result(7)<='0';
		tmp <= B & '0';
		when "101" => --A>>1
		ALU_Result(6 downto 0)<=A(7 downto 1); 
		ALU_Result(7)<='0';
		tmp <= A & '0';	
		
		when "110" => -- A
		ALU_Result <=A;
		when "111" => -- B
		ALU_Result <=B;
		when others => ALU_Result <= A+B;
		end case;
	end process;
	ALU_Out <= ALU_Result; -- ALU out
	
	Carryout <= tmp(8); -- Carryout flag
end Behavioral;
