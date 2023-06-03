--------------------------------------------------------------------------------
-- Copyright (c) 1995-2013 Xilinx, Inc.  All rights reserved.
--------------------------------------------------------------------------------
--   ____  ____ 
--  /   /\/   / 
-- /___/  \  /    Vendor: Xilinx 
-- \   \   \/     Version : 14.7
--  \   \         Application : sch2hdl
--  /   /         Filename : TopLevel.vhf
-- /___/   /\     Timestamp : 06/05/2022 17:56:09
-- \   \  /  \ 
--  \___\/\___\ 
--
--Command: sch2hdl -intstyle ise -family spartan3a -flat -suppress -vhdl C:/Users/Zver/Desktop/MKS/lab3/lab3(1)/TopLevel.vhf -w C:/Users/Zver/Desktop/MKS/lab3/lab3(1)/TopLevel.sch
--Design Name: TopLevel
--Device: spartan3a
--Purpose:
--    This vhdl netlist is translated from an ECS schematic. It can be 
--    synthesized and simulated, but it should not be modified. 
--
----- CELL INV8_HXILINX_TopLevel -----
  
library IEEE;
use IEEE.STD_LOGIC_1164.all;

entity INV8_HXILINX_TopLevel is
port(
    O  : out std_logic_vector(7 downto 0);

    I  : in std_logic_vector(7 downto 0)
  );
end INV8_HXILINX_TopLevel;

architecture INV8_HXILINX_TopLevel_V of INV8_HXILINX_TopLevel is
begin
  O <= not I ;
end INV8_HXILINX_TopLevel_V;
----- CELL CB16CE_HXILINX_TopLevel -----


library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity CB16CE_HXILINX_TopLevel is
port (
    CEO : out STD_LOGIC;
    Q   : out STD_LOGIC_VECTOR(15 downto 0);
    TC  : out STD_LOGIC;
    C   : in STD_LOGIC;
    CE  : in STD_LOGIC;
    CLR : in STD_LOGIC
    );
end CB16CE_HXILINX_TopLevel;

architecture Behavioral of CB16CE_HXILINX_TopLevel is

  signal COUNT : STD_LOGIC_VECTOR(15 downto 0) := (others => '0');
  constant TERMINAL_COUNT : STD_LOGIC_VECTOR(15 downto 0) := (others => '1');
  
begin

