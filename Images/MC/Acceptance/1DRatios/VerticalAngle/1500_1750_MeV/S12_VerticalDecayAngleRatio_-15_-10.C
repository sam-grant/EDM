void S12_VerticalDecayAngleRatio_-15_-10()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:55 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.07631636,125,1.450011);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI15_mI10__1056 = new TH1D("S12_ThetaY_mI15_mI10__1056","",630,-1575,1575);
   S12_ThetaY_mI15_mI10__1056->SetBinContent(311,0.01581028);
   S12_ThetaY_mI15_mI10__1056->SetBinContent(312,0.2687747);
   S12_ThetaY_mI15_mI10__1056->SetBinContent(313,0.9328063);
   S12_ThetaY_mI15_mI10__1056->SetBinContent(314,1.12253);
   S12_ThetaY_mI15_mI10__1056->SetBinContent(315,1.126482);
   S12_ThetaY_mI15_mI10__1056->SetBinContent(316,1.071146);
   S12_ThetaY_mI15_mI10__1056->SetBinContent(317,1.114625);
   S12_ThetaY_mI15_mI10__1056->SetBinContent(318,1.035573);
   S12_ThetaY_mI15_mI10__1056->SetBinContent(319,1);
   S12_ThetaY_mI15_mI10__1056->SetBinContent(320,0.7549407);
   S12_ThetaY_mI15_mI10__1056->SetBinContent(321,0.3715415);
   S12_ThetaY_mI15_mI10__1056->SetBinContent(322,0.0513834);
   S12_ThetaY_mI15_mI10__1056->SetBinError(311,0.007905138);
   S12_ThetaY_mI15_mI10__1056->SetBinError(312,0.03259372);
   S12_ThetaY_mI15_mI10__1056->SetBinError(313,0.06072052);
   S12_ThetaY_mI15_mI10__1056->SetBinError(314,0.06660988);
   S12_ThetaY_mI15_mI10__1056->SetBinError(315,0.06672705);
   S12_ThetaY_mI15_mI10__1056->SetBinError(316,0.0650675);
   S12_ThetaY_mI15_mI10__1056->SetBinError(317,0.06637492);
   S12_ThetaY_mI15_mI10__1056->SetBinError(318,0.06397792);
   S12_ThetaY_mI15_mI10__1056->SetBinError(319,0.06286946);
   S12_ThetaY_mI15_mI10__1056->SetBinError(320,0.05462559);
   S12_ThetaY_mI15_mI10__1056->SetBinError(321,0.03832158);
   S12_ThetaY_mI15_mI10__1056->SetBinError(322,0.01425119);
   S12_ThetaY_mI15_mI10__1056->SetMinimum(0);
   S12_ThetaY_mI15_mI10__1056->SetMaximum(1.297378);
   S12_ThetaY_mI15_mI10__1056->SetEntries(2243);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI15_mI10__1056->SetLineColor(ci);
   S12_ThetaY_mI15_mI10__1056->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI15_mI10__1056->SetMarkerColor(ci);
   S12_ThetaY_mI15_mI10__1056->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI15_mI10__1056->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI15_mI10__1056->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI15_mI10__1056->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI15_mI10__1056->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI15_mI10__1056->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI15_mI10__1056->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI15_mI10__1056->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI15_mI10__1056->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI15_mI10__1056->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI15_mI10__1056->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI15_mI10__1056->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI15_mI10__1056->Draw("AE");
   
   TH1D *ThetaY_mI15_mI10__1057 = new TH1D("ThetaY_mI15_mI10__1057","",630,-1575,1575);
   ThetaY_mI15_mI10__1057->SetBinContent(308,0.0009473576);
   ThetaY_mI15_mI10__1057->SetBinContent(309,0.1609484);
   ThetaY_mI15_mI10__1057->SetBinContent(310,0.5765311);
   ThetaY_mI15_mI10__1057->SetBinContent(311,0.8402294);
   ThetaY_mI15_mI10__1057->SetBinContent(312,0.9992063);
   ThetaY_mI15_mI10__1057->SetBinContent(313,1.094531);
   ThetaY_mI15_mI10__1057->SetBinContent(314,1.152883);
   ThetaY_mI15_mI10__1057->SetBinContent(315,1.179435);
   ThetaY_mI15_mI10__1057->SetBinContent(316,1.171062);
   ThetaY_mI15_mI10__1057->SetBinContent(317,1.142667);
   ThetaY_mI15_mI10__1057->SetBinContent(318,1.103492);
   ThetaY_mI15_mI10__1057->SetBinContent(319,1);
   ThetaY_mI15_mI10__1057->SetBinContent(320,0.8410231);
   ThetaY_mI15_mI10__1057->SetBinContent(321,0.5811399);
   ThetaY_mI15_mI10__1057->SetBinContent(322,0.16123);
   ThetaY_mI15_mI10__1057->SetBinContent(323,0.001075379);
   ThetaY_mI15_mI10__1057->SetBinError(308,0.0001557446);
   ThetaY_mI15_mI10__1057->SetBinError(309,0.002030016);
   ThetaY_mI15_mI10__1057->SetBinError(310,0.00384209);
   ThetaY_mI15_mI10__1057->SetBinError(311,0.00463826);
   ThetaY_mI15_mI10__1057->SetBinError(312,0.005058057);
   ThetaY_mI15_mI10__1057->SetBinError(313,0.005293832);
   ThetaY_mI15_mI10__1057->SetBinError(314,0.005433113);
   ThetaY_mI15_mI10__1057->SetBinError(315,0.005495321);
   ThetaY_mI15_mI10__1057->SetBinError(316,0.005475781);
   ThetaY_mI15_mI10__1057->SetBinError(317,0.005408987);
   ThetaY_mI15_mI10__1057->SetBinError(318,0.005315459);
   ThetaY_mI15_mI10__1057->SetBinError(319,0.005060065);
   ThetaY_mI15_mI10__1057->SetBinError(320,0.00464045);
   ThetaY_mI15_mI10__1057->SetBinError(321,0.003857416);
   ThetaY_mI15_mI10__1057->SetBinError(322,0.002031791);
   ThetaY_mI15_mI10__1057->SetBinError(323,0.0001659346);
   ThetaY_mI15_mI10__1057->SetEntries(468922);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI15_mI10__1057->SetLineColor(ci);
   ThetaY_mI15_mI10__1057->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI15_mI10__1057->SetMarkerColor(ci);
   ThetaY_mI15_mI10__1057->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI15_mI10__1057->GetXaxis()->CenterTitle(true);
   ThetaY_mI15_mI10__1057->GetXaxis()->SetLabelFont(42);
   ThetaY_mI15_mI10__1057->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI15_mI10__1057->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI15_mI10__1057->GetXaxis()->SetTitleFont(42);
   ThetaY_mI15_mI10__1057->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI15_mI10__1057->GetYaxis()->CenterTitle(true);
   ThetaY_mI15_mI10__1057->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI15_mI10__1057->GetYaxis()->SetLabelFont(42);
   ThetaY_mI15_mI10__1057->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI15_mI10__1057->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI15_mI10__1057->GetYaxis()->SetTitleFont(42);
   ThetaY_mI15_mI10__1057->GetZaxis()->SetLabelFont(42);
   ThetaY_mI15_mI10__1057->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI15_mI10__1057->GetZaxis()->SetTitleFont(42);
   ThetaY_mI15_mI10__1057->Draw("AEsame");
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
   
   Double_t _fx3353[16] = {
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
   37.5};
   Double_t _fy3353[16] = {
   0,
   0,
   0,
   0.01881662,
   0.2689882,
   0.852243,
   0.9736717,
   0.9551035,
   0.9146793,
   0.9754588,
   0.9384506,
   1,
   0.8976456,
   0.6393323,
   0.3186962,
   0};
   Double_t _felx3353[16] = {
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
   Double_t _fely3353[16] = {
   0,
   0,
   0,
   0.009005783,
   0.03256714,
   0.05558918,
   0.05792397,
   0.05671632,
   0.05569221,
   0.05823579,
   0.05811587,
   0.0630303,
   0.06508192,
   0.06595936,
   0.08732466,
   0};
   Double_t _fehx3353[16] = {
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
   Double_t _fehy3353[16] = {
   7.875423,
   0.04521842,
   0.01262215,
   0.0148797,
   0.03677169,
   0.05934037,
   0.06147819,
   0.0601899,
   0.05919226,
   0.0618222,
   0.06183275,
   0.06713581,
   0.06998285,
   0.07314576,
   0.1153232,
   6.917195};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,_fx3353,_fy3353,_felx3353,_fehx3353,_fely3353,_fehy3353);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3353 = new TH1F("Graph_Graph3353","",100,-100,100);
   Graph_Graph3353->SetMinimum(0);
   Graph_Graph3353->SetMaximum(1.5);
   Graph_Graph3353->SetDirectory(0);
   Graph_Graph3353->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3353->SetLineColor(ci);
   Graph_Graph3353->GetXaxis()->SetRange(1,100);
   Graph_Graph3353->GetXaxis()->CenterTitle(true);
   Graph_Graph3353->GetXaxis()->SetLabelFont(42);
   Graph_Graph3353->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3353->GetXaxis()->SetTitleFont(42);
   Graph_Graph3353->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3353->GetYaxis()->CenterTitle(true);
   Graph_Graph3353->GetYaxis()->SetLabelFont(42);
   Graph_Graph3353->GetYaxis()->SetTitleFont(42);
   Graph_Graph3353->GetZaxis()->SetLabelFont(42);
   Graph_Graph3353->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3353->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3353);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.297378,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI15_mI10__1058 = new TH2D("ThetaY_vs_Y_mI15_mI10__1058","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI15_mI10__1058->SetBinContent(8018,37);
   ThetaY_vs_Y_mI15_mI10__1058->SetBinContent(8044,6286);
   ThetaY_vs_Y_mI15_mI10__1058->SetBinContent(8070,22517);
   ThetaY_vs_Y_mI15_mI10__1058->SetBinContent(8096,32816);
   ThetaY_vs_Y_mI15_mI10__1058->SetBinContent(8122,39025);
   ThetaY_vs_Y_mI15_mI10__1058->SetBinContent(8148,42748);
   ThetaY_vs_Y_mI15_mI10__1058->SetBinContent(8174,45027);
   ThetaY_vs_Y_mI15_mI10__1058->SetBinContent(8200,46064);
   ThetaY_vs_Y_mI15_mI10__1058->SetBinContent(8226,45737);
   ThetaY_vs_Y_mI15_mI10__1058->SetBinContent(8252,44628);
   ThetaY_vs_Y_mI15_mI10__1058->SetBinContent(8278,43098);
   ThetaY_vs_Y_mI15_mI10__1058->SetBinContent(8304,39056);
   ThetaY_vs_Y_mI15_mI10__1058->SetBinContent(8330,32847);
   ThetaY_vs_Y_mI15_mI10__1058->SetBinContent(8356,22697);
   ThetaY_vs_Y_mI15_mI10__1058->SetBinContent(8382,6297);
   ThetaY_vs_Y_mI15_mI10__1058->SetBinContent(8408,42);
   ThetaY_vs_Y_mI15_mI10__1058->SetEntries(468922);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI15_mI10__1058->SetLineColor(ci);
   ThetaY_vs_Y_mI15_mI10__1058->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI15_mI10__1058->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI15_mI10__1058->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI15_mI10__1058->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI15_mI10__1058->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI15_mI10__1058->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI15_mI10__1058->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI15_mI10__1058->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI15_mI10__1058->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI15_mI10__1058->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI15_mI10__1058->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI15_mI10__1058->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI15_mI10__1058->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI15_mI10__1058->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI15_mI10__1058->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-15_-10","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_-15_-10","Reco vertices","lpf");
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
