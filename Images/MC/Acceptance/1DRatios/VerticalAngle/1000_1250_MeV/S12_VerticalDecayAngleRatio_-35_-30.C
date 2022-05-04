void S12_VerticalDecayAngleRatio_-35_-30()
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
   upper_pad->Range(-125,-0.1145846,125,2.177107);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI35_mI30__702 = new TH1D("S12_ThetaY_mI35_mI30__702","",630,-1575,1575);
   S12_ThetaY_mI35_mI30__702->SetBinContent(314,0.4166667);
   S12_ThetaY_mI35_mI30__702->SetBinContent(315,1.305556);
   S12_ThetaY_mI35_mI30__702->SetBinContent(316,1.555556);
   S12_ThetaY_mI35_mI30__702->SetBinContent(317,1.583333);
   S12_ThetaY_mI35_mI30__702->SetBinContent(318,1.388889);
   S12_ThetaY_mI35_mI30__702->SetBinContent(319,1.388889);
   S12_ThetaY_mI35_mI30__702->SetBinContent(320,1.194444);
   S12_ThetaY_mI35_mI30__702->SetBinContent(321,1.194444);
   S12_ThetaY_mI35_mI30__702->SetBinContent(322,1);
   S12_ThetaY_mI35_mI30__702->SetBinContent(323,1);
   S12_ThetaY_mI35_mI30__702->SetBinContent(324,0.3333333);
   S12_ThetaY_mI35_mI30__702->SetBinContent(325,0.05555556);
   S12_ThetaY_mI35_mI30__702->SetBinError(314,0.1075829);
   S12_ThetaY_mI35_mI30__702->SetBinError(315,0.1904349);
   S12_ThetaY_mI35_mI30__702->SetBinError(316,0.2078699);
   S12_ThetaY_mI35_mI30__702->SetBinError(317,0.2097176);
   S12_ThetaY_mI35_mI30__702->SetBinError(318,0.1964186);
   S12_ThetaY_mI35_mI30__702->SetBinError(319,0.1964186);
   S12_ThetaY_mI35_mI30__702->SetBinError(320,0.1821511);
   S12_ThetaY_mI35_mI30__702->SetBinError(321,0.1821511);
   S12_ThetaY_mI35_mI30__702->SetBinError(322,0.1666667);
   S12_ThetaY_mI35_mI30__702->SetBinError(323,0.1666667);
   S12_ThetaY_mI35_mI30__702->SetBinError(324,0.09622504);
   S12_ThetaY_mI35_mI30__702->SetBinError(325,0.03928371);
   S12_ThetaY_mI35_mI30__702->SetMinimum(0);
   S12_ThetaY_mI35_mI30__702->SetMaximum(1.947937);
   S12_ThetaY_mI35_mI30__702->SetEntries(447);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI35_mI30__702->SetLineColor(ci);
   S12_ThetaY_mI35_mI30__702->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI35_mI30__702->SetMarkerColor(ci);
   S12_ThetaY_mI35_mI30__702->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI35_mI30__702->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI35_mI30__702->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI35_mI30__702->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI35_mI30__702->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI35_mI30__702->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI35_mI30__702->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI35_mI30__702->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI35_mI30__702->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI35_mI30__702->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI35_mI30__702->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI35_mI30__702->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI35_mI30__702->Draw("AE");
   
   TH1D *ThetaY_mI35_mI30__703 = new TH1D("ThetaY_mI35_mI30__703","",630,-1575,1575);
   ThetaY_mI35_mI30__703->SetBinContent(306,0.08952856);
   ThetaY_mI35_mI30__703->SetBinContent(307,0.519039);
   ThetaY_mI35_mI30__703->SetBinContent(308,1.004533);
   ThetaY_mI35_mI30__703->SetBinContent(309,1.278785);
   ThetaY_mI35_mI30__703->SetBinContent(310,1.492067);
   ThetaY_mI35_mI30__703->SetBinContent(311,1.603354);
   ThetaY_mI35_mI30__703->SetBinContent(312,1.68971);
   ThetaY_mI35_mI30__703->SetBinContent(313,1.714642);
   ThetaY_mI35_mI30__703->SetBinContent(314,1.725068);
   ThetaY_mI35_mI30__703->SetBinContent(315,1.758386);
   ThetaY_mI35_mI30__703->SetBinContent(316,1.770852);
   ThetaY_mI35_mI30__703->SetBinContent(317,1.756573);
   ThetaY_mI35_mI30__703->SetBinContent(318,1.7568);
   ThetaY_mI35_mI30__703->SetBinContent(319,1.704216);
   ThetaY_mI35_mI30__703->SetBinContent(320,1.637806);
   ThetaY_mI35_mI30__703->SetBinContent(321,1.477788);
   ThetaY_mI35_mI30__703->SetBinContent(322,1.31029);
   ThetaY_mI35_mI30__703->SetBinContent(323,1);
   ThetaY_mI35_mI30__703->SetBinContent(324,0.5147325);
   ThetaY_mI35_mI30__703->SetBinContent(325,0.08748867);
   ThetaY_mI35_mI30__703->SetBinError(306,0.004504671);
   ThetaY_mI35_mI30__703->SetBinError(307,0.01084632);
   ThetaY_mI35_mI30__703->SetBinError(308,0.01508914);
   ThetaY_mI35_mI30__703->SetBinError(309,0.01702476);
   ThetaY_mI35_mI30__703->SetBinError(310,0.01838978);
   ThetaY_mI35_mI30__703->SetBinError(311,0.01906325);
   ThetaY_mI35_mI30__703->SetBinError(312,0.01956989);
   ThetaY_mI35_mI30__703->SetBinError(313,0.01971374);
   ThetaY_mI35_mI30__703->SetBinError(314,0.01977358);
   ThetaY_mI35_mI30__703->SetBinError(315,0.01996362);
   ThetaY_mI35_mI30__703->SetBinError(316,0.02003426);
   ThetaY_mI35_mI30__703->SetBinError(317,0.01995333);
   ThetaY_mI35_mI30__703->SetBinError(318,0.01995462);
   ThetaY_mI35_mI30__703->SetBinError(319,0.01965371);
   ThetaY_mI35_mI30__703->SetBinError(320,0.01926697);
   ThetaY_mI35_mI30__703->SetBinError(321,0.01830157);
   ThetaY_mI35_mI30__703->SetBinError(322,0.0172332);
   ThetaY_mI35_mI30__703->SetBinError(323,0.01505505);
   ThetaY_mI35_mI30__703->SetBinError(324,0.01080123);
   ThetaY_mI35_mI30__703->SetBinError(325,0.004453056);
   ThetaY_mI35_mI30__703->SetEntries(114234);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI35_mI30__703->SetLineColor(ci);
   ThetaY_mI35_mI30__703->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI35_mI30__703->SetMarkerColor(ci);
   ThetaY_mI35_mI30__703->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI35_mI30__703->GetXaxis()->CenterTitle(true);
   ThetaY_mI35_mI30__703->GetXaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__703->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI35_mI30__703->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI35_mI30__703->GetXaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__703->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI35_mI30__703->GetYaxis()->CenterTitle(true);
   ThetaY_mI35_mI30__703->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI35_mI30__703->GetYaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__703->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI35_mI30__703->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI35_mI30__703->GetYaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__703->GetZaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__703->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI35_mI30__703->GetZaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__703->Draw("AEsame");
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
   
   Double_t _fx3235[20] = {
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
   Double_t _fy3235[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.2415364,
   0.7424737,
   0.878422,
   0.9013763,
   0.790579,
   0.8149724,
   0.7292954,
   0.8082652,
   0.7631898,
   1,
   0.6475855,
   0.6350029};
   Double_t _felx3235[20] = {
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
   Double_t _fely3235[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.06171934,
   0.1082339,
   0.117444,
   0.1194685,
   0.1117815,
   0.1152417,
   0.1111041,
   0.1231732,
   0.1269878,
   0.1665463,
   0.184756,
   0.4108183};
   Double_t _fehx3235[20] = {
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
   Double_t _fehy3235[20] = {
   0.5725419,
   0.09856688,
   0.05091929,
   0.03999721,
   0.03427905,
   0.03189946,
   0.03026899,
   0.0298288,
   0.07995239,
   0.1253079,
   0.1343209,
   0.1364767,
   0.1288427,
   0.1328334,
   0.1294906,
   0.1435662,
   0.150132,
   0.1969424,
   0.2469695,
   0.8425623};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3235,_fy3235,_felx3235,_fehx3235,_fely3235,_fehy3235);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3235 = new TH1F("Graph_Graph3235","",100,-100,100);
   Graph_Graph3235->SetMinimum(0);
   Graph_Graph3235->SetMaximum(1.5);
   Graph_Graph3235->SetDirectory(0);
   Graph_Graph3235->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3235->SetLineColor(ci);
   Graph_Graph3235->GetXaxis()->SetRange(1,100);
   Graph_Graph3235->GetXaxis()->CenterTitle(true);
   Graph_Graph3235->GetXaxis()->SetLabelFont(42);
   Graph_Graph3235->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3235->GetXaxis()->SetTitleFont(42);
   Graph_Graph3235->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3235->GetYaxis()->CenterTitle(true);
   Graph_Graph3235->GetYaxis()->SetLabelFont(42);
   Graph_Graph3235->GetYaxis()->SetTitleFont(42);
   Graph_Graph3235->GetZaxis()->SetLabelFont(42);
   Graph_Graph3235->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3235->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3235);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.947937,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI35_mI30__704 = new TH2D("ThetaY_vs_Y_mI35_mI30__704","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI35_mI30__704->SetBinContent(7962,395);
   ThetaY_vs_Y_mI35_mI30__704->SetBinContent(7988,2290);
   ThetaY_vs_Y_mI35_mI30__704->SetBinContent(8014,4432);
   ThetaY_vs_Y_mI35_mI30__704->SetBinContent(8040,5642);
   ThetaY_vs_Y_mI35_mI30__704->SetBinContent(8066,6583);
   ThetaY_vs_Y_mI35_mI30__704->SetBinContent(8092,7074);
   ThetaY_vs_Y_mI35_mI30__704->SetBinContent(8118,7455);
   ThetaY_vs_Y_mI35_mI30__704->SetBinContent(8144,7565);
   ThetaY_vs_Y_mI35_mI30__704->SetBinContent(8170,7611);
   ThetaY_vs_Y_mI35_mI30__704->SetBinContent(8196,7758);
   ThetaY_vs_Y_mI35_mI30__704->SetBinContent(8222,7813);
   ThetaY_vs_Y_mI35_mI30__704->SetBinContent(8248,7750);
   ThetaY_vs_Y_mI35_mI30__704->SetBinContent(8274,7751);
   ThetaY_vs_Y_mI35_mI30__704->SetBinContent(8300,7519);
   ThetaY_vs_Y_mI35_mI30__704->SetBinContent(8326,7226);
   ThetaY_vs_Y_mI35_mI30__704->SetBinContent(8352,6520);
   ThetaY_vs_Y_mI35_mI30__704->SetBinContent(8378,5781);
   ThetaY_vs_Y_mI35_mI30__704->SetBinContent(8404,4412);
   ThetaY_vs_Y_mI35_mI30__704->SetBinContent(8430,2271);
   ThetaY_vs_Y_mI35_mI30__704->SetBinContent(8456,386);
   ThetaY_vs_Y_mI35_mI30__704->SetEntries(114234);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI35_mI30__704->SetLineColor(ci);
   ThetaY_vs_Y_mI35_mI30__704->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI35_mI30__704->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI35_mI30__704->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI35_mI30__704->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__704->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI35_mI30__704->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__704->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI35_mI30__704->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI35_mI30__704->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI35_mI30__704->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__704->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__704->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__704->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI35_mI30__704->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__704->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-35_-30","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_-35_-30","Reco vertices","lpf");
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
