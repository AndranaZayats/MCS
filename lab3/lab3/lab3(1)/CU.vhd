----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:18:20 05/09/2021 
-- Design Name: 
-- Module Name:    CU - Behavioral 
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

entity CU is
port(
		  CLOCK   		: IN STD_LOGIC;
		  RESET   		: IN STD_LOGIC;
		  ENTER_OP1   	: IN STD_LOGIC;
		  ENTER_OP2   	: IN STD_LOGIC;
		  CALCULATE 	: IN STD_LOGIC;
		  RAM_WR			: OUT STD_LOGIC;
		  RAM_ADDR_BUS			: OUT STD_LOGIC_VECTOR(1 downto 0);
		  CONST			: OUT STD_LOGIC_VECTOR(7 downto 0);
		  ACC_WR			: OUT STD_LOGIC;
		  ACC_RST		: OUT STD_LOGIC;
		  IN_SEL		: OUT STD_LOGIC_VECTOR(1 downto 0);
		  OP_CODE_BUS		: OUT STD_LOGIC_VECTOR(2 downto 0)

);
end CU;

architecture Behavioral of CU is
type   cu_state_type is (cu_rst, cu_idle, cu_load_op1, cu_load_op2, cu_run_calc0, cu_run_calc1, cu_run_calc2, cu_run_calc3, cu_finish); 
signal cu_cur_state  : cu_state_type;
signal cu_next_state : cu_state_type;
begin

CU_SYNC_PROC: process (CLOCK)
   begin
      if (rising_edge(CLOCK)) then
         if (RESET = '1') then
            cu_cur_state <= cu_rst;
         else
            cu_cur_state <= cu_next_state;
         end if;        
      end if;
   end process;
CUNEXT_STATE_DECODE: process (cu_cur_state, ENTER_OP1, ENTER_OP2, CALCULATE)
   begin
      --declare default state for next_state to avoid latches
      cu_next_state <= cu_cur_state;  --default is to stay in current state
      --insert statements to decode next_state
      --below is a simple example
		case(cu_cur_state) is
			when cu_rst 		=>
				cu_next_state <= cu_idle;
			when cu_idle 		=>
				if (ENTER_OP1 = '1') then
					cu_next_state <= cu_load_op1;
				elsif (ENTER_OP2 = '1') then
					cu_next_state <= cu_load_op2;
				elsif (CALCULATE = '1') then
					cu_next_state <= cu_run_calc0;
				else
					cu_next_state <= cu_idle;
				end if;
			when cu_load_op1 	=>
				cu_next_state <= cu_idle;
			when cu_load_op2 	=>
				cu_next_state <= cu_idle;
			when cu_run_calc0 =>
				cu_next_state <= cu_run_calc1;
			when cu_run_calc1 =>
				cu_next_state <= cu_run_calc2;
			when cu_run_calc2 =>
				cu_next_state <= cu_run_calc3;
				when cu_run_calc3 =>
				cu_next_state <= cu_finish;
			when cu_finish 	=>
				cu_next_state <= cu_finish;
			when others			=>
				cu_next_state <= cu_idle;
		end case;    
   end process;
	
	
   CU_OUTPUT_DECODE: process (cu_cur_state)
   begin
		case(cu_cur_state) is
			when cu_rst 		=>
				IN_SEL 			<= "00";
				OP_CODE_BUS 	<= "110";
				RAM_ADDR_BUS	<= "00";
				RAM_WR			<= '0';
				ACC_RST			<= '1'; 
				ACC_WR			<= '0';
			when cu_idle 		=>
				IN_SEL 			<= "00";
				OP_CODE_BUS 	<= "111";
				RAM_ADDR_BUS	<= "00";
				RAM_WR			<= '0';
				ACC_RST			<= '0';
				ACC_WR			<= '1';
			when cu_load_op1 	=>
				IN_SEL 			<= "00";
				OP_CODE_BUS 	<= "111";
				RAM_ADDR_BUS	<= "00";
				RAM_WR			<= '1';
				ACC_RST			<= '0';
				ACC_WR			<= '0';
			when cu_load_op2 	=>
				IN_SEL 			<= "00";
				OP_CODE_BUS 	<= "111";
				RAM_ADDR_BUS	<= "01";
				RAM_WR			<= '1';
				ACC_RST			<= '0';
				ACC_WR			<= '0';				
			when cu_run_calc0 =>
				IN_SEL 			<= "01"; --load OP1
				OP_CODE_BUS 	<= "111"; --B
				RAM_ADDR_BUS	<= "00"; 
				RAM_WR			<= '0'; 
				ACC_RST			<= '0';
				ACC_WR			<= '0'; 
			when cu_run_calc1 =>
				IN_SEL 			<= "01";
				OP_CODE_BUS 	<= "010";  --A*B
				RAM_ADDR_BUS	<= "01";
				RAM_WR			<= '0';
				ACC_RST			<= '0';
				ACC_WR			<= '0';
			when cu_run_calc2 =>
				IN_SEL 			<= "01";  --
				OP_CODE_BUS 	<= "101"; --A>>1
				RAM_ADDR_BUS	<= "01";
				RAM_WR			<= '0';
				ACC_RST			<= '0';
				ACC_WR			<= '0';
			when cu_run_calc3 =>
				IN_SEL 			<= "01";  --
				OP_CODE_BUS 	<= "000"; --A+B
				RAM_ADDR_BUS	<= "00";
				RAM_WR			<= '0';
				ACC_RST			<= '0';
				ACC_WR			<= '0';
			when cu_finish 	=>
				IN_SEL 			<= "00";
				OP_CODE_BUS 	<= "110";
				RAM_ADDR_BUS	<= "00";
				RAM_WR			<= '0';
				ACC_RST			<= '0';
				ACC_WR			<= '0';
			when others		=>
				IN_SEL 			<= "00";
				OP_CODE_BUS 	<= "000";
				RAM_ADDR_BUS	<= "00";
				RAM_WR			<= '0';
				ACC_RST			<= '0';
				ACC_WR			<= '0';				
		end case;
   end process;
	CONST <= "00000100";
end Behavioral;

