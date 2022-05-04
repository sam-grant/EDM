void S12S18_VerticalDecayAngleRatio_-10_-5()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:42 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06532902,125,1.241251);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_mI10_mI5__489 = new TH1D("S12S18_ThetaY_mI10_mI5__489","",630,-1575,1575);
   S12S18_ThetaY_mI10_mI5__489->SetBinContent(307,0.01388889);
   S12S18_ThetaY_mI10_mI5__489->SetBinContent(308,0.1157407);
   S12S18_ThetaY_mI10_mI5__489->SetBinContent(309,0.5509259);
   S12S18_ThetaY_mI10_mI5__489->SetBinContent(310,0.8148148);
   S12S18_ThetaY_mI10_mI5__489->SetBinContent(311,0.8842593);
   S12S18_ThetaY_mI10_mI5__489->SetBinContent(312,0.9861111);
   S12S18_ThetaY_mI10_mI5__489->SetBinContent(313,0.9490741);
   S12S18_ThetaY_mI10_mI5__489->SetBinContent(314,0.9166667);
   S12S18_ThetaY_mI10_mI5__489->SetBinContent(315,0.8981481);
   S12S18_ThetaY_mI10_mI5__489->SetBinContent(316,1);
   S12S18_ThetaY_mI10_mI5__489->SetBinContent(317,0.9351852);
   S12S18_ThetaY_mI10_mI5__489->SetBinContent(318,1);
   S12S18_ThetaY_mI10_mI5__489->SetBinContent(319,0.9907407);
   S12S18_ThetaY_mI10_mI5__489->SetBinContent(320,0.912037);
   S12S18_ThetaY_mI10_mI5__489->SetBinContent(321,0.9398148);
   S12S18_ThetaY_mI10_mI5__489->SetBinContent(322,0.9490741);
   S12S18_ThetaY_mI10_mI5__489->SetBinContent(323,0.8148148);
   S12S18_ThetaY_mI10_mI5__489->SetBinContent(324,0.712963);
   S12S18_ThetaY_mI10_mI5__489->SetBinContent(325,0.4444444);
   S12S18_ThetaY_mI10_mI5__489->SetBinContent(326,0.1388889);
   S12S18_ThetaY_mI10_mI5__489->SetBinContent(327,0.02314815);
   S12S18_ThetaY_mI10_mI5__489->SetBinError(307,0.008018754);
   S12S18_ThetaY_mI10_mI5__489->SetBinError(308,0.02314815);
   S12S18_ThetaY_mI10_mI5__489->SetBinError(309,0.0505033);
   S12S18_ThetaY_mI10_mI5__489->SetBinError(310,0.06141898);
   S12S18_ThetaY_mI10_mI5__489->SetBinError(311,0.06398275);
   S12S18_ThetaY_mI10_mI5__489->SetBinError(312,0.06756722);
   S12S18_ThetaY_mI10_mI5__489->SetBinError(313,0.06628621);
   S12S18_ThetaY_mI10_mI5__489->SetBinError(314,0.06514466);
   S12S18_ThetaY_mI10_mI5__489->SetBinError(315,0.06448328);
   S12S18_ThetaY_mI10_mI5__489->SetBinError(316,0.06804138);
   S12S18_ThetaY_mI10_mI5__489->SetBinError(317,0.0657994);
   S12S18_ThetaY_mI10_mI5__489->SetBinError(318,0.06804138);
   S12S18_ThetaY_mI10_mI5__489->SetBinError(319,0.06772564);
   S12S18_ThetaY_mI10_mI5__489->SetBinError(320,0.06497995);
   S12S18_ThetaY_mI10_mI5__489->SetBinError(321,0.06596207);
   S12S18_ThetaY_mI10_mI5__489->SetBinError(322,0.06628621);
   S12S18_ThetaY_mI10_mI5__489->SetBinError(323,0.06141898);
   S12S18_ThetaY_mI10_mI5__489->SetBinError(324,0.05745219);
   S12S18_ThetaY_mI10_mI5__489->SetBinError(325,0.04536092);
   S12S18_ThetaY_mI10_mI5__489->SetBinError(326,0.02535753);
   S12S18_ThetaY_mI10_mI5__489->SetBinError(327,0.01035217);
   S12S18_ThetaY_mI10_mI5__489->SetMinimum(0);
   S12S18_ThetaY_mI10_mI5__489->SetMaximum(1.110593);
   S12S18_ThetaY_mI10_mI5__489->SetEntries(3238);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI10_mI5__489->SetLineColor(ci);
   S12S18_ThetaY_mI10_mI5__489->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI10_mI5__489->SetMarkerColor(ci);
   S12S18_ThetaY_mI10_mI5__489->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_mI10_mI5__489->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_mI10_mI5__489->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI10_mI5__489->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI10_mI5__489->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI10_mI5__489->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_mI10_mI5__489->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_mI10_mI5__489->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI10_mI5__489->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI10_mI5__489->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI10_mI5__489->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI10_mI5__489->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI10_mI5__489->Draw("AE");
   
   TH1D *ThetaY_mI10_mI5__490 = new TH1D("ThetaY_mI10_mI5__490","",630,-1575,1575);
   ThetaY_mI10_mI5__490->SetBinContent(300,0.005453578);
   ThetaY_mI10_mI5__490->SetBinContent(301,0.06504389);
   ThetaY_mI10_mI5__490->SetBinContent(302,0.1919127);
   ThetaY_mI10_mI5__490->SetBinContent(303,0.3971269);
   ThetaY_mI10_mI5__490->SetBinContent(304,0.6043097);
   ThetaY_mI10_mI5__490->SetBinContent(305,0.7488694);
   ThetaY_mI10_mI5__490->SetBinContent(306,0.8509444);
   ThetaY_mI10_mI5__490->SetBinContent(307,0.9218143);
   ThetaY_mI10_mI5__490->SetBinContent(308,0.969859);
   ThetaY_mI10_mI5__490->SetBinContent(309,0.9994147);
   ThetaY_mI10_mI5__490->SetBinContent(310,1.008061);
   ThetaY_mI10_mI5__490->SetBinContent(311,1.004895);
   ThetaY_mI10_mI5__490->SetBinContent(312,1.008061);
   ThetaY_mI10_mI5__490->SetBinContent(313,0.9951051);
   ThetaY_mI10_mI5__490->SetBinContent(314,1.000293);
   ThetaY_mI10_mI5__490->SetBinContent(315,0.9874169);
   ThetaY_mI10_mI5__490->SetBinContent(316,1);
   ThetaY_mI10_mI5__490->SetBinContent(317,0.9935887);
   ThetaY_mI10_mI5__490->SetBinContent(318,1.003751);
   ThetaY_mI10_mI5__490->SetBinContent(319,1.00407);
   ThetaY_mI10_mI5__490->SetBinContent(320,1.006252);
   ThetaY_mI10_mI5__490->SetBinContent(321,1.00963);
   ThetaY_mI10_mI5__490->SetBinContent(322,0.9988827);
   ThetaY_mI10_mI5__490->SetBinContent(323,0.9679702);
   ThetaY_mI10_mI5__490->SetBinContent(324,0.9254057);
   ThetaY_mI10_mI5__490->SetBinContent(325,0.85693);
   ThetaY_mI10_mI5__490->SetBinContent(326,0.749162);
   ThetaY_mI10_mI5__490->SetBinContent(327,0.6035382);
   ThetaY_mI10_mI5__490->SetBinContent(328,0.3918329);
   ThetaY_mI10_mI5__490->SetBinContent(329,0.1900771);
   ThetaY_mI10_mI5__490->SetBinContent(330,0.06389997);
   ThetaY_mI10_mI5__490->SetBinContent(331,0.006331471);
   ThetaY_mI10_mI5__490->SetBinError(300,0.0003808944);
   ThetaY_mI10_mI5__490->SetBinError(301,0.001315428);
   ThetaY_mI10_mI5__490->SetBinError(302,0.002259518);
   ThetaY_mI10_mI5__490->SetBinError(303,0.003250338);
   ThetaY_mI10_mI5__490->SetBinError(304,0.004009531);
   ThetaY_mI10_mI5__490->SetBinError(305,0.004463411);
   ThetaY_mI10_mI5__490->SetBinError(306,0.00475789);
   ThetaY_mI10_mI5__490->SetBinError(307,0.004952056);
   ThetaY_mI10_mI5__490->SetBinError(308,0.005079467);
   ThetaY_mI10_mI5__490->SetBinError(309,0.005156283);
   ThetaY_mI10_mI5__490->SetBinError(310,0.005178538);
   ThetaY_mI10_mI5__490->SetBinError(311,0.0051704);
   ThetaY_mI10_mI5__490->SetBinError(312,0.005178538);
   ThetaY_mI10_mI5__490->SetBinError(313,0.005145153);
   ThetaY_mI10_mI5__490->SetBinError(314,0.005158547);
   ThetaY_mI10_mI5__490->SetBinError(315,0.005125239);
   ThetaY_mI10_mI5__490->SetBinError(316,0.005157792);
   ThetaY_mI10_mI5__490->SetBinError(317,0.005141232);
   ThetaY_mI10_mI5__490->SetBinError(318,0.005167457);
   ThetaY_mI10_mI5__490->SetBinError(319,0.005168278);
   ThetaY_mI10_mI5__490->SetBinError(320,0.005173889);
   ThetaY_mI10_mI5__490->SetBinError(321,0.005182568);
   ThetaY_mI10_mI5__490->SetBinError(322,0.00515491);
   ThetaY_mI10_mI5__490->SetBinError(323,0.005074518);
   ThetaY_mI10_mI5__490->SetBinError(324,0.004961693);
   ThetaY_mI10_mI5__490->SetBinError(325,0.004774595);
   ThetaY_mI10_mI5__490->SetBinError(326,0.004464283);
   ThetaY_mI10_mI5__490->SetBinError(327,0.004006971);
   ThetaY_mI10_mI5__490->SetBinError(328,0.0032286);
   ThetaY_mI10_mI5__490->SetBinError(329,0.002248686);
   ThetaY_mI10_mI5__490->SetBinError(330,0.00130381);
   ThetaY_mI10_mI5__490->SetBinError(331,0.0004104083);
   ThetaY_mI10_mI5__490->SetEntries(884489);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI10_mI5__490->SetLineColor(ci);
   ThetaY_mI10_mI5__490->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI10_mI5__490->SetMarkerColor(ci);
   ThetaY_mI10_mI5__490->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI10_mI5__490->GetXaxis()->CenterTitle(true);
   ThetaY_mI10_mI5__490->GetXaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__490->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI10_mI5__490->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI10_mI5__490->GetXaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__490->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI10_mI5__490->GetYaxis()->CenterTitle(true);
   ThetaY_mI10_mI5__490->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI10_mI5__490->GetYaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__490->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI10_mI5__490->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI10_mI5__490->GetYaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__490->GetZaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__490->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI10_mI5__490->GetZaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__490->Draw("AEsame");
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
   
   Double_t _fx3164[32] = {
   -77.5,
   -72.5,
   -67.5,
   -62.5,
   -57.5,
   -52.5,
   -47.5,
   -42.5,
   -37.5,
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
   32.5,
   37.5,
   42.5,
   47.5,
   52.5,
   57.5,
   62.5,
   67.5,
   72.5,
   77.5};
   Double_t _fy3164[32] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.01506691,
   0.1193377,
   0.5512486,
   0.8082994,
   0.879952,
   0.978226,
   0.9537426,
   0.9163985,
   0.9095937,
   1,
   0.9412196,
   0.996263,
   0.9867245,
   0.9063707,
   0.9308505,
   0.9501357,
   0.8417768,
   0.7704329,
   0.5186473,
   0.1853923,
   0.03835407,
   0,
   0,
   0,
   0};
   Double_t _felx3164[32] = {
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
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3164[32] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.008200196,
   0.02371466,
   0.050541,
   0.06101037,
   0.06377515,
   0.06716143,
   0.0667392,
   0.06524086,
   0.06541816,
   0.06818289,
   0.06634699,
   0.06792737,
   0.06758833,
   0.06468839,
   0.06545259,
   0.06648612,
   0.06354329,
   0.06215206,
   0.05291976,
   0.03367548,
   0.01656811,
   0,
   0,
   0,
   0};
   Double_t _fehx3164[32] = {
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
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3164[32] = {
   1.569912,
   0.1310878,
   0.04441777,
   0.0214636,
   0.01410468,
   0.01138186,
   0.01001651,
   0.01465726,
   0.02897125,
   0.05540321,
   0.06580061,
   0.06857552,
   0.07194064,
   0.07158305,
   0.07006136,
   0.07030307,
   0.07300014,
   0.07119908,
   0.07272651,
   0.07238641,
   0.06948047,
   0.07022688,
   0.07131154,
   0.06853297,
   0.06738219,
   0.05861773,
   0.04042966,
   0.02595112,
   0.02175361,
   0.04484677,
   0.1334354,
   1.351392};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3164,_fy3164,_felx3164,_fehx3164,_fely3164,_fehy3164);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3164 = new TH1F("Graph_Graph3164","",100,-100,100);
   Graph_Graph3164->SetMinimum(0);
   Graph_Graph3164->SetMaximum(1.5);
   Graph_Graph3164->SetDirectory(0);
   Graph_Graph3164->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3164->SetLineColor(ci);
   Graph_Graph3164->GetXaxis()->SetRange(1,100);
   Graph_Graph3164->GetXaxis()->CenterTitle(true);
   Graph_Graph3164->GetXaxis()->SetLabelFont(42);
   Graph_Graph3164->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3164->GetXaxis()->SetTitleFont(42);
   Graph_Graph3164->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3164->GetYaxis()->CenterTitle(true);
   Graph_Graph3164->GetYaxis()->SetLabelFont(42);
   Graph_Graph3164->GetYaxis()->SetTitleFont(42);
   Graph_Graph3164->GetZaxis()->SetLabelFont(42);
   Graph_Graph3164->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3164->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3164);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.110593,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI10_mI5__491 = new TH2D("ThetaY_vs_Y_mI10_mI5__491","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI10_mI5__491->SetBinContent(7811,205);
   ThetaY_vs_Y_mI10_mI5__491->SetBinContent(7837,2445);
   ThetaY_vs_Y_mI10_mI5__491->SetBinContent(7863,7214);
   ThetaY_vs_Y_mI10_mI5__491->SetBinContent(7889,14928);
   ThetaY_vs_Y_mI10_mI5__491->SetBinContent(7915,22716);
   ThetaY_vs_Y_mI10_mI5__491->SetBinContent(7941,28150);
   ThetaY_vs_Y_mI10_mI5__491->SetBinContent(7967,31987);
   ThetaY_vs_Y_mI10_mI5__491->SetBinContent(7993,34651);
   ThetaY_vs_Y_mI10_mI5__491->SetBinContent(8019,36457);
   ThetaY_vs_Y_mI10_mI5__491->SetBinContent(8045,37568);
   ThetaY_vs_Y_mI10_mI5__491->SetBinContent(8071,37893);
   ThetaY_vs_Y_mI10_mI5__491->SetBinContent(8097,37774);
   ThetaY_vs_Y_mI10_mI5__491->SetBinContent(8123,37893);
   ThetaY_vs_Y_mI10_mI5__491->SetBinContent(8149,37406);
   ThetaY_vs_Y_mI10_mI5__491->SetBinContent(8175,37601);
   ThetaY_vs_Y_mI10_mI5__491->SetBinContent(8201,37117);
   ThetaY_vs_Y_mI10_mI5__491->SetBinContent(8227,37590);
   ThetaY_vs_Y_mI10_mI5__491->SetBinContent(8253,37349);
   ThetaY_vs_Y_mI10_mI5__491->SetBinContent(8279,37731);
   ThetaY_vs_Y_mI10_mI5__491->SetBinContent(8305,37743);
   ThetaY_vs_Y_mI10_mI5__491->SetBinContent(8331,37825);
   ThetaY_vs_Y_mI10_mI5__491->SetBinContent(8357,37952);
   ThetaY_vs_Y_mI10_mI5__491->SetBinContent(8383,37548);
   ThetaY_vs_Y_mI10_mI5__491->SetBinContent(8409,36386);
   ThetaY_vs_Y_mI10_mI5__491->SetBinContent(8435,34786);
   ThetaY_vs_Y_mI10_mI5__491->SetBinContent(8461,32212);
   ThetaY_vs_Y_mI10_mI5__491->SetBinContent(8487,28161);
   ThetaY_vs_Y_mI10_mI5__491->SetBinContent(8513,22687);
   ThetaY_vs_Y_mI10_mI5__491->SetBinContent(8539,14729);
   ThetaY_vs_Y_mI10_mI5__491->SetBinContent(8565,7145);
   ThetaY_vs_Y_mI10_mI5__491->SetBinContent(8591,2402);
   ThetaY_vs_Y_mI10_mI5__491->SetBinContent(8617,238);
   ThetaY_vs_Y_mI10_mI5__491->SetEntries(884489);
   ThetaY_vs_Y_mI10_mI5__491->SetContour(20);
   ThetaY_vs_Y_mI10_mI5__491->SetContourLevel(0,0);
   ThetaY_vs_Y_mI10_mI5__491->SetContourLevel(1,1897.6);
   ThetaY_vs_Y_mI10_mI5__491->SetContourLevel(2,3795.2);
   ThetaY_vs_Y_mI10_mI5__491->SetContourLevel(3,5692.8);
   ThetaY_vs_Y_mI10_mI5__491->SetContourLevel(4,7590.4);
   ThetaY_vs_Y_mI10_mI5__491->SetContourLevel(5,9488);
   ThetaY_vs_Y_mI10_mI5__491->SetContourLevel(6,11385.6);
   ThetaY_vs_Y_mI10_mI5__491->SetContourLevel(7,13283.2);
   ThetaY_vs_Y_mI10_mI5__491->SetContourLevel(8,15180.8);
   ThetaY_vs_Y_mI10_mI5__491->SetContourLevel(9,17078.4);
   ThetaY_vs_Y_mI10_mI5__491->SetContourLevel(10,18976);
   ThetaY_vs_Y_mI10_mI5__491->SetContourLevel(11,20873.6);
   ThetaY_vs_Y_mI10_mI5__491->SetContourLevel(12,22771.2);
   ThetaY_vs_Y_mI10_mI5__491->SetContourLevel(13,24668.8);
   ThetaY_vs_Y_mI10_mI5__491->SetContourLevel(14,26566.4);
   ThetaY_vs_Y_mI10_mI5__491->SetContourLevel(15,28464);
   ThetaY_vs_Y_mI10_mI5__491->SetContourLevel(16,30361.6);
   ThetaY_vs_Y_mI10_mI5__491->SetContourLevel(17,32259.2);
   ThetaY_vs_Y_mI10_mI5__491->SetContourLevel(18,34156.8);
   ThetaY_vs_Y_mI10_mI5__491->SetContourLevel(19,36054.4);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI10_mI5__491->SetLineColor(ci);
   ThetaY_vs_Y_mI10_mI5__491->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI10_mI5__491->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI10_mI5__491->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI10_mI5__491->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__491->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI10_mI5__491->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__491->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI10_mI5__491->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI10_mI5__491->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI10_mI5__491->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__491->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__491->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__491->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI10_mI5__491->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__491->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-10_-5","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12S18_ThetaY_-10_-5","Reco vertices","lpf");
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
