void S12S18_VerticalDecayAngleRatio_35_40()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:06 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p1
   TPad *p1 = new TPad("p1", "p1",0,0,1,1);
   p1->Draw();
   p1->cd();
   p1->Range(0,0,1,1);
   p1->SetFillColor(0);
   p1->SetBorderMode(0);
   p1->SetBorderSize(2);
   p1->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: upper_pad
   TPad *upper_pad = new TPad("upper_pad", "",0.0025,0.3,0.9975,0.9975);
   upper_pad->Draw();
   upper_pad->cd();
   upper_pad->Range(-125,-0.3145863,125,5.97714);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_35_40__1542 = new TH1D("S12S18_ThetaY_35_40__1542","",630,-1575,1575);
   S12S18_ThetaY_35_40__1542->SetBinContent(311,1);
   S12S18_ThetaY_35_40__1542->SetBinContent(312,1.090909);
   S12S18_ThetaY_35_40__1542->SetBinContent(313,1.909091);
   S12S18_ThetaY_35_40__1542->SetBinContent(314,2.454545);
   S12S18_ThetaY_35_40__1542->SetBinContent(315,3.454545);
   S12S18_ThetaY_35_40__1542->SetBinContent(316,0.7272727);
   S12S18_ThetaY_35_40__1542->SetBinContent(317,0.09090909);
   S12S18_ThetaY_35_40__1542->SetBinError(311,0.3015113);
   S12S18_ThetaY_35_40__1542->SetBinError(312,0.3149183);
   S12S18_ThetaY_35_40__1542->SetBinError(313,0.4165978);
   S12S18_ThetaY_35_40__1542->SetBinError(314,0.4723775);
   S12S18_ThetaY_35_40__1542->SetBinError(315,0.5604013);
   S12S18_ThetaY_35_40__1542->SetBinError(316,0.2571297);
   S12S18_ThetaY_35_40__1542->SetBinError(317,0.09090909);
   S12S18_ThetaY_35_40__1542->SetMinimum(0);
   S12S18_ThetaY_35_40__1542->SetMaximum(5.347967);
   S12S18_ThetaY_35_40__1542->SetEntries(118);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_35_40__1542->SetLineColor(ci);
   S12S18_ThetaY_35_40__1542->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_35_40__1542->SetMarkerColor(ci);
   S12S18_ThetaY_35_40__1542->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_35_40__1542->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_35_40__1542->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_35_40__1542->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_35_40__1542->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_35_40__1542->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_35_40__1542->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_35_40__1542->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_35_40__1542->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_35_40__1542->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_35_40__1542->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_35_40__1542->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_35_40__1542->Draw("AE");
   
   TH1D *ThetaY_35_40__1543 = new TH1D("ThetaY_35_40__1543","",630,-1575,1575);
   ThetaY_35_40__1543->SetBinContent(310,0.004645761);
   ThetaY_35_40__1543->SetBinContent(311,1);
   ThetaY_35_40__1543->SetBinContent(312,3.009292);
   ThetaY_35_40__1543->SetBinContent(313,4.034843);
   ThetaY_35_40__1543->SetBinContent(314,4.67712);
   ThetaY_35_40__1543->SetBinContent(315,4.796748);
   ThetaY_35_40__1543->SetBinContent(316,4.861789);
   ThetaY_35_40__1543->SetBinContent(317,4.721254);
   ThetaY_35_40__1543->SetBinContent(318,4.181185);
   ThetaY_35_40__1543->SetBinContent(319,3.051103);
   ThetaY_35_40__1543->SetBinContent(320,0.9767712);
   ThetaY_35_40__1543->SetBinContent(321,0.00116144);
   ThetaY_35_40__1543->SetBinError(310,0.00232288);
   ThetaY_35_40__1543->SetBinError(311,0.03407991);
   ThetaY_35_40__1543->SetBinError(312,0.05911947);
   ThetaY_35_40__1543->SetBinError(313,0.06845604);
   ThetaY_35_40__1543->SetBinError(314,0.07370342);
   ThetaY_35_40__1543->SetBinError(315,0.07464004);
   ThetaY_35_40__1543->SetBinError(316,0.07514437);
   ThetaY_35_40__1543->SetBinError(317,0.07405035);
   ThetaY_35_40__1543->SetBinError(318,0.06968641);
   ThetaY_35_40__1543->SetBinError(319,0.05952877);
   ThetaY_35_40__1543->SetBinError(320,0.03368177);
   ThetaY_35_40__1543->SetBinError(321,0.00116144);
   ThetaY_35_40__1543->SetEntries(30407);

   ci = TColor::GetColor("#ff0000");
   ThetaY_35_40__1543->SetLineColor(ci);
   ThetaY_35_40__1543->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_35_40__1543->SetMarkerColor(ci);
   ThetaY_35_40__1543->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_35_40__1543->GetXaxis()->CenterTitle(true);
   ThetaY_35_40__1543->GetXaxis()->SetLabelFont(42);
   ThetaY_35_40__1543->GetXaxis()->SetTitleSize(0.04);
   ThetaY_35_40__1543->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_35_40__1543->GetXaxis()->SetTitleFont(42);
   ThetaY_35_40__1543->GetYaxis()->SetTitle("Tracks");
   ThetaY_35_40__1543->GetYaxis()->CenterTitle(true);
   ThetaY_35_40__1543->GetYaxis()->SetNdivisions(4000510);
   ThetaY_35_40__1543->GetYaxis()->SetLabelFont(42);
   ThetaY_35_40__1543->GetYaxis()->SetTitleSize(0.04);
   ThetaY_35_40__1543->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_35_40__1543->GetYaxis()->SetTitleFont(42);
   ThetaY_35_40__1543->GetZaxis()->SetLabelFont(42);
   ThetaY_35_40__1543->GetZaxis()->SetTitleOffset(1);
   ThetaY_35_40__1543->GetZaxis()->SetTitleFont(42);
   ThetaY_35_40__1543->Draw("AEsame");
   upper_pad->Modified();
   p1->cd();
  
