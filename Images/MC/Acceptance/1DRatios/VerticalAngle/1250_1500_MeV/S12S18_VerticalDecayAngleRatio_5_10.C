void S12S18_VerticalDecayAngleRatio_5_10()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:54 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.07112342,125,1.351345);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_5_10__1011 = new TH1D("S12S18_ThetaY_5_10__1011","",630,-1575,1575);
   S12S18_ThetaY_5_10__1011->SetBinContent(308,0.009370817);
   S12S18_ThetaY_5_10__1011->SetBinContent(309,0.1258367);
   S12S18_ThetaY_5_10__1011->SetBinContent(310,0.5609103);
   S12S18_ThetaY_5_10__1011->SetBinContent(311,0.7777778);
   S12S18_ThetaY_5_10__1011->SetBinContent(312,1);
   S12S18_ThetaY_5_10__1011->SetBinContent(313,0.9317269);
   S12S18_ThetaY_5_10__1011->SetBinContent(314,0.9076305);
   S12S18_ThetaY_5_10__1011->SetBinContent(315,0.9129853);
   S12S18_ThetaY_5_10__1011->SetBinContent(316,1.009371);
   S12S18_ThetaY_5_10__1011->SetBinContent(317,0.9370817);
   S12S18_ThetaY_5_10__1011->SetBinContent(318,0.9116466);
   S12S18_ThetaY_5_10__1011->SetBinContent(319,0.6987952);
   S12S18_ThetaY_5_10__1011->SetBinContent(320,0.2436412);
   S12S18_ThetaY_5_10__1011->SetBinContent(321,0.01204819);
   S12S18_ThetaY_5_10__1011->SetBinError(308,0.003541836);
   S12S18_ThetaY_5_10__1011->SetBinError(309,0.01297906);
   S12S18_ThetaY_5_10__1011->SetBinError(310,0.02740226);
   S12S18_ThetaY_5_10__1011->SetBinError(311,0.03226766);
   S12S18_ThetaY_5_10__1011->SetBinError(312,0.03658809);
   S12S18_ThetaY_5_10__1011->SetBinError(313,0.03531702);
   S12S18_ThetaY_5_10__1011->SetBinError(314,0.03485734);
   S12S18_ThetaY_5_10__1011->SetBinError(315,0.03496001);
   S12S18_ThetaY_5_10__1011->SetBinError(316,0.03675912);
   S12S18_ThetaY_5_10__1011->SetBinError(317,0.03541836);
   S12S18_ThetaY_5_10__1011->SetBinError(318,0.03493437);
   S12S18_ThetaY_5_10__1011->SetBinError(319,0.03058543);
   S12S18_ThetaY_5_10__1011->SetBinError(320,0.01805989);
   S12S18_ThetaY_5_10__1011->SetBinError(321,0.004016064);
   S12S18_ThetaY_5_10__1011->SetMinimum(0);
   S12S18_ThetaY_5_10__1011->SetMaximum(1.209098);
   S12S18_ThetaY_5_10__1011->SetEntries(6752);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_5_10__1011->SetLineColor(ci);
   S12S18_ThetaY_5_10__1011->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_5_10__1011->SetMarkerColor(ci);
   S12S18_ThetaY_5_10__1011->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_5_10__1011->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_5_10__1011->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_5_10__1011->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_5_10__1011->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_5_10__1011->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_5_10__1011->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_5_10__1011->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_5_10__1011->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_5_10__1011->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_5_10__1011->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_5_10__1011->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_5_10__1011->Draw("AE");
   
   TH1D *ThetaY_5_10__1012 = new TH1D("ThetaY_5_10__1012","",630,-1575,1575);
   ThetaY_5_10__1012->SetBinContent(307,0.006455623);
   ThetaY_5_10__1012->SetBinContent(308,0.1960745);
   ThetaY_5_10__1012->SetBinContent(309,0.5525371);
   ThetaY_5_10__1012->SetBinContent(310,0.7630666);
   ThetaY_5_10__1012->SetBinContent(311,0.9127689);
   ThetaY_5_10__1012->SetBinContent(312,1);
   ThetaY_5_10__1012->SetBinContent(313,1.055955);
   ThetaY_5_10__1012->SetBinContent(314,1.081638);
   ThetaY_5_10__1012->SetBinContent(315,1.09918);
   ThetaY_5_10__1012->SetBinContent(316,1.090439);
   ThetaY_5_10__1012->SetBinContent(317,1.083923);
   ThetaY_5_10__1012->SetBinContent(318,1.059644);
   ThetaY_5_10__1012->SetBinContent(319,1.007739);
   ThetaY_5_10__1012->SetBinContent(320,0.9175404);
   ThetaY_5_10__1012->SetBinContent(321,0.7670964);
   ThetaY_5_10__1012->SetBinContent(322,0.554562);
   ThetaY_5_10__1012->SetBinContent(323,0.1917039);
   ThetaY_5_10__1012->SetBinContent(324,0.006535817);
   ThetaY_5_10__1012->SetBinError(307,0.0003597578);
   ThetaY_5_10__1012->SetBinError(308,0.001982676);
   ThetaY_5_10__1012->SetBinError(309,0.003328295);
   ThetaY_5_10__1012->SetBinError(310,0.003911311);
   ThetaY_5_10__1012->SetBinError(311,0.004277811);
   ThetaY_5_10__1012->SetBinError(312,0.004477557);
   ThetaY_5_10__1012->SetBinError(313,0.004601124);
   ThetaY_5_10__1012->SetBinError(314,0.00465674);
   ThetaY_5_10__1012->SetBinError(315,0.004694351);
   ThetaY_5_10__1012->SetBinError(316,0.004675648);
   ThetaY_5_10__1012->SetBinError(317,0.004661658);
   ThetaY_5_10__1012->SetBinError(318,0.004609154);
   ThetaY_5_10__1012->SetBinError(319,0.004494849);
   ThetaY_5_10__1012->SetBinError(320,0.004288977);
   ThetaY_5_10__1012->SetBinError(321,0.003921625);
   ThetaY_5_10__1012->SetBinError(322,0.003334389);
   ThetaY_5_10__1012->SetBinError(323,0.001960454);
   ThetaY_5_10__1012->SetBinError(324,0.0003619854);
   ThetaY_5_10__1012->SetEntries(665728);

   ci = TColor::GetColor("#ff0000");
   ThetaY_5_10__1012->SetLineColor(ci);
   ThetaY_5_10__1012->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_5_10__1012->SetMarkerColor(ci);
   ThetaY_5_10__1012->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_5_10__1012->GetXaxis()->CenterTitle(true);
   ThetaY_5_10__1012->GetXaxis()->SetLabelFont(42);
   ThetaY_5_10__1012->GetXaxis()->SetTitleSize(0.04);
   ThetaY_5_10__1012->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_5_10__1012->GetXaxis()->SetTitleFont(42);
   ThetaY_5_10__1012->GetYaxis()->SetTitle("Tracks");
   ThetaY_5_10__1012->GetYaxis()->CenterTitle(true);
   ThetaY_5_10__1012->GetYaxis()->SetNdivisions(4000510);
   ThetaY_5_10__1012->GetYaxis()->SetLabelFont(42);
   ThetaY_5_10__1012->GetYaxis()->SetTitleSize(0.04);
   ThetaY_5_10__1012->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_5_10__1012->GetYaxis()->SetTitleFont(42);
   ThetaY_5_10__1012->GetZaxis()->SetLabelFont(42);
   ThetaY_5_10__1012->GetZaxis()->SetTitleOffset(1);
   ThetaY_5_10__1012->GetZaxis()->SetTitleFont(42);
   ThetaY_5_10__1012->Draw("AEsame");
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
   
   Double_t _fx3338[18] = {
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
   42.5};
   Double_t _fy3338[18] = {
   0,
   0.04779212,
   0.2277434,
   0.7350738,
   0.8521081,
   1,
   0.8823544,
   0.8391263,
   0.8306058,
   0.9256556,
   0.8645278,
   0.8603326,
   0.6934289,
   0.2655373,
   0.01570623,
   0,
   0,
   0};
   Double_t _felx3338[18] = {
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
   Double_t _fely3338[18] = {
   0,
   0.01763037,
   0.02348763,
   0.03609297,
   0.03556564,
   0.03685244,
   0.03365742,
   0.03242003,
   0.03199462,
   0.03393542,
   0.03287879,
   0.03317128,
   0.03049769,
   0.0197037,
   0.005137287,
   0,
   0,
   0};
   Double_t _fehx3338[18] = {
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
   Double_t _fehy3338[18] = {
   0.382862,
   0.02575556,
   0.02604546,
   0.03791123,
   0.03708282,
   0.038237,
   0.03496711,
   0.03369809,
   0.03325205,
   0.03520358,
   0.03415426,
   0.03447624,
   0.03187007,
   0.02122344,
   0.007174097,
   0.004444292,
   0.01285728,
   0.378151};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3338,_fy3338,_felx3338,_fehx3338,_fely3338,_fehy3338);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3338 = new TH1F("Graph_Graph3338","",100,-100,100);
   Graph_Graph3338->SetMinimum(0);
   Graph_Graph3338->SetMaximum(1.5);
   Graph_Graph3338->SetDirectory(0);
   Graph_Graph3338->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3338->SetLineColor(ci);
   Graph_Graph3338->GetXaxis()->SetRange(1,100);
   Graph_Graph3338->GetXaxis()->CenterTitle(true);
   Graph_Graph3338->GetXaxis()->SetLabelFont(42);
   Graph_Graph3338->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3338->GetXaxis()->SetTitleFont(42);
   Graph_Graph3338->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3338->GetYaxis()->CenterTitle(true);
   Graph_Graph3338->GetYaxis()->SetLabelFont(42);
   Graph_Graph3338->GetYaxis()->SetTitleFont(42);
   Graph_Graph3338->GetZaxis()->SetLabelFont(42);
   Graph_Graph3338->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3338->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3338);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.209098,510,"S");
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
   
   TH2D *ThetaY_vs_Y_5_10__1013 = new TH2D("ThetaY_vs_Y_5_10__1013","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_5_10__1013->SetBinContent(7996,322);
   ThetaY_vs_Y_5_10__1013->SetBinContent(8022,9780);
   ThetaY_vs_Y_5_10__1013->SetBinContent(8048,27560);
   ThetaY_vs_Y_5_10__1013->SetBinContent(8074,38061);
   ThetaY_vs_Y_5_10__1013->SetBinContent(8100,45528);
   ThetaY_vs_Y_5_10__1013->SetBinContent(8126,49879);
   ThetaY_vs_Y_5_10__1013->SetBinContent(8152,52670);
   ThetaY_vs_Y_5_10__1013->SetBinContent(8178,53951);
   ThetaY_vs_Y_5_10__1013->SetBinContent(8204,54826);
   ThetaY_vs_Y_5_10__1013->SetBinContent(8230,54390);
   ThetaY_vs_Y_5_10__1013->SetBinContent(8256,54065);
   ThetaY_vs_Y_5_10__1013->SetBinContent(8282,52854);
   ThetaY_vs_Y_5_10__1013->SetBinContent(8308,50265);
   ThetaY_vs_Y_5_10__1013->SetBinContent(8334,45766);
   ThetaY_vs_Y_5_10__1013->SetBinContent(8360,38262);
   ThetaY_vs_Y_5_10__1013->SetBinContent(8386,27661);
   ThetaY_vs_Y_5_10__1013->SetBinContent(8412,9562);
   ThetaY_vs_Y_5_10__1013->SetBinContent(8438,326);
   ThetaY_vs_Y_5_10__1013->SetEntries(665728);
   ThetaY_vs_Y_5_10__1013->SetContour(20);
   ThetaY_vs_Y_5_10__1013->SetContourLevel(0,0);
   ThetaY_vs_Y_5_10__1013->SetContourLevel(1,2741.3);
   ThetaY_vs_Y_5_10__1013->SetContourLevel(2,5482.6);
   ThetaY_vs_Y_5_10__1013->SetContourLevel(3,8223.9);
   ThetaY_vs_Y_5_10__1013->SetContourLevel(4,10965.2);
   ThetaY_vs_Y_5_10__1013->SetContourLevel(5,13706.5);
   ThetaY_vs_Y_5_10__1013->SetContourLevel(6,16447.8);
   ThetaY_vs_Y_5_10__1013->SetContourLevel(7,19189.1);
   ThetaY_vs_Y_5_10__1013->SetContourLevel(8,21930.4);
   ThetaY_vs_Y_5_10__1013->SetContourLevel(9,24671.7);
   ThetaY_vs_Y_5_10__1013->SetContourLevel(10,27413);
   ThetaY_vs_Y_5_10__1013->SetContourLevel(11,30154.3);
   ThetaY_vs_Y_5_10__1013->SetContourLevel(12,32895.6);
   ThetaY_vs_Y_5_10__1013->SetContourLevel(13,35636.9);
   ThetaY_vs_Y_5_10__1013->SetContourLevel(14,38378.2);
   ThetaY_vs_Y_5_10__1013->SetContourLevel(15,41119.5);
   ThetaY_vs_Y_5_10__1013->SetContourLevel(16,43860.8);
   ThetaY_vs_Y_5_10__1013->SetContourLevel(17,46602.1);
   ThetaY_vs_Y_5_10__1013->SetContourLevel(18,49343.4);
   ThetaY_vs_Y_5_10__1013->SetContourLevel(19,52084.7);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_5_10__1013->SetLineColor(ci);
   ThetaY_vs_Y_5_10__1013->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_5_10__1013->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_5_10__1013->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_5_10__1013->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_5_10__1013->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_5_10__1013->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_5_10__1013->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_5_10__1013->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_5_10__1013->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_5_10__1013->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_5_10__1013->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_5_10__1013->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_5_10__1013->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_5_10__1013->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_5_10__1013->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_5_10","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12S18_ThetaY_5_10","Reco vertices","lpf");
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
