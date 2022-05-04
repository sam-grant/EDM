void S12_VerticalDecayAngleRatio_15_20()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:44 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06662301,125,1.265837);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_15_20__561 = new TH1D("S12_ThetaY_15_20__561","",630,-1575,1575);
   S12_ThetaY_15_20__561->SetBinContent(304,0.005524862);
   S12_ThetaY_15_20__561->SetBinContent(305,0.0441989);
   S12_ThetaY_15_20__561->SetBinContent(306,0.281768);
   S12_ThetaY_15_20__561->SetBinContent(307,0.5524862);
   S12_ThetaY_15_20__561->SetBinContent(308,0.7127072);
   S12_ThetaY_15_20__561->SetBinContent(309,0.8895028);
   S12_ThetaY_15_20__561->SetBinContent(310,0.8453039);
   S12_ThetaY_15_20__561->SetBinContent(311,1);
   S12_ThetaY_15_20__561->SetBinContent(312,1.005525);
   S12_ThetaY_15_20__561->SetBinContent(313,0.9723757);
   S12_ThetaY_15_20__561->SetBinContent(314,0.8895028);
   S12_ThetaY_15_20__561->SetBinContent(315,0.9502762);
   S12_ThetaY_15_20__561->SetBinContent(316,0.9502762);
   S12_ThetaY_15_20__561->SetBinContent(317,0.9392265);
   S12_ThetaY_15_20__561->SetBinContent(318,0.8508287);
   S12_ThetaY_15_20__561->SetBinContent(319,0.4972376);
   S12_ThetaY_15_20__561->SetBinContent(320,0.06629834);
   S12_ThetaY_15_20__561->SetBinError(304,0.005524862);
   S12_ThetaY_15_20__561->SetBinError(305,0.01562667);
   S12_ThetaY_15_20__561->SetBinError(306,0.03945541);
   S12_ThetaY_15_20__561->SetBinError(307,0.05524862);
   S12_ThetaY_15_20__561->SetBinError(308,0.06275037);
   S12_ThetaY_15_20__561->SetBinError(309,0.07010264);
   S12_ThetaY_15_20__561->SetBinError(310,0.06833877);
   S12_ThetaY_15_20__561->SetBinError(311,0.07432941);
   S12_ThetaY_15_20__561->SetBinError(312,0.07453446);
   S12_ThetaY_15_20__561->SetBinError(313,0.07329558);
   S12_ThetaY_15_20__561->SetBinError(314,0.07010264);
   S12_ThetaY_15_20__561->SetBinError(315,0.07245788);
   S12_ThetaY_15_20__561->SetBinError(316,0.07245788);
   S12_ThetaY_15_20__561->SetBinError(317,0.07203539);
   S12_ThetaY_15_20__561->SetBinError(318,0.06856173);
   S12_ThetaY_15_20__561->SetBinError(319,0.05241344);
   S12_ThetaY_15_20__561->SetBinError(320,0.01913868);
   S12_ThetaY_15_20__561->SetMinimum(0);
   S12_ThetaY_15_20__561->SetMaximum(1.132591);
   S12_ThetaY_15_20__561->SetEntries(2073);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_15_20__561->SetLineColor(ci);
   S12_ThetaY_15_20__561->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_15_20__561->SetMarkerColor(ci);
   S12_ThetaY_15_20__561->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_15_20__561->GetXaxis()->SetRange(296,335);
   S12_ThetaY_15_20__561->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_15_20__561->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_15_20__561->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_15_20__561->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_15_20__561->GetYaxis()->CenterTitle(true);
   S12_ThetaY_15_20__561->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_15_20__561->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_15_20__561->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_15_20__561->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_15_20__561->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_15_20__561->Draw("AE");
   
   TH1D *ThetaY_15_20__562 = new TH1D("ThetaY_15_20__562","",630,-1575,1575);
   ThetaY_15_20__562->SetBinContent(303,0.0006008261);
   ThetaY_15_20__562->SetBinContent(304,0.05208412);
   ThetaY_15_20__562->SetBinContent(305,0.2466391);
   ThetaY_15_20__562->SetBinContent(306,0.5241833);
   ThetaY_15_20__562->SetBinContent(307,0.709463);
   ThetaY_15_20__562->SetBinContent(308,0.8366504);
   ThetaY_15_20__562->SetBinContent(309,0.922531);
   ThetaY_15_20__562->SetBinContent(310,0.9747278);
   ThetaY_15_20__562->SetBinContent(311,1);
   ThetaY_15_20__562->SetBinContent(312,1.018551);
   ThetaY_15_20__562->SetBinContent(313,1.013594);
   ThetaY_15_20__562->SetBinContent(314,1.029628);
   ThetaY_15_20__562->SetBinContent(315,1.019414);
   ThetaY_15_20__562->SetBinContent(316,1.01472);
   ThetaY_15_20__562->SetBinContent(317,1.015584);
   ThetaY_15_20__562->SetBinContent(318,1.014457);
   ThetaY_15_20__562->SetBinContent(319,1.027075);
   ThetaY_15_20__562->SetBinContent(320,1.002929);
   ThetaY_15_20__562->SetBinContent(321,0.9765678);
   ThetaY_15_20__562->SetBinContent(322,0.9331956);
   ThetaY_15_20__562->SetBinContent(323,0.8331956);
   ThetaY_15_20__562->SetBinContent(324,0.7140443);
   ThetaY_15_20__562->SetBinContent(325,0.5157717);
   ThetaY_15_20__562->SetBinContent(326,0.2435974);
   ThetaY_15_20__562->SetBinContent(327,0.0506196);
   ThetaY_15_20__562->SetBinContent(328,0.000413068);
   ThetaY_15_20__562->SetBinError(303,0.0001502065);
   ThetaY_15_20__562->SetBinError(304,0.001398515);
   ThetaY_15_20__562->SetBinError(305,0.003043304);
   ThetaY_15_20__562->SetBinError(306,0.004436658);
   ThetaY_15_20__562->SetBinError(307,0.00516154);
   ThetaY_15_20__562->SetBinError(308,0.00560514);
   ThetaY_15_20__562->SetBinError(309,0.005885792);
   ThetaY_15_20__562->SetBinError(310,0.00605001);
   ThetaY_15_20__562->SetBinError(311,0.006127939);
   ThetaY_15_20__562->SetBinError(312,0.006184516);
   ThetaY_15_20__562->SetBinError(313,0.006169449);
   ThetaY_15_20__562->SetBinError(314,0.006218056);
   ThetaY_15_20__562->SetBinError(315,0.006187137);
   ThetaY_15_20__562->SetBinError(316,0.006172876);
   ThetaY_15_20__562->SetBinError(317,0.006175503);
   ThetaY_15_20__562->SetBinError(318,0.006172077);
   ThetaY_15_20__562->SetBinError(319,0.006210341);
   ThetaY_15_20__562->SetBinError(320,0.006136907);
   ThetaY_15_20__562->SetBinError(321,0.006055718);
   ThetaY_15_20__562->SetBinError(322,0.005919715);
   ThetaY_15_20__562->SetBinError(323,0.005593555);
   ThetaY_15_20__562->SetBinError(324,0.005178178);
   ThetaY_15_20__562->SetBinError(325,0.004400917);
   ThetaY_15_20__562->SetBinError(326,0.00302448);
   ThetaY_15_20__562->SetBinError(327,0.001378713);
   ThetaY_15_20__562->SetBinError(328,0.0001245447);
   ThetaY_15_20__562->SetEntries(497721);

   ci = TColor::GetColor("#ff0000");
   ThetaY_15_20__562->SetLineColor(ci);
   ThetaY_15_20__562->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_15_20__562->SetMarkerColor(ci);
   ThetaY_15_20__562->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_15_20__562->GetXaxis()->CenterTitle(true);
   ThetaY_15_20__562->GetXaxis()->SetLabelFont(42);
   ThetaY_15_20__562->GetXaxis()->SetTitleSize(0.04);
   ThetaY_15_20__562->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_15_20__562->GetXaxis()->SetTitleFont(42);
   ThetaY_15_20__562->GetYaxis()->SetTitle("Tracks");
   ThetaY_15_20__562->GetYaxis()->CenterTitle(true);
   ThetaY_15_20__562->GetYaxis()->SetNdivisions(4000510);
   ThetaY_15_20__562->GetYaxis()->SetLabelFont(42);
   ThetaY_15_20__562->GetYaxis()->SetTitleSize(0.04);
   ThetaY_15_20__562->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_15_20__562->GetYaxis()->SetTitleFont(42);
   ThetaY_15_20__562->GetZaxis()->SetLabelFont(42);
   ThetaY_15_20__562->GetZaxis()->SetTitleOffset(1);
   ThetaY_15_20__562->GetZaxis()->SetTitleFont(42);
   ThetaY_15_20__562->Draw("AEsame");
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
   
   Double_t _fx3188[26] = {
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
   62.5};
   Double_t _fy3188[26] = {
   0,
   0.1060758,
   0.1792047,
   0.5375371,
   0.7787385,
   0.8518578,
   0.9641983,
   0.8672205,
   1,
   0.9872116,
   0.9593348,
   0.8639067,
   0.9321787,
   0.9364909,
   0.9248143,
   0.8387033,
   0.4841299,
   0.06610472,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3188[26] = {
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
   Double_t _fely3188[26] = {
   0,
   0.08776283,
   0.06204708,
   0.07515697,
   0.07794693,
   0.07511949,
   0.07615734,
   0.07023874,
   0.07451131,
   0.0733533,
   0.0724777,
   0.06821283,
   0.07123216,
   0.07156271,
   0.07108131,
   0.06770215,
   0.05101963,
   0.01881768,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3188[26] = {
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
   Double_t _fehy3188[26] = {
   17.94142,
   0.2442143,
   0.08845385,
   0.08648519,
   0.08617325,
   0.08205866,
   0.08242741,
   0.07617469,
   0.08028445,
   0.07902019,
   0.07817464,
   0.07382654,
   0.07689786,
   0.0772548,
   0.07676931,
   0.07340368,
   0.05670409,
   0.02512658,
   0.01041582,
   0.01089993,
   0.01220819,
   0.01424545,
   0.01972204,
   0.04176084,
   0.2010751,
   26.80455};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3188,_fy3188,_felx3188,_fehx3188,_fely3188,_fehy3188);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3188 = new TH1F("Graph_Graph3188","",100,-100,100);
   Graph_Graph3188->SetMinimum(0);
   Graph_Graph3188->SetMaximum(1.5);
   Graph_Graph3188->SetDirectory(0);
   Graph_Graph3188->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3188->SetLineColor(ci);
   Graph_Graph3188->GetXaxis()->SetRange(1,100);
   Graph_Graph3188->GetXaxis()->CenterTitle(true);
   Graph_Graph3188->GetXaxis()->SetLabelFont(42);
   Graph_Graph3188->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3188->GetXaxis()->SetTitleFont(42);
   Graph_Graph3188->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3188->GetYaxis()->CenterTitle(true);
   Graph_Graph3188->GetYaxis()->SetLabelFont(42);
   Graph_Graph3188->GetYaxis()->SetTitleFont(42);
   Graph_Graph3188->GetZaxis()->SetLabelFont(42);
   Graph_Graph3188->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3188->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3188);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.132591,510,"S");
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
   
   TH2D *ThetaY_vs_Y_15_20__563 = new TH2D("ThetaY_vs_Y_15_20__563","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_15_20__563->SetBinContent(7894,16);
   ThetaY_vs_Y_15_20__563->SetBinContent(7920,1387);
   ThetaY_vs_Y_15_20__563->SetBinContent(7946,6568);
   ThetaY_vs_Y_15_20__563->SetBinContent(7972,13959);
   ThetaY_vs_Y_15_20__563->SetBinContent(7998,18893);
   ThetaY_vs_Y_15_20__563->SetBinContent(8024,22280);
   ThetaY_vs_Y_15_20__563->SetBinContent(8050,24567);
   ThetaY_vs_Y_15_20__563->SetBinContent(8076,25957);
   ThetaY_vs_Y_15_20__563->SetBinContent(8102,26630);
   ThetaY_vs_Y_15_20__563->SetBinContent(8128,27124);
   ThetaY_vs_Y_15_20__563->SetBinContent(8154,26992);
   ThetaY_vs_Y_15_20__563->SetBinContent(8180,27419);
   ThetaY_vs_Y_15_20__563->SetBinContent(8206,27147);
   ThetaY_vs_Y_15_20__563->SetBinContent(8232,27022);
   ThetaY_vs_Y_15_20__563->SetBinContent(8258,27045);
   ThetaY_vs_Y_15_20__563->SetBinContent(8284,27015);
   ThetaY_vs_Y_15_20__563->SetBinContent(8310,27351);
   ThetaY_vs_Y_15_20__563->SetBinContent(8336,26708);
   ThetaY_vs_Y_15_20__563->SetBinContent(8362,26006);
   ThetaY_vs_Y_15_20__563->SetBinContent(8388,24851);
   ThetaY_vs_Y_15_20__563->SetBinContent(8414,22188);
   ThetaY_vs_Y_15_20__563->SetBinContent(8440,19015);
   ThetaY_vs_Y_15_20__563->SetBinContent(8466,13735);
   ThetaY_vs_Y_15_20__563->SetBinContent(8492,6487);
   ThetaY_vs_Y_15_20__563->SetBinContent(8518,1348);
   ThetaY_vs_Y_15_20__563->SetBinContent(8544,11);
   ThetaY_vs_Y_15_20__563->SetEntries(497721);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_15_20__563->SetLineColor(ci);
   ThetaY_vs_Y_15_20__563->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_15_20__563->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_15_20__563->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_15_20__563->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_15_20__563->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_15_20__563->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_15_20__563->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_15_20__563->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_15_20__563->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_15_20__563->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_15_20__563->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_15_20__563->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_15_20__563->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_15_20__563->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_15_20__563->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_15_20","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_15_20","Reco vertices","lpf");
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
