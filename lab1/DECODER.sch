<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="spartan3a" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="OUT_0" />
        <signal name="OUT_1" />
        <signal name="OUT_2" />
        <signal name="OUT_3" />
        <signal name="OUT_6" />
        <signal name="OUT_7" />
        <signal name="OUT_4" />
        <signal name="IN_0" />
        <signal name="IN_1" />
        <signal name="IN_2" />
        <port polarity="Output" name="OUT_0" />
        <port polarity="Output" name="OUT_1" />
        <port polarity="Output" name="OUT_2" />
        <port polarity="Output" name="OUT_3" />
        <port polarity="Output" name="OUT_6" />
        <port polarity="Output" name="OUT_7" />
        <port polarity="Output" name="OUT_4" />
        <port polarity="Input" name="IN_0" />
        <port polarity="Input" name="IN_1" />
        <port polarity="Input" name="IN_2" />
        <blockdef name="and3">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-64" y2="-64" x1="0" />
            <line x2="64" y1="-128" y2="-128" x1="0" />
            <line x2="64" y1="-192" y2="-192" x1="0" />
            <line x2="192" y1="-128" y2="-128" x1="256" />
            <line x2="144" y1="-176" y2="-176" x1="64" />
            <line x2="64" y1="-80" y2="-80" x1="144" />
            <arc ex="144" ey="-176" sx="144" sy="-80" r="48" cx="144" cy="-128" />
            <line x2="64" y1="-64" y2="-192" x1="64" />
        </blockdef>
        <blockdef name="and3b1">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="40" y1="-64" y2="-64" x1="0" />
            <circle r="12" cx="52" cy="-64" />
            <line x2="64" y1="-128" y2="-128" x1="0" />
            <line x2="64" y1="-192" y2="-192" x1="0" />
            <line x2="192" y1="-128" y2="-128" x1="256" />
            <line x2="64" y1="-64" y2="-192" x1="64" />
            <arc ex="144" ey="-176" sx="144" sy="-80" r="48" cx="144" cy="-128" />
            <line x2="64" y1="-80" y2="-80" x1="144" />
            <line x2="144" y1="-176" y2="-176" x1="64" />
        </blockdef>
        <blockdef name="and3b2">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="40" y1="-64" y2="-64" x1="0" />
            <circle r="12" cx="52" cy="-64" />
            <line x2="40" y1="-128" y2="-128" x1="0" />
            <circle r="12" cx="52" cy="-128" />
            <line x2="64" y1="-192" y2="-192" x1="0" />
            <line x2="192" y1="-128" y2="-128" x1="256" />
            <line x2="64" y1="-64" y2="-192" x1="64" />
            <arc ex="144" ey="-176" sx="144" sy="-80" r="48" cx="144" cy="-128" />
            <line x2="64" y1="-80" y2="-80" x1="144" />
            <line x2="144" y1="-176" y2="-176" x1="64" />
        </blockdef>
        <blockdef name="and3b3">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="40" y1="-64" y2="-64" x1="0" />
            <circle r="12" cx="52" cy="-64" />
            <line x2="40" y1="-128" y2="-128" x1="0" />
            <circle r="12" cx="52" cy="-128" />
            <line x2="40" y1="-192" y2="-192" x1="0" />
            <circle r="12" cx="52" cy="-192" />
            <line x2="192" y1="-128" y2="-128" x1="256" />
            <line x2="144" y1="-176" y2="-176" x1="64" />
            <line x2="64" y1="-64" y2="-192" x1="64" />
            <arc ex="144" ey="-176" sx="144" sy="-80" r="48" cx="144" cy="-128" />
            <line x2="64" y1="-80" y2="-80" x1="144" />
        </blockdef>
        <block symbolname="and3b3" name="XLXI_10">
            <blockpin signalname="IN_2" name="I0" />
            <blockpin signalname="IN_1" name="I1" />
            <blockpin signalname="IN_0" name="I2" />
            <blockpin signalname="OUT_0" name="O" />
        </block>
        <block symbolname="and3b2" name="XLXI_12">
            <blockpin signalname="IN_2" name="I0" />
            <blockpin signalname="IN_1" name="I1" />
            <blockpin signalname="IN_0" name="I2" />
            <blockpin signalname="OUT_1" name="O" />
        </block>
        <block symbolname="and3b2" name="XLXI_13">
            <blockpin signalname="IN_2" name="I0" />
            <blockpin signalname="IN_0" name="I1" />
            <blockpin signalname="IN_1" name="I2" />
            <blockpin signalname="OUT_2" name="O" />
        </block>
        <block symbolname="and3b1" name="XLXI_14">
            <blockpin signalname="IN_2" name="I0" />
            <blockpin signalname="IN_1" name="I1" />
            <blockpin signalname="IN_0" name="I2" />
            <blockpin signalname="OUT_3" name="O" />
        </block>
        <block symbolname="and3b1" name="XLXI_17">
            <blockpin signalname="IN_0" name="I0" />
            <blockpin signalname="IN_1" name="I1" />
            <blockpin signalname="IN_2" name="I2" />
            <blockpin signalname="OUT_6" name="O" />
        </block>
        <block symbolname="and3" name="XLXI_18">
            <blockpin signalname="IN_2" name="I0" />
            <blockpin signalname="IN_1" name="I1" />
            <blockpin signalname="IN_0" name="I2" />
            <blockpin signalname="OUT_7" name="O" />
        </block>
        <block symbolname="and3b2" name="XLXI_19">
            <blockpin signalname="IN_0" name="I0" />
            <blockpin signalname="IN_1" name="I1" />
            <blockpin signalname="IN_2" name="I2" />
            <blockpin signalname="OUT_4" name="O" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="3520" height="2720">
        <instance x="2096" y="416" name="XLXI_10" orien="R0" />
        <instance x="2096" y="384" name="XLXI_12" orien="M180" />
        <instance x="2096" y="816" name="XLXI_13" orien="R0" />
        <instance x="2096" y="784" name="XLXI_14" orien="M180" />
        <instance x="2096" y="1456" name="XLXI_17" orien="R0" />
        <instance x="2096" y="1680" name="XLXI_18" orien="R0" />
        <branch name="OUT_0">
            <wire x2="2384" y1="288" y2="288" x1="2352" />
        </branch>
        <iomarker fontsize="28" x="2384" y="288" name="OUT_0" orien="R0" />
        <branch name="OUT_1">
            <wire x2="2384" y1="512" y2="512" x1="2352" />
        </branch>
        <iomarker fontsize="28" x="2384" y="512" name="OUT_1" orien="R0" />
        <branch name="OUT_2">
            <wire x2="2368" y1="688" y2="688" x1="2352" />
            <wire x2="2384" y1="688" y2="688" x1="2368" />
        </branch>
        <iomarker fontsize="28" x="2384" y="688" name="OUT_2" orien="R0" />
        <branch name="OUT_3">
            <wire x2="2384" y1="912" y2="912" x1="2352" />
        </branch>
        <iomarker fontsize="28" x="2384" y="912" name="OUT_3" orien="R0" />
        <branch name="OUT_6">
            <wire x2="2384" y1="1328" y2="1328" x1="2352" />
        </branch>
        <iomarker fontsize="28" x="2384" y="1328" name="OUT_6" orien="R0" />
        <branch name="OUT_7">
            <wire x2="2384" y1="1552" y2="1552" x1="2352" />
        </branch>
        <iomarker fontsize="28" x="2384" y="1552" name="OUT_7" orien="R0" />
        <instance x="2096" y="1232" name="XLXI_19" orien="R0" />
        <branch name="OUT_4">
            <wire x2="2384" y1="1104" y2="1104" x1="2352" />
        </branch>
        <iomarker fontsize="28" x="2384" y="1104" name="OUT_4" orien="R0" />
        <branch name="IN_0">
            <wire x2="1808" y1="224" y2="224" x1="1680" />
            <wire x2="2080" y1="224" y2="224" x1="1808" />
            <wire x2="2096" y1="224" y2="224" x1="2080" />
            <wire x2="1808" y1="224" y2="576" x1="1808" />
            <wire x2="2096" y1="576" y2="576" x1="1808" />
            <wire x2="1808" y1="576" y2="688" x1="1808" />
            <wire x2="2096" y1="688" y2="688" x1="1808" />
            <wire x2="1808" y1="688" y2="976" x1="1808" />
            <wire x2="2096" y1="976" y2="976" x1="1808" />
            <wire x2="1808" y1="976" y2="1168" x1="1808" />
            <wire x2="2096" y1="1168" y2="1168" x1="1808" />
            <wire x2="1808" y1="1168" y2="1392" x1="1808" />
            <wire x2="1808" y1="1392" y2="1488" x1="1808" />
            <wire x2="2096" y1="1488" y2="1488" x1="1808" />
            <wire x2="2096" y1="1392" y2="1392" x1="1808" />
        </branch>
        <branch name="IN_1">
            <wire x2="1760" y1="288" y2="288" x1="1680" />
            <wire x2="2080" y1="288" y2="288" x1="1760" />
            <wire x2="2096" y1="288" y2="288" x1="2080" />
            <wire x2="1760" y1="288" y2="512" x1="1760" />
            <wire x2="2096" y1="512" y2="512" x1="1760" />
            <wire x2="1760" y1="512" y2="624" x1="1760" />
            <wire x2="2096" y1="624" y2="624" x1="1760" />
            <wire x2="1760" y1="624" y2="912" x1="1760" />
            <wire x2="2096" y1="912" y2="912" x1="1760" />
            <wire x2="1760" y1="912" y2="1104" x1="1760" />
            <wire x2="2096" y1="1104" y2="1104" x1="1760" />
            <wire x2="1760" y1="1104" y2="1328" x1="1760" />
            <wire x2="1760" y1="1328" y2="1552" x1="1760" />
            <wire x2="2096" y1="1552" y2="1552" x1="1760" />
            <wire x2="2096" y1="1328" y2="1328" x1="1760" />
        </branch>
        <branch name="IN_2">
            <wire x2="1712" y1="352" y2="352" x1="1680" />
            <wire x2="2080" y1="352" y2="352" x1="1712" />
            <wire x2="2096" y1="352" y2="352" x1="2080" />
            <wire x2="1712" y1="352" y2="448" x1="1712" />
            <wire x2="2096" y1="448" y2="448" x1="1712" />
            <wire x2="1712" y1="448" y2="752" x1="1712" />
            <wire x2="2096" y1="752" y2="752" x1="1712" />
            <wire x2="1712" y1="752" y2="848" x1="1712" />
            <wire x2="1712" y1="848" y2="864" x1="1712" />
            <wire x2="1712" y1="864" y2="1040" x1="1712" />
            <wire x2="2096" y1="1040" y2="1040" x1="1712" />
            <wire x2="1712" y1="1040" y2="1264" x1="1712" />
            <wire x2="1712" y1="1264" y2="1616" x1="1712" />
            <wire x2="2096" y1="1616" y2="1616" x1="1712" />
            <wire x2="2096" y1="1264" y2="1264" x1="1712" />
            <wire x2="2096" y1="848" y2="848" x1="1712" />
        </branch>
        <iomarker fontsize="28" x="1680" y="224" name="IN_0" orien="R180" />
        <iomarker fontsize="28" x="1680" y="288" name="IN_1" orien="R180" />
        <iomarker fontsize="28" x="1680" y="352" name="IN_2" orien="R180" />
    </sheet>
</drawing>