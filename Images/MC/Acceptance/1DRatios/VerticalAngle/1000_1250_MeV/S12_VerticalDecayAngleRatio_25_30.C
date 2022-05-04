void S12_VerticalDecayAngleRatio_25_30()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:48 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-1.259033,125,23.92162);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_25_30__738 = new TH1D("S12_ThetaY_25_30__738","",630,-1575,1575);
   S12_ThetaY_25_30__738->SetBinContent(306,1);
   S12_ThetaY_25_30__738->SetBinContent(307,3.625);
   S12_ThetaY_25_30__738->SetBinContent(308,7.125);
   S12_ThetaY_25_30__738->SetBinContent(309,8.25);
   S12_ThetaY_25_30__738->SetBinContent(310,9.875);
   S12_ThetaY_25_30__738->SetBinContent(311,9.5);
   S12_ThetaY_25_30__738->SetBinContent(312,9.875);
   S12_ThetaY_25_30__738->SetBinContent(313,10.875);
   S12_ThetaY_25_30__738->SetBinContent(314,12.875);
   S12_ThetaY_25_30__738->SetBinContent(315,10.125);
   S12_ThetaY_25_30__738->SetBinContent(316,8.875);
   S12_ThetaY_25_30__738->SetBinContent(317,6.75);
   S12_ThetaY_25_30__738->SetBinContent(318,1.25);
   S12_ThetaY_25_30__738->SetBinContent(319,0.125);
   S12_ThetaY_25_30__738->SetBinError(306,0.3535534);
   S12_ThetaY_25_30__738->SetBinError(307,0.6731456);
   S12_ThetaY_25_30__738->SetBinError(308,0.9437293);
   S12_ThetaY_25_30__738->SetBinError(309,1.015505);
   S12_ThetaY_25_30__738->SetBinError(310,1.111024);
   S12_ThetaY_25_30__738->SetBinError(311,1.089725);
   S12_ThetaY_25_30__738->SetBinError(312,1.111024);
   S12_ThetaY_25_30__738->SetBinError(313,1.165922);
   S12_ThetaY_25_30__738->SetBinError(314,1.268611);
   S12_ThetaY_25_30__738->SetBinError(315,1.125);
   S12_ThetaY_25_30__738->SetBinError(316,1.053269);
   S12_ThetaY_25_30__738->SetBinError(317,0.9185587);
   S12_ThetaY_25_30__738->SetBinError(318,0.3952847);
   S12_ThetaY_25_30__738->SetBinError(319,0.125);
   S12_ThetaY_25_30__738->SetMinimum(0);
   S12_ThetaY_25_30__738->SetMaximum(21.40356);
   S12_ThetaY_25_30__738->SetEntries(801);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_25_30__738->SetLineColor(ci);
   S12_ThetaY_25_30__738->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_25_30__738->SetMarkerColor(ci);
   S12_ThetaY_25_30__738->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_25_30__738->GetXaxis()->SetRange(296,335);
   S12_ThetaY_25_30__738->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_25_30__738->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_25_30__738->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_25_30__738->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_25_30__738->GetYaxis()->CenterTitle(true);
   S12_ThetaY_25_30__738->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_25_30__738->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_25_30__738->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_25_30__738->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_25_30__738->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_25_30__738->Draw("AE");
   
   TH1D *ThetaY_25_30__739 = new TH1D("ThetaY_25_30__739","",630,-1575,1575);
   ThetaY_25_30__739->SetBinContent(305,0.002962963);
   ThetaY_25_30__739->SetBinContent(306,1);
   ThetaY_25_30__739->SetBinContent(307,5.74963);
   ThetaY_25_30__739->SetBinContent(308,11.30519);
   ThetaY_25_30__739->SetBinContent(309,14.1437);
   ThetaY_25_30__739->SetBinContent(310,16.65185);
   ThetaY_25_30__739->SetBinContent(311,17.8);
   ThetaY_25_30__739->SetBinContent(312,18.75704);
   ThetaY_25_30__739->SetBinContent(313,19.05185);
   ThetaY_25_30__739->SetBinContent(314,19.19259);
   ThetaY_25_30__739->SetBinContent(315,19.21333);
   ThetaY_25_30__739->SetBinContent(316,19.22074);
   ThetaY_25_30__739->SetBinContent(317,19.45778);
   ThetaY_25_30__739->SetBinContent(318,19.26074);
   ThetaY_25_30__739->SetBinContent(319,18.8637);
   ThetaY_25_30__739->SetBinContent(320,17.52);
   ThetaY_25_30__739->SetBinContent(321,16.66667);
   ThetaY_25_30__739->SetBinContent(322,14.55407);
   ThetaY_25_30__739->SetBinContent(323,11.22074);
   ThetaY_25_30__739->SetBinContent(324,5.925926);
   ThetaY_25_30__739->SetBinContent(325,0.962963);
   ThetaY_25_30__739->SetBinContent(326,0.001481481);
   ThetaY_25_30__739->SetBinError(305,0.002095131);
   ThetaY_25_30__739->SetBinError(306,0.03849002);
   ThetaY_25_30__739->SetBinError(307,0.09229285);
   ThetaY_25_30__739->SetBinError(308,0.1294157);
   ThetaY_25_30__739->SetBinError(309,0.1447537);
   ThetaY_25_30__739->SetBinError(310,0.157065);
   ThetaY_25_30__739->SetBinError(311,0.1623896);
   ThetaY_25_30__739->SetBinError(312,0.1666979);
   ThetaY_25_30__739->SetBinError(313,0.1680029);
   ThetaY_25_30__739->SetBinError(314,0.1686223);
   ThetaY_25_30__739->SetBinError(315,0.1687134);
   ThetaY_25_30__739->SetBinError(316,0.1687459);
   ThetaY_25_30__739->SetBinError(317,0.1697832);
   ThetaY_25_30__739->SetBinError(318,0.1689214);
   ThetaY_25_30__739->SetBinError(319,0.1671713);
   ThetaY_25_30__739->SetBinError(320,0.1611073);
   ThetaY_25_30__739->SetBinError(321,0.1571348);
   ThetaY_25_30__739->SetBinError(322,0.1468387);
   ThetaY_25_30__739->SetBinError(323,0.1289315);
   ThetaY_25_30__739->SetBinError(324,0.09369712);
   ThetaY_25_30__739->SetBinError(325,0.03777051);
   ThetaY_25_30__739->SetBinError(326,0.001481481);
   ThetaY_25_30__739->SetEntries(193403);

   ci = TColor::GetColor("#ff0000");
   ThetaY_25_30__739->SetLineColor(ci);
   ThetaY_25_30__739->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_25_30__739->SetMarkerColor(ci);
   ThetaY_25_30__739->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_25_30__739->GetXaxis()->CenterTitle(true);
   ThetaY_25_30__739->GetXaxis()->SetLabelFont(42);
   ThetaY_25_30__739->GetXaxis()->SetTitleSize(0.04);
   ThetaY_25_30__739->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_25_30__739->GetXaxis()->SetTitleFont(42);
   ThetaY_25_30__739->GetYaxis()->SetTitle("Tracks");
   ThetaY_25_30__739->GetYaxis()->CenterTitle(true);
   ThetaY_25_30__739->GetYaxis()->SetNdivisions(4000510);
   ThetaY_25_30__739->GetYaxis()->SetLabelFont(42);
   ThetaY_25_30__739->GetYaxis()->SetTitleSize(0.04);
   ThetaY_25_30__739->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_25_30__739->GetYaxis()->SetTitleFont(42);
   ThetaY_25_30__739->GetZaxis()->SetLabelFont(42);
   ThetaY_25_30__739->GetZaxis()->SetTitleOffset(1);
   ThetaY_25_30__739->GetZaxis()->SetTitleFont(42);
   ThetaY_25_30__739->Draw("AEsame");
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
   
   Double_t _fx3247[22] = {
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
   52.5};
   Double_t _fy3247[22] = {
   0,
   1,
   0.6304754,
   0.6302418,
   0.5832984,
   0.5930271,
   0.5337079,
   0.5264691,
   0.5708107,
   0.6708317,
   0.5269778,
   0.4617408,
   0.346905,
   0.06489885,
   0.006626482,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3247[22] = {
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
   Double_t _fely3247[22] = {
   0,
   0.347866,
   0.1168172,
   0.08353696,
   0.0718602,
   0.06680995,
   0.06127594,
   0.05928863,
   0.06128345,
   0.0662509,
   0.05861198,
   0.05481654,
   0.04715606,
   0.02018214,
   0.005481815,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3247[22] = {
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
   Double_t _fehy3247[22] = {
   127.4546,
   0.4975039,
   0.140801,
   0.0954307,
   0.08131823,
   0.07480351,
   0.06875587,
   0.06637869,
   0.06825007,
   0.07314646,
   0.06552904,
   0.06175009,
   0.05405148,
   0.02770721,
   0.01523975,
   0.01313617,
   0.01380879,
   0.01581339,
   0.02051163,
   0.03884299,
   0.2393175,
   447.4385};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(22,_fx3247,_fy3247,_felx3247,_fehx3247,_fely3247,_fehy3247);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3247 = new TH1F("Graph_Graph3247","",100,-100,100);
   Graph_Graph3247->SetMinimum(0);
   Graph_Graph3247->SetMaximum(1.5);
   Graph_Graph3247->SetDirectory(0);
   Graph_Graph3247->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3247->SetLineColor(ci);
   Graph_Graph3247->GetXaxis()->SetRange(1,100);
   Graph_Graph3247->GetXaxis()->CenterTitle(true);
   Graph_Graph3247->GetXaxis()->SetLabelFont(42);
   Graph_Graph3247->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3247->GetXaxis()->SetTitleFont(42);
   Graph_Graph3247->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3247->GetYaxis()->CenterTitle(true);
   Graph_Graph3247->GetYaxis()->SetLabelFont(42);
   Graph_Graph3247->GetYaxis()->SetTitleFont(42);
   Graph_Graph3247->GetZaxis()->SetLabelFont(42);
   Graph_Graph3247->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3247->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3247);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,21.40356,510,"S");
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
   
   TH2D *ThetaY_vs_Y_25_30__740 = new TH2D("ThetaY_vs_Y_25_30__740","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_25_30__740->SetBinContent(7948,2);
   ThetaY_vs_Y_25_30__740->SetBinContent(7974,675);
   ThetaY_vs_Y_25_30__740->SetBinContent(8000,3881);
   ThetaY_vs_Y_25_30__740->SetBinContent(8026,7631);
   ThetaY_vs_Y_25_30__740->SetBinContent(8052,9547);
   ThetaY_vs_Y_25_30__740->SetBinContent(8078,11240);
   ThetaY_vs_Y_25_30__740->SetBinContent(8104,12015);
   ThetaY_vs_Y_25_30__740->SetBinContent(8130,12661);
   ThetaY_vs_Y_25_30__740->SetBinContent(8156,12860);
   ThetaY_vs_Y_25_30__740->SetBinContent(8182,12955);
   ThetaY_vs_Y_25_30__740->SetBinContent(8208,12969);
   ThetaY_vs_Y_25_30__740->SetBinContent(8234,12974);
   ThetaY_vs_Y_25_30__740->SetBinContent(8260,13134);
   ThetaY_vs_Y_25_30__740->SetBinContent(8286,13001);
   ThetaY_vs_Y_25_30__740->SetBinContent(8312,12733);
   ThetaY_vs_Y_25_30__740->SetBinContent(8338,11826);
   ThetaY_vs_Y_25_30__740->SetBinContent(8364,11250);
   ThetaY_vs_Y_25_30__740->SetBinContent(8390,9824);
   ThetaY_vs_Y_25_30__740->SetBinContent(8416,7574);
   ThetaY_vs_Y_25_30__740->SetBinContent(8442,4000);
   ThetaY_vs_Y_25_30__740->SetBinContent(8468,650);
   ThetaY_vs_Y_25_30__740->SetBinContent(8494,1);
   ThetaY_vs_Y_25_30__740->SetEntries(193403);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_25_30__740->SetLineColor(ci);
   ThetaY_vs_Y_25_30__740->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_25_30__740->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_25_30__740->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_25_30__740->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_25_30__740->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_25_30__740->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_25_30__740->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_25_30__740->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_25_30__740->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_25_30__740->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_25_30__740->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_25_30__740->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_25_30__740->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_25_30__740->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_25_30__740->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_25_30","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_25_30","Reco vertices","lpf");
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
