g++ -g -std=c++17  draw.cpp -I$ROOTSYS/include `root-config --cflags ` `root-config --libs ` -lMinuit   -o draw.exe

./draw.exe Hbbscore P_Hbbscore P_Hbbscore plot_Hbbscore -1  80 160 >> output_draw.txt
./draw.exe Hbbmass P_Hbbmass P_Hbbmass plot_Hbbmass -1 50 250 >> output_draw.txt
./draw.exe Hbbmsoftdrop P_Hbbmsoftdrop P_Hbbmsoftdrop plot_Hbbmsoftdrop >> output_draw.txt
./draw.exe Hbbtau21 P_Hbbtau21 P_Hbbtau21 plot_Hbbtau21 >> output_draw.txt
./draw.exe Hbbtau32 P_Hbbtau32 P_Hbbtau32 plot_Hbbtau32 >> output_draw.txt
./draw.exe HbbPt P_HbbPt P_HbbPt plot_HbbPt >> output_draw.txt
./draw.exe Wjetscore P_Wjetscore P_Wjetscore plot_Wjetscore >> output_draw.txt
./draw.exe Wjetmass P_Wjetmass P_Wjetmass plot_Wjetmass >> output_draw.txt
./draw.exe Wjetmsoftdrop P_Wjetmsoftdrop P_Wjetmsoftdrop plot_Wjetmsoftdrop >> output_draw.txt
./draw.exe Wjettau21 P_Wjettau21 P_Wjettau21 plot_Wjettau21 >> output_draw.txt
./draw.exe Wjettau32 P_Wjettau32 P_Wjettau32 plot_Wjettau32 >> output_draw.txt
./draw.exe WjetPt P_WjetPt P_WjetPt plot_WjetPt >> output_draw.txt
./draw.exe leptonpt P_leptonpt P_leptonpt plot_leptonpt >> output_draw.txt
./draw.exe VBSMjj P_VBSMjj P_VBSMjj plot_VBSMjj >> output_draw.txt
./draw.exe VBSdetajj P_VBSdetajj P_VBSdetajj plot_VBSdetajj >> output_draw.txt
./draw.exe VBSPtjj P_VBSPtjj P_VBSPtjj plot_VBSPtjj >> output_draw.txt
./draw.exe trans_E P_trans_E P_trans_E plot_trans_E >> output_draw.txt
./draw.exe MET P_MET P_MET plot_MET >> output_draw.txt
