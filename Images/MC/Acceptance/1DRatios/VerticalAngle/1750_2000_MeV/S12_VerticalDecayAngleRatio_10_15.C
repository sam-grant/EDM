void S12_VerticalDecayAngleRatio_10_15()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:59 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-133.6618,125,2539.574);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_10_15__1242 = new TH1D("S12_ThetaY_10_15__1242","",630,-1575,1575);
   S12_ThetaY_10_15__1242->SetBinContent(309,1);
   S12_ThetaY_10_15__1242->SetBinContent(310,12);
   S12_ThetaY_10_15__1242->SetBinContent(311,96);
   S12_ThetaY_10_15__1242->SetBinContent(312,177);
   S12_ThetaY_10_15__1242->SetBinContent(313,229);
   S12_ThetaY_10_15__1242->SetBinContent(314,227);
   S12_ThetaY_10_15__1242->SetBinContent(315,248);
   S12_ThetaY_10_15__1242->SetBinContent(316,221);
   S12_ThetaY_10_15__1242->SetBinContent(317,232);
   S12_ThetaY_10_15__1242->SetBinContent(318,109);
   S12_ThetaY_10_15__1242->SetBinContent(319,16);
   S12_ThetaY_10_15__1242->SetBinError(309,1);
   S12_ThetaY_10_15__1242->SetBinError(310,3.464102);
   S12_ThetaY_10_15__1242->SetBinError(311,9.797959);
   S12_ThetaY_10_15__1242->SetBinError(312,13.30413);
   S12_ThetaY_10_15__1242->SetBinError(313,15.13275);
   S12_ThetaY_10_15__1242->SetBinError(314,15.06652);
   S12_ThetaY_10_15__1242->SetBinError(315,15.74802);
   S12_ThetaY_10_15__1242->SetBinError(316,14.86607);
   S12_ThetaY_10_15__1242->SetBinError(317,15.23155);
   S12_ThetaY_10_15__1242->SetBinError(318,10.44031);
   S12_ThetaY_10_15__1242->SetBinError(319,4);
   S12_ThetaY_10_15__1242->SetMinimum(0);
   S12_ThetaY_10_15__1242->SetMaximum(2272.25);
   S12_ThetaY_10_15__1242->SetEntries(1568);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_10_15__1242->SetLineColor(ci);
   S12_ThetaY_10_15__1242->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_10_15__1242->SetMarkerColor(ci);
   S12_ThetaY_10_15__1242->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_10_15__1242->GetXaxis()->SetRange(296,335);
   S12_ThetaY_10_15__1242->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_10_15__1242->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_10_15__1242->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_10_15__1242->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_10_15__1242->GetYaxis()->CenterTitle(true);
   S12_ThetaY_10_15__1242->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_10_15__1242->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_10_15__1242->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_10_15__1242->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_10_15__1242->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_10_15__1242->Draw("AE");
   
   TH1D *ThetaY_10_15__1243 = new TH1D("ThetaY_10_15__1243","",630,-1575,1575);
   ThetaY_10_15__1243->SetBinContent(309,1);
   ThetaY_10_15__1243->SetBinContent(310,297);
   ThetaY_10_15__1243->SetBinContent(311,1097.818);
   ThetaY_10_15__1243->SetBinContent(312,1576.364);
   ThetaY_10_15__1243->SetBinContent(313,1827.591);
   ThetaY_10_15__1243->SetBinContent(314,1982.682);
   ThetaY_10_15__1243->SetBinContent(315,2064.545);
   ThetaY_10_15__1243->SetBinContent(316,2065.682);
   ThetaY_10_15__1243->SetBinContent(317,1999.591);
   ThetaY_10_15__1243->SetBinContent(318,1844.136);
   ThetaY_10_15__1243->SetBinContent(319,1545.909);
   ThetaY_10_15__1243->SetBinContent(320,1103.818);
   ThetaY_10_15__1243->SetBinContent(321,307.2273);
   ThetaY_10_15__1243->SetBinContent(322,1.090909);
   ThetaY_10_15__1243->SetBinError(309,0.2132007);
   ThetaY_10_15__1243->SetBinError(310,3.674235);
   ThetaY_10_15__1243->SetBinError(311,7.064052);
   ThetaY_10_15__1243->SetBinError(312,8.464803);
   ThetaY_10_15__1243->SetBinError(313,9.114401);
   ThetaY_10_15__1243->SetBinError(314,9.493256);
   ThetaY_10_15__1243->SetBinError(315,9.687258);
   ThetaY_10_15__1243->SetBinError(316,9.689924);
   ThetaY_10_15__1243->SetBinError(317,9.533651);
   ThetaY_10_15__1243->SetBinError(318,9.155566);
   ThetaY_10_15__1243->SetBinError(319,8.382637);
   ThetaY_10_15__1243->SetBinError(320,7.083329);
   ThetaY_10_15__1243->SetBinError(321,3.736961);
   ThetaY_10_15__1243->SetBinError(322,0.2226809);
   ThetaY_10_15__1243->SetEntries(389718);

   ci = TColor::GetColor("#ff0000");
   ThetaY_10_15__1243->SetLineColor(ci);
   ThetaY_10_15__1243->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_10_15__1243->SetMarkerColor(ci);
   ThetaY_10_15__1243->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_10_15__1243->GetXaxis()->CenterTitle(true);
   ThetaY_10_15__1243->GetXaxis()->SetLabelFont(42);
   ThetaY_10_15__1243->GetXaxis()->SetTitleSize(0.04);
   ThetaY_10_15__1243->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_10_15__1243->GetXaxis()->SetTitleFont(42);
   ThetaY_10_15__1243->GetYaxis()->SetTitle("Tracks");
   ThetaY_10_15__1243->GetYaxis()->CenterTitle(true);
   ThetaY_10_15__1243->GetYaxis()->SetNdivisions(4000510);
   ThetaY_10_15__1243->GetYaxis()->SetLabelFont(42);
   ThetaY_10_15__1243->GetYaxis()->SetTitleSize(0.04);
   ThetaY_10_15__1243->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_10_15__1243->GetYaxis()->SetTitleFont(42);
   ThetaY_10_15__1243->GetZaxis()->SetLabelFont(42);
   ThetaY_10_15__1243->GetZaxis()->SetTitleOffset(1);
   ThetaY_10_15__1243->GetZaxis()->SetTitleFont(42);
   ThetaY_10_15__1243->Draw("AEsame");
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
   
   Double_t _fx3415[14] = {
   -32.5,
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
   27.5,
   32.5};
   Double_t _fy3415[14] = {
   1,
   0.04040404,
   0.08744617,
   0.1122837,
   0.1253016,
   0.1144914,
   0.1201233,
   0.1069865,
   0.1160237,
   0.05910626,
   0.0103499,
   0,
   0,
   0};
   Double_t _felx3415[14] = {
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
   2.5,
   2.5,
   2.5};
   Double_t _fely3415[14] = {
   0.8341351,
   0.01150897,
   0.008926879,
   0.008453158,
   0.008297544,
   0.007613112,
   0.007643395,
   0.007208631,
   0.007631803,
   0.005660178,
   0.002560745,
   0,
   0,
   0};
   Double_t _fehx3415[14] = {
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
   2.5,
   2.5,
   2.5};
   Double_t _fehy3415[14] = {
   2.476696,
   0.01537238,
   0.009888655,
   0.00911509,
   0.008866307,
   0.008137182,
   0.008146112,
   0.00771168,
   0.008151297,
   0.006230171,
   0.003289094,
   0.00166793,
   0.005993193,
   1.754018};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(14,_fx3415,_fy3415,_felx3415,_fehx3415,_fely3415,_fehy3415);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3415 = new TH1F("Graph_Graph3415","",100,-100,100);
   Graph_Graph3415->SetMinimum(0);
   Graph_Graph3415->SetMaximum(1.5);
   Graph_Graph3415->SetDirectory(0);
   Graph_Graph3415->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3415->SetLineColor(ci);
   Graph_Graph3415->GetXaxis()->SetRange(1,100);
   Graph_Graph3415->GetXaxis()->CenterTitle(true);
   Graph_Graph3415->GetXaxis()->SetLabelFont(42);
   Graph_Graph3415->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3415->GetXaxis()->SetTitleFont(42);
   Graph_Graph3415->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3415->GetYaxis()->CenterTitle(true);
   Graph_Graph3415->GetYaxis()->SetLabelFont(42);
   Graph_Graph3415->GetYaxis()->SetTitleFont(42);
   Graph_Graph3415->GetZaxis()->SetLabelFont(42);
   Graph_Graph3415->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3415->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3415);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,2272.25,510,"S");
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
   
   TH2D *ThetaY_vs_Y_10_15__1244 = new TH2D("ThetaY_vs_Y_10_15__1244","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_10_15__1244->SetBinContent(8049,22);
   ThetaY_vs_Y_10_15__1244->SetBinContent(8075,6534);
   ThetaY_vs_Y_10_15__1244->SetBinContent(8101,24152);
   ThetaY_vs_Y_10_15__1244->SetBinContent(8127,34680);
   ThetaY_vs_Y_10_15__1244->SetBinContent(8153,40207);
   ThetaY_vs_Y_10_15__1244->SetBinContent(8179,43619);
   ThetaY_vs_Y_10_15__1244->SetBinContent(8205,45420);
   ThetaY_vs_Y_10_15__1244->SetBinContent(8231,45445);
   ThetaY_vs_Y_10_15__1244->SetBinContent(8257,43991);
   ThetaY_vs_Y_10_15__1244->SetBinContent(8283,40571);
   ThetaY_vs_Y_10_15__1244->SetBinContent(8309,34010);
   ThetaY_vs_Y_10_15__1244->SetBinContent(8335,24284);
   ThetaY_vs_Y_10_15__1244->SetBinContent(8361,6759);
   ThetaY_vs_Y_10_15__1244->SetBinContent(8387,24);
   ThetaY_vs_Y_10_15__1244->SetEntries(389718);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_10_15__1244->SetLineColor(ci);
   ThetaY_vs_Y_10_15__1244->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_10_15__1244->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_10_15__1244->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_10_15__1244->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__1244->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_10_15__1244->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__1244->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_10_15__1244->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_10_15__1244->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_10_15__1244->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__1244->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__1244->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__1244->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_10_15__1244->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__1244->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_10_15","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_10_15","Reco vertices","lpf");
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