// ------------>Primitives in pad: lower_pad
   TPad *lower_pad = new TPad("lower_pad", "",0.0025,0.0025,0.9975,0.3);
   lower_pad->Draw();
   lower_pad->cd();
   lower_pad->Range(-125,-0.6923077,125,1.615385);
   lower_pad->SetFillColor(0);
   lower_pad->SetBorderMode(0);
   lower_pad->SetBorderSize(2);
   lower_pad->SetTopMargin(0.05);
   lower_pad->SetBottomMargin(0.3);
   lower_pad->SetFrameBorderMode(0);
   lower_pad->SetFrameBorderMode(0);
   
   Double_t _fx3515[12] = {
   -27.5,
   -22.5,
   -17.5,
   -12.5,
   -7.5,
   -2.5,
   2.5,
   7.5,
   12.5,
   17.5,
   22.5,
   27.5};
   Double_t _fy3515[12] = {
   0,
   1,
   0.3625136,
   0.4731512,
   0.5247985,
   0.7201849,
   0.1495895,
   0.01925528,
   0,
   0,
   0,
   0};
   Double_t _felx3515[12] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3515[12] = {
   0,
   0.2986052,
   0.103394,
   0.102717,
   0.1006923,
   0.1168334,
   0.0518092,
   0.01592961,
   0,
   0,
   0,
   0};
   Double_t _fehx3515[12] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3515[12] = {
   45.74874,
   0.4050928,
   0.1381897,
   0.1279054,
   0.1221823,
   0.1375542,
   0.07387423,
   0.04429601,
   0.04003851,
   0.05487335,
   0.1715334,
   415.0783};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3515,_fy3515,_felx3515,_fehx3515,_fely3515,_fehy3515);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3515 = new TH1F("Graph_Graph3515","",100,-100,100);
   Graph_Graph3515->SetMinimum(0);
   Graph_Graph3515->SetMaximum(1.5);
   Graph_Graph3515->SetDirectory(0);
   Graph_Graph3515->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3515->SetLineColor(ci);
   Graph_Graph3515->GetXaxis()->SetRange(1,100);
   Graph_Graph3515->GetXaxis()->CenterTitle(true);
   Graph_Graph3515->GetXaxis()->SetLabelFont(42);
   Graph_Graph3515->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3515->GetXaxis()->SetTitleFont(42);
   Graph_Graph3515->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3515->GetYaxis()->CenterTitle(true);
   Graph_Graph3515->GetYaxis()->SetLabelFont(42);
   Graph_Graph3515->GetYaxis()->SetTitleFont(42);
   Graph_Graph3515->GetZaxis()->SetLabelFont(42);
   Graph_Graph3515->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3515->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3515);
   
   grae->Draw("iaap");
   TLine *line = new TLine(-100,0.7,100,0.7);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-100,1,100,1);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-100,1.3,100,1.3);
   line->SetLineStyle(2);
   line->Draw();
   lower_pad->Modified();
   p1->cd();
  
// ------------>Primitives in pad: top_pad
   TPad *top_pad = new TPad("top_pad", "",0.0025,0.0025,0.9975,0.9975);
   top_pad->Draw();
   top_pad->cd();
   top_pad->Range(0,0,1,1);
   top_pad->SetFillColor(0);
   top_pad->SetFillStyle(4000);
   top_pad->SetBorderMode(0);
   top_pad->SetBorderSize(2);
   top_pad->SetFrameBorderMode(0);
   TGaxis *gaxis = new TGaxis(0.1,0.335,0.9,0.335,-100,100,510,"+U");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0);
   gaxis->SetTitleOffset(1);
   gaxis->SetTitleSize(0.035);
   gaxis->SetTitleColor(1);
   gaxis->SetTitleFont(42);
   gaxis->SetLabelFont(42);
   gaxis->Draw();
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,5.347967,510,"S");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.035);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0);
   gaxis->SetTitleOffset(0);
   gaxis->SetTitleSize(0.035);
   gaxis->SetTitleColor(1);
   gaxis->SetTitleFont(42);
   gaxis->SetTitle("Normalised entries");
   gaxis->SetLabelFont(42);
   gaxis->Draw();
   gaxis = new TGaxis(0.1,0.09000001,0.9,0.09000001,-100,100,510,"+S");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.035);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0);
   gaxis->SetTitleOffset(1);
   gaxis->SetTitleSize(0.035);
   gaxis->SetTitleColor(1);
   gaxis->SetTitleFont(42);
   gaxis->SetTitle("#theta_{y} [mrad]");
   gaxis->SetLabelFont(42);
   gaxis->Draw();
   gaxis = new TGaxis(0.1,0.09000001,0.1,0.285,0,1.5,510,"-S");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.035);
   gaxis->SetTickSize(0.09153846);
   gaxis->SetGridLength(0);
   gaxis->SetTitleOffset(0);
   gaxis->SetTitleSize(0.035);
   gaxis->SetTitleColor(1);
   gaxis->SetTitleFont(42);
   gaxis->SetTitle("Ratio");
   gaxis->SetLabelFont(42);
   gaxis->Draw();
   top_pad->Modified();
   p1->cd();
