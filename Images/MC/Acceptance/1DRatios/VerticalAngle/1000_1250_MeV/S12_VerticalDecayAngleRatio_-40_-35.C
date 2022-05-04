void S12_VerticalDecayAngleRatio_-40_-35()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:47 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06917902,125,1.314401);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI40_mI35__699 = new TH1D("S12_ThetaY_mI40_mI35__699","",630,-1575,1575);
   S12_ThetaY_mI40_mI35__699->SetBinContent(315,0.6388889);
   S12_ThetaY_mI40_mI35__699->SetBinContent(316,0.8611111);
   S12_ThetaY_mI40_mI35__699->SetBinContent(317,0.8888889);
   S12_ThetaY_mI40_mI35__699->SetBinContent(318,1);
   S12_ThetaY_mI40_mI35__699->SetBinContent(319,0.6944444);
   S12_ThetaY_mI40_mI35__699->SetBinContent(320,0.6944444);
   S12_ThetaY_mI40_mI35__699->SetBinContent(321,0.5277778);
   S12_ThetaY_mI40_mI35__699->SetBinContent(322,0.6111111);
   S12_ThetaY_mI40_mI35__699->SetBinContent(323,0.5277778);
   S12_ThetaY_mI40_mI35__699->SetBinContent(324,0.2222222);
   S12_ThetaY_mI40_mI35__699->SetBinContent(325,0.02777778);
   S12_ThetaY_mI40_mI35__699->SetBinError(315,0.1332175);
   S12_ThetaY_mI40_mI35__699->SetBinError(316,0.1546601);
   S12_ThetaY_mI40_mI35__699->SetBinError(317,0.1571348);
   S12_ThetaY_mI40_mI35__699->SetBinError(318,0.1666667);
   S12_ThetaY_mI40_mI35__699->SetBinError(319,0.1388889);
   S12_ThetaY_mI40_mI35__699->SetBinError(320,0.1388889);
   S12_ThetaY_mI40_mI35__699->SetBinError(321,0.1210805);
   S12_ThetaY_mI40_mI35__699->SetBinError(322,0.1302893);
   S12_ThetaY_mI40_mI35__699->SetBinError(323,0.1210805);
   S12_ThetaY_mI40_mI35__699->SetBinError(324,0.07856742);
   S12_ThetaY_mI40_mI35__699->SetBinError(325,0.02777778);
   S12_ThetaY_mI40_mI35__699->SetMinimum(0);
   S12_ThetaY_mI40_mI35__699->SetMaximum(1.176043);
   S12_ThetaY_mI40_mI35__699->SetEntries(241);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI40_mI35__699->SetLineColor(ci);
   S12_ThetaY_mI40_mI35__699->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI40_mI35__699->SetMarkerColor(ci);
   S12_ThetaY_mI40_mI35__699->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI40_mI35__699->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI40_mI35__699->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI40_mI35__699->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI40_mI35__699->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI40_mI35__699->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI40_mI35__699->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI40_mI35__699->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI40_mI35__699->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI40_mI35__699->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI40_mI35__699->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI40_mI35__699->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI40_mI35__699->Draw("AE");
   
   TH1D *ThetaY_mI40_mI35__700 = new TH1D("ThetaY_mI40_mI35__700","",630,-1575,1575);
   ThetaY_mI40_mI35__700->SetBinContent(306,0.04876823);
   ThetaY_mI40_mI35__700->SetBinContent(307,0.3031674);
   ThetaY_mI40_mI35__700->SetBinContent(308,0.5801911);
   ThetaY_mI40_mI35__700->SetBinContent(309,0.7921066);
   ThetaY_mI40_mI35__700->SetBinContent(310,0.8941679);
   ThetaY_mI40_mI35__700->SetBinContent(311,0.9391654);
   ThetaY_mI40_mI35__700->SetBinContent(312,1.029412);
   ThetaY_mI40_mI35__700->SetBinContent(313,1);
   ThetaY_mI40_mI35__700->SetBinContent(314,1.06913);
   ThetaY_mI40_mI35__700->SetBinContent(315,1.055304);
   ThetaY_mI40_mI35__700->SetBinContent(316,1.032177);
   ThetaY_mI40_mI35__700->SetBinContent(317,1.066114);
   ThetaY_mI40_mI35__700->SetBinContent(318,1);
   ThetaY_mI40_mI35__700->SetBinContent(319,1.004525);
   ThetaY_mI40_mI35__700->SetBinContent(320,0.9580191);
   ThetaY_mI40_mI35__700->SetBinContent(321,0.889643);
   ThetaY_mI40_mI35__700->SetBinContent(322,0.7717446);
   ThetaY_mI40_mI35__700->SetBinContent(323,0.6060835);
   ThetaY_mI40_mI35__700->SetBinContent(324,0.3197587);
   ThetaY_mI40_mI35__700->SetBinContent(325,0.05027652);
   ThetaY_mI40_mI35__700->SetBinError(306,0.003501355);
   ThetaY_mI40_mI35__700->SetBinError(307,0.008729892);
   ThetaY_mI40_mI35__700->SetBinError(308,0.01207683);
   ThetaY_mI40_mI35__700->SetBinError(309,0.01411105);
   ThetaY_mI40_mI35__700->SetBinError(310,0.01499261);
   ThetaY_mI40_mI35__700->SetBinError(311,0.01536522);
   ThetaY_mI40_mI35__700->SetBinError(312,0.01608652);
   ThetaY_mI40_mI35__700->SetBinError(313,0.01585505);
   ThetaY_mI40_mI35__700->SetBinError(314,0.01639392);
   ThetaY_mI40_mI35__700->SetBinError(315,0.01628758);
   ThetaY_mI40_mI35__700->SetBinError(316,0.01610811);
   ThetaY_mI40_mI35__700->SetBinError(317,0.01637078);
   ThetaY_mI40_mI35__700->SetBinError(318,0.01585505);
   ThetaY_mI40_mI35__700->SetBinError(319,0.01589088);
   ThetaY_mI40_mI35__700->SetBinError(320,0.01551868);
   ThetaY_mI40_mI35__700->SetBinError(321,0.01495462);
   ThetaY_mI40_mI35__700->SetBinError(322,0.0139285);
   ThetaY_mI40_mI35__700->SetBinError(323,0.01234337);
   ThetaY_mI40_mI35__700->SetBinError(324,0.008965588);
   ThetaY_mI40_mI35__700->SetBinError(325,0.003555087);
   ThetaY_mI40_mI35__700->SetEntries(61300);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI40_mI35__700->SetLineColor(ci);
   ThetaY_mI40_mI35__700->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI40_mI35__700->SetMarkerColor(ci);
   ThetaY_mI40_mI35__700->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI40_mI35__700->GetXaxis()->CenterTitle(true);
   ThetaY_mI40_mI35__700->GetXaxis()->SetLabelFont(42);
   ThetaY_mI40_mI35__700->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI40_mI35__700->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI40_mI35__700->GetXaxis()->SetTitleFont(42);
   ThetaY_mI40_mI35__700->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI40_mI35__700->GetYaxis()->CenterTitle(true);
   ThetaY_mI40_mI35__700->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI40_mI35__700->GetYaxis()->SetLabelFont(42);
   ThetaY_mI40_mI35__700->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI40_mI35__700->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI40_mI35__700->GetYaxis()->SetTitleFont(42);
   ThetaY_mI40_mI35__700->GetZaxis()->SetLabelFont(42);
   ThetaY_mI40_mI35__700->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI40_mI35__700->GetZaxis()->SetTitleFont(42);
   ThetaY_mI40_mI35__700->Draw("AEsame");
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
   
   Double_t _fx3234[20] = {
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
   47.5};
   Double_t _fy3234[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.6054073,
   0.8342669,
   0.8337656,
   1,
   0.6913163,
   0.7248754,
   0.5932467,
   0.7918567,
   0.8708005,
   0.6949686,
   0.5525};
   Double_t _felx3234[20] = {
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
   Double_t _fely3234[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.1256407,
   0.1495704,
   0.1471518,
   0.1666179,
   0.1377452,
   0.1444528,
   0.1352364,
   0.1681055,
   0.1987432,
   0.2411643,
   0.4574876};
   Double_t _fehx3234[20] = {
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
   Double_t _fehy3234[20] = {
   1.053615,
   0.1688128,
   0.08817766,
   0.06458024,
   0.05720707,
   0.05446548,
   0.04968953,
   0.05115133,
   0.04784315,
   0.1549154,
   0.1791772,
   0.1757779,
   0.1970465,
   0.1684088,
   0.1766171,
   0.1702914,
   0.2083084,
   0.2503649,
   0.3443274,
   1.280999};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3234,_fy3234,_felx3234,_fehx3234,_fely3234,_fehy3234);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3234 = new TH1F("Graph_Graph3234","",100,-100,100);
   Graph_Graph3234->SetMinimum(0);
   Graph_Graph3234->SetMaximum(1.5);
   Graph_Graph3234->SetDirectory(0);
   Graph_Graph3234->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3234->SetLineColor(ci);
   Graph_Graph3234->GetXaxis()->SetRange(1,100);
   Graph_Graph3234->GetXaxis()->CenterTitle(true);
   Graph_Graph3234->GetXaxis()->SetLabelFont(42);
   Graph_Graph3234->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3234->GetXaxis()->SetTitleFont(42);
   Graph_Graph3234->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3234->GetYaxis()->CenterTitle(true);
   Graph_Graph3234->GetYaxis()->SetLabelFont(42);
   Graph_Graph3234->GetYaxis()->SetTitleFont(42);
   Graph_Graph3234->GetZaxis()->SetLabelFont(42);
   Graph_Graph3234->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3234->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3234);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.176043,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI40_mI35__701 = new TH2D("ThetaY_vs_Y_mI40_mI35__701","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI40_mI35__701->SetBinContent(7961,194);
   ThetaY_vs_Y_mI40_mI35__701->SetBinContent(7987,1206);
   ThetaY_vs_Y_mI40_mI35__701->SetBinContent(8013,2308);
   ThetaY_vs_Y_mI40_mI35__701->SetBinContent(8039,3151);
   ThetaY_vs_Y_mI40_mI35__701->SetBinContent(8065,3557);
   ThetaY_vs_Y_mI40_mI35__701->SetBinContent(8091,3736);
   ThetaY_vs_Y_mI40_mI35__701->SetBinContent(8117,4095);
   ThetaY_vs_Y_mI40_mI35__701->SetBinContent(8143,3978);
   ThetaY_vs_Y_mI40_mI35__701->SetBinContent(8169,4253);
   ThetaY_vs_Y_mI40_mI35__701->SetBinContent(8195,4198);
   ThetaY_vs_Y_mI40_mI35__701->SetBinContent(8221,4106);
   ThetaY_vs_Y_mI40_mI35__701->SetBinContent(8247,4241);
   ThetaY_vs_Y_mI40_mI35__701->SetBinContent(8273,3978);
   ThetaY_vs_Y_mI40_mI35__701->SetBinContent(8299,3996);
   ThetaY_vs_Y_mI40_mI35__701->SetBinContent(8325,3811);
   ThetaY_vs_Y_mI40_mI35__701->SetBinContent(8351,3539);
   ThetaY_vs_Y_mI40_mI35__701->SetBinContent(8377,3070);
   ThetaY_vs_Y_mI40_mI35__701->SetBinContent(8403,2411);
   ThetaY_vs_Y_mI40_mI35__701->SetBinContent(8429,1272);
   ThetaY_vs_Y_mI40_mI35__701->SetBinContent(8455,200);
   ThetaY_vs_Y_mI40_mI35__701->SetEntries(61300);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI40_mI35__701->SetLineColor(ci);
   ThetaY_vs_Y_mI40_mI35__701->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI40_mI35__701->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI40_mI35__701->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI40_mI35__701->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI40_mI35__701->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI40_mI35__701->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI40_mI35__701->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI40_mI35__701->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI40_mI35__701->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI40_mI35__701->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI40_mI35__701->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI40_mI35__701->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI40_mI35__701->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI40_mI35__701->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI40_mI35__701->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-40_-35","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_-40_-35","Reco vertices","lpf");
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