process(C, CLR)
begin
  if (CLR='1') then
    COUNT <= (others => '0');
  elsif (C'event and C = '1') then
    if (CE='1') then 
      COUNT <= COUNT+1;
    end if;
  end if;
end process;

TC  <= '1' when (COUNT = TERMINAL_COUNT) else '0';
CEO <= '1' when ((COUNT = TERMINAL_COUNT) and CE='1') else '0';
Q   <= COUNT;

end Behavioral;


library ieee;
use ieee.std_logic_1164.ALL;
use ieee.numeric_std.ALL;
library UNISIM;
use UNISIM.Vcomponents.ALL;

entity TopLevel is
   port ( CALCULATE : in    std_logic; 
          CLOCK     : in    std_logic; 
          DATA_IN   : in    std_logic_vector (7 downto 0); 
          ENTER_OP1 : in    std_logic; 
          ENTER_OP2 : in    std_logic; 
          RESET     : in    std_logic; 
          CARRY_OUT : out   std_logic; 
          COM_0     : out   std_logic; 
          COM_1     : out   std_logic; 
          COM_2     : out   std_logic; 
          seg_A     : out   std_logic; 
          seg_B     : out   std_logic; 
          seg_C     : out   std_logic; 
          seg_D     : out   std_logic; 
          seg_DP    : out   std_logic; 
          seg_E     : out   std_logic; 
          seg_F     : out   std_logic; 
          seg_G     : out   std_logic);
end TopLevel;

architecture BEHAVIORAL of TopLevel is
   attribute BOX_TYPE   : string ;
   attribute HU_SET     : string ;
   signal A            : std_logic_vector (7 downto 0);
   signal ACC_RST      : std_logic;
   signal ACC_WR       : std_logic;
   signal ALU_OUT      : std_logic_vector (7 downto 0);
   signal B            : std_logic_vector (7 downto 0);
   signal CLK          : std_logic;
   signal const_0      : std_logic;
   signal const_1      : std_logic;
   signal DATA         : std_logic_vector (7 downto 0);
   signal RAM_ADDR_BUS : std_logic_vector (1 downto 0);
   signal RAM_DATA_OUT : std_logic_vector (7 downto 0);
   signal RAM_WR       : std_logic;
   signal RST          : std_logic;
   signal XLXN_92      : std_logic_vector (7 downto 0);
   signal XLXN_96      : std_logic_vector (1 downto 0);
   signal XLXN_98      : std_logic_vector (2 downto 0);
   signal XLXN_179     : std_logic;
   signal XLXN_180     : std_logic;
   signal XLXN_181     : std_logic;
   signal XLXN_199     : std_logic;
   signal XLXN_200     : std_logic;
   signal XLXN_201     : std_logic;
   signal XLXN_202     : std_logic;
   signal XLXN_203     : std_logic;
   signal XLXN_204     : std_logic;
   signal XLXN_205     : std_logic;
   signal XLXN_206     : std_logic;
   signal XLXN_207     : std_logic;
   signal XLXN_208     : std_logic;
   signal XLXN_209     : std_logic;
   signal XLXN_217     : std_logic;
   component CU
      port ( CLOCK        : in    std_logic; 
             RESET        : in    std_logic; 
             ENTER_OP1    : in    std_logic; 
             ENTER_OP2    : in    std_logic; 
             CALCULATE    : in    std_logic; 
             RAM_WR       : out   std_logic; 
             ACC_WR       : out   std_logic; 
             ACC_RST      : out   std_logic; 
             RAM_ADDR_BUS : out   std_logic_vector (1 downto 0); 
             CONST        : out   std_logic_vector (7 downto 0); 
             IN_SEL       : out   std_logic_vector (1 downto 0); 
             OP_CODE_BUS  : out   std_logic_vector (2 downto 0));
   end component;
   
   component RAM
      port ( CLOCK            : in    std_logic; 
             RAM_WR           : in    std_logic; 
             RAM_ADDR_BUS     : in    std_logic_vector (1 downto 0); 
             RAM_DATA_IN_BUS  : in    std_logic_vector (7 downto 0); 
             RAM_DATA_OUT_BUS : out   std_logic_vector (7 downto 0));
   end component;
   
   component ALU
      port ( B        : in    std_logic_vector (7 downto 0); 
             A        : in    std_logic_vector (7 downto 0); 
             ALU_SEL  : in    std_logic_vector (2 downto 0); 
             CARRYOUT : out   std_logic; 
             ALU_OUT  : out   std_logic_vector (7 downto 0));
   end component;
   
   component ACC
      port ( R  : in    std_logic; 
             C  : in    std_logic; 
             D  : in    std_logic_vector (7 downto 0); 
             WR : in    std_logic; 
             Q  : out   std_logic_vector (7 downto 0));
   end component;
   
   component MUX_3_1
      port ( D0 : in    std_logic_vector (7 downto 0); 
             D1 : in    std_logic_vector (7 downto 0); 
             D2 : in    std_logic_vector (7 downto 0); 
             S0 : in    std_logic_vector (1 downto 0); 
             O  : out   std_logic_vector (7 downto 0));
   end component;
   
   component SegmentDecoder
      port ( COMM_ONES     : out   std_logic; 
             COMM_DECS     : out   std_logic; 
             COMM_HUNDREDS : out   std_logic; 
             SEG_A         : out   std_logic; 
             SEG_B         : out   std_logic; 
             SEG_C         : out   std_logic; 
             SEG_D         : out   std_logic; 
             SEG_E         : out   std_logic; 
             SEG_F         : out   std_logic; 
             SEG_G         : out   std_logic; 
             DP            : out   std_logic; 
             DATA_IN       : in    std_logic_vector (7 downto 0); 
             CLOCK         : in    std_logic; 
             RESET         : in    std_logic);
   end component;
   
   component INV
      port ( I : in    std_logic; 
             O : out   std_logic);
   end component;
   attribute BOX_TYPE of INV : component is "BLACK_BOX";
   
   component CB16CE_HXILINX_TopLevel
      port ( C   : in    std_logic; 
             CE  : in    std_logic; 
             CLR : in    std_logic; 
             CEO : out   std_logic; 
             Q   : out   std_logic_vector (15 downto 0); 
             TC  : out   std_logic);
   end component;
   
   component INV8_HXILINX_TopLevel
      port ( I : in    std_logic_vector (7 downto 0); 
             O : out   std_logic_vector (7 downto 0));
   end component;
   
   component FDC
      generic( INIT : bit :=  '0');
      port ( C   : in    std_logic; 
             CLR : in    std_logic; 
             D   : in    std_logic; 
             Q   : out   std_logic);
   end component;
   attribute BOX_TYPE of FDC : component is "BLACK_BOX";
   
   attribute HU_SET of XLXI_38 : label is "XLXI_38_0";
   attribute HU_SET of XLXI_63 : label is "XLXI_63_1";
begin
   const_0 <= '0';
   const_1 <= '1';
   XLXI_1 : CU
      port map (CALCULATE=>XLXN_181,
                CLOCK=>CLK,
                ENTER_OP1=>XLXN_179,
                ENTER_OP2=>XLXN_180,
                RESET=>RST,
                ACC_RST=>ACC_RST,
                ACC_WR=>ACC_WR,
                CONST(7 downto 0)=>XLXN_92(7 downto 0),
                IN_SEL(1 downto 0)=>XLXN_96(1 downto 0),
                OP_CODE_BUS(2 downto 0)=>XLXN_98(2 downto 0),
                RAM_ADDR_BUS(1 downto 0)=>RAM_ADDR_BUS(1 downto 0),
                RAM_WR=>RAM_WR);
   
   XLXI_2 : RAM
      port map (CLOCK=>CLK,
                RAM_ADDR_BUS(1 downto 0)=>RAM_ADDR_BUS(1 downto 0),
                RAM_DATA_IN_BUS(7 downto 0)=>B(7 downto 0),
                RAM_WR=>RAM_WR,
                RAM_DATA_OUT_BUS(7 downto 0)=>RAM_DATA_OUT(7 downto 0));
   
   XLXI_4 : ALU
      port map (A(7 downto 0)=>A(7 downto 0),
                ALU_SEL(2 downto 0)=>XLXN_98(2 downto 0),
                B(7 downto 0)=>B(7 downto 0),
                ALU_OUT(7 downto 0)=>ALU_OUT(7 downto 0),
                CARRYOUT=>XLXN_217);
   
   XLXI_5 : ACC
      port map (C=>CLK,
                D(7 downto 0)=>ALU_OUT(7 downto 0),
                R=>ACC_RST,
                WR=>ACC_WR,
                Q(7 downto 0)=>A(7 downto 0));
   
   XLXI_8 : MUX_3_1
      port map (D0(7 downto 0)=>DATA(7 downto 0),
                D1(7 downto 0)=>RAM_DATA_OUT(7 downto 0),
                D2(7 downto 0)=>XLXN_92(7 downto 0),
                S0(1 downto 0)=>XLXN_96(1 downto 0),
                O(7 downto 0)=>B(7 downto 0));
   
   XLXI_12 : SegmentDecoder
      port map (CLOCK=>CLK,
                DATA_IN(7 downto 0)=>A(7 downto 0),
                RESET=>RST,
                COMM_DECS=>XLXN_200,
                COMM_HUNDREDS=>XLXN_201,
                COMM_ONES=>XLXN_199,
                DP=>XLXN_209,
                SEG_A=>XLXN_202,
                SEG_B=>XLXN_203,
                SEG_C=>XLXN_204,
                SEG_D=>XLXN_205,
                SEG_E=>XLXN_206,
                SEG_F=>XLXN_207,
                SEG_G=>XLXN_208);
   
   XLXI_33 : INV
      port map (I=>RESET,
                O=>RST);
   
   XLXI_35 : INV
      port map (I=>ENTER_OP1,
                O=>XLXN_179);
   
   XLXI_36 : INV
      port map (I=>ENTER_OP2,
                O=>XLXN_180);
   
   XLXI_37 : INV
      port map (I=>CALCULATE,
                O=>XLXN_181);
   
   XLXI_38 : CB16CE_HXILINX_TopLevel
      port map (C=>CLOCK,
                CE=>const_1,
                CLR=>const_0,
                CEO=>open,
                Q=>open,
                TC=>CLK);
   
   XLXI_52 : INV
      port map (I=>XLXN_199,
                O=>COM_0);
   
   XLXI_53 : INV
      port map (I=>XLXN_200,
                O=>COM_1);
   
   XLXI_54 : INV
      port map (I=>XLXN_201,
                O=>COM_2);
   
   XLXI_55 : INV
      port map (I=>XLXN_202,
                O=>seg_A);
   
   XLXI_56 : INV
      port map (I=>XLXN_203,
                O=>seg_B);
   
   XLXI_57 : INV
      port map (I=>XLXN_204,
                O=>seg_C);
   
   XLXI_58 : INV
      port map (I=>XLXN_205,
                O=>seg_D);
   
   XLXI_59 : INV
      port map (I=>XLXN_206,
                O=>seg_E);
   
   XLXI_60 : INV
      port map (I=>XLXN_207,
                O=>seg_F);
   
   XLXI_61 : INV
      port map (I=>XLXN_208,
                O=>seg_G);
   
   XLXI_62 : INV
      port map (I=>XLXN_209,
                O=>seg_DP);
   
   XLXI_63 : INV8_HXILINX_TopLevel
      port map (I(7 downto 0)=>DATA_IN(7 downto 0),
                O(7 downto 0)=>DATA(7 downto 0));
   
   XLXI_66 : FDC
      port map (C=>XLXN_217,
                CLR=>RST,
                D=>const_1,
                Q=>CARRY_OUT);
   
end BEHAVIORAL;