//Primitive: TRatioPlot/A ratio of histograms. You must implement TRatioPlot::SavePrimitive
   p1->Modified();
   c->cd();
  
// ------------>Primitives in pad: p2
   TPad *p2 = new TPad("p2", "p2",0.69,0.69,0.99,0.99);
   p2->Draw();
   p2->cd();
   p2->Range(0,0,1,1);
   p2->SetFillColor(0);
   p2->SetBorderMode(0);
   p2->SetBorderSize(2);
   p2->SetFrameBorderMode(0);
   
   TH2D *ThetaY_vs_Y_35_40__1544 = new TH2D("ThetaY_vs_Y_35_40__1544","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_35_40__1544->SetBinContent(8080,4);
   ThetaY_vs_Y_35_40__1544->SetBinContent(8106,861);
   ThetaY_vs_Y_35_40__1544->SetBinContent(8132,2591);
   ThetaY_vs_Y_35_40__1544->SetBinContent(8158,3474);
   ThetaY_vs_Y_35_40__1544->SetBinContent(8184,4027);
   ThetaY_vs_Y_35_40__1544->SetBinContent(8210,4130);
   ThetaY_vs_Y_35_40__1544->SetBinContent(8236,4186);
   ThetaY_vs_Y_35_40__1544->SetBinContent(8262,4065);
   ThetaY_vs_Y_35_40__1544->SetBinContent(8288,3600);
   ThetaY_vs_Y_35_40__1544->SetBinContent(8314,2627);
   ThetaY_vs_Y_35_40__1544->SetBinContent(8340,841);
   ThetaY_vs_Y_35_40__1544->SetBinContent(8366,1);
   ThetaY_vs_Y_35_40__1544->SetEntries(30407);
   ThetaY_vs_Y_35_40__1544->SetContour(20);
   ThetaY_vs_Y_35_40__1544->SetContourLevel(0,0);
   ThetaY_vs_Y_35_40__1544->SetContourLevel(1,209.3);
   ThetaY_vs_Y_35_40__1544->SetContourLevel(2,418.6);
   ThetaY_vs_Y_35_40__1544->SetContourLevel(3,627.9);
   ThetaY_vs_Y_35_40__1544->SetContourLevel(4,837.2);
   ThetaY_vs_Y_35_40__1544->SetContourLevel(5,1046.5);
   ThetaY_vs_Y_35_40__1544->SetContourLevel(6,1255.8);
   ThetaY_vs_Y_35_40__1544->SetContourLevel(7,1465.1);
   ThetaY_vs_Y_35_40__1544->SetContourLevel(8,1674.4);
   ThetaY_vs_Y_35_40__1544->SetContourLevel(9,1883.7);
   ThetaY_vs_Y_35_40__1544->SetContourLevel(10,2093);
   ThetaY_vs_Y_35_40__1544->SetContourLevel(11,2302.3);
   ThetaY_vs_Y_35_40__1544->SetContourLevel(12,2511.6);
   ThetaY_vs_Y_35_40__1544->SetContourLevel(13,2720.9);
   ThetaY_vs_Y_35_40__1544->SetContourLevel(14,2930.2);
   ThetaY_vs_Y_35_40__1544->SetContourLevel(15,3139.5);
   ThetaY_vs_Y_35_40__1544->SetContourLevel(16,3348.8);
   ThetaY_vs_Y_35_40__1544->SetContourLevel(17,3558.1);
   ThetaY_vs_Y_35_40__1544->SetContourLevel(18,3767.4);
   ThetaY_vs_Y_35_40__1544->SetContourLevel(19,3976.7);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_35_40__1544->SetLineColor(ci);
   ThetaY_vs_Y_35_40__1544->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_35_40__1544->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_35_40__1544->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_35_40__1544->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__1544->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_35_40__1544->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__1544->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_35_40__1544->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_35_40__1544->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_35_40__1544->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__1544->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__1544->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__1544->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_35_40__1544->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__1544->Draw("COL");
   p2->Modified();
   c->cd();
   
   TLegend *leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(24);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("ThetaY_35_40","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12S18_ThetaY_35_40","Reco vertices","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
