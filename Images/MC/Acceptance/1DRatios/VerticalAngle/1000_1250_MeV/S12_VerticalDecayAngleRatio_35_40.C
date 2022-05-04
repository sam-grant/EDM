void S12_VerticalDecayAngleRatio_35_40()
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
   upper_pad->Range(-125,-0.08694266,125,1.65191);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_35_40__744 = new TH1D("S12_ThetaY_35_40__744","",630,-1575,1575);
   S12_ThetaY_35_40__744->SetBinContent(307,0.2692308);
   S12_ThetaY_35_40__744->SetBinContent(308,0.5769231);
   S12_ThetaY_35_40__744->SetBinContent(309,1);
   S12_ThetaY_35_40__744->SetBinContent(310,1.115385);
   S12_ThetaY_35_40__744->SetBinContent(311,0.9230769);
   S12_ThetaY_35_40__744->SetBinContent(312,0.9230769);
   S12_ThetaY_35_40__744->SetBinContent(313,1);
   S12_ThetaY_35_40__744->SetBinContent(314,1.269231);
   S12_ThetaY_35_40__744->SetBinContent(315,1);
   S12_ThetaY_35_40__744->SetBinContent(316,0.7692308);
   S12_ThetaY_35_40__744->SetBinError(307,0.1017597);
   S12_ThetaY_35_40__744->SetBinError(308,0.1489609);
   S12_ThetaY_35_40__744->SetBinError(309,0.1961161);
   S12_ThetaY_35_40__744->SetBinError(310,0.2071217);
   S12_ThetaY_35_40__744->SetBinError(311,0.1884223);
   S12_ThetaY_35_40__744->SetBinError(312,0.1884223);
   S12_ThetaY_35_40__744->SetBinError(313,0.1961161);
   S12_ThetaY_35_40__744->SetBinError(314,0.2209447);
   S12_ThetaY_35_40__744->SetBinError(315,0.1961161);
   S12_ThetaY_35_40__744->SetBinError(316,0.1720052);
   S12_ThetaY_35_40__744->SetMinimum(0);
   S12_ThetaY_35_40__744->SetMaximum(1.478025);
   S12_ThetaY_35_40__744->SetEntries(230);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_35_40__744->SetLineColor(ci);
   S12_ThetaY_35_40__744->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_35_40__744->SetMarkerColor(ci);
   S12_ThetaY_35_40__744->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_35_40__744->GetXaxis()->SetRange(296,335);
   S12_ThetaY_35_40__744->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_35_40__744->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_35_40__744->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_35_40__744->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_35_40__744->GetYaxis()->CenterTitle(true);
   S12_ThetaY_35_40__744->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_35_40__744->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_35_40__744->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_35_40__744->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_35_40__744->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_35_40__744->Draw("AE");
   
   TH1D *ThetaY_35_40__745 = new TH1D("ThetaY_35_40__745","",630,-1575,1575);
   ThetaY_35_40__745->SetBinContent(306,0.06679574);
   ThetaY_35_40__745->SetBinContent(307,0.4007744);
   ThetaY_35_40__745->SetBinContent(308,0.7270087);
   ThetaY_35_40__745->SetBinContent(309,1);
   ThetaY_35_40__745->SetBinContent(310,1.134882);
   ThetaY_35_40__745->SetBinContent(311,1.232333);
   ThetaY_35_40__745->SetBinContent(312,1.291707);
   ThetaY_35_40__745->SetBinContent(313,1.343659);
   ThetaY_35_40__745->SetBinContent(314,1.333011);
   ThetaY_35_40__745->SetBinContent(315,1.333011);
   ThetaY_35_40__745->SetBinContent(316,1.342046);
   ThetaY_35_40__745->SetBinContent(317,1.295902);
   ThetaY_35_40__745->SetBinContent(318,1.332688);
   ThetaY_35_40__745->SetBinContent(319,1.289771);
   ThetaY_35_40__745->SetBinContent(320,1.235237);
   ThetaY_35_40__745->SetBinContent(321,1.143595);
   ThetaY_35_40__745->SetBinContent(322,0.9867699);
   ThetaY_35_40__745->SetBinContent(323,0.7712165);
   ThetaY_35_40__745->SetBinContent(324,0.410455);
   ThetaY_35_40__745->SetBinContent(325,0.065505);
   ThetaY_35_40__745->SetBinError(306,0.004642625);
   ThetaY_35_40__745->SetBinError(307,0.01137206);
   ThetaY_35_40__745->SetBinError(308,0.01531648);
   ThetaY_35_40__745->SetBinError(309,0.01796343);
   ThetaY_35_40__745->SetBinError(310,0.01913659);
   ThetaY_35_40__745->SetBinError(311,0.01994129);
   ThetaY_35_40__745->SetBinError(312,0.02041603);
   ThetaY_35_40__745->SetBinError(313,0.02082254);
   ThetaY_35_40__745->SetBinError(314,0.02073987);
   ThetaY_35_40__745->SetBinError(315,0.02073987);
   ThetaY_35_40__745->SetBinError(316,0.02081004);
   ThetaY_35_40__745->SetBinError(317,0.02044915);
   ThetaY_35_40__745->SetBinError(318,0.02073736);
   ThetaY_35_40__745->SetBinError(319,0.02040072);
   ThetaY_35_40__745->SetBinError(320,0.01996477);
   ThetaY_35_40__745->SetBinError(321,0.01920991);
   ThetaY_35_40__745->SetBinError(322,0.0178442);
   ThetaY_35_40__745->SetBinError(323,0.01577529);
   ThetaY_35_40__745->SetBinError(324,0.01150859);
   ThetaY_35_40__745->SetBinError(325,0.00459755);
   ThetaY_35_40__745->SetEntries(61163);

   ci = TColor::GetColor("#ff0000");
   ThetaY_35_40__745->SetLineColor(ci);
   ThetaY_35_40__745->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_35_40__745->SetMarkerColor(ci);
   ThetaY_35_40__745->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_35_40__745->GetXaxis()->CenterTitle(true);
   ThetaY_35_40__745->GetXaxis()->SetLabelFont(42);
   ThetaY_35_40__745->GetXaxis()->SetTitleSize(0.04);
   ThetaY_35_40__745->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_35_40__745->GetXaxis()->SetTitleFont(42);
   ThetaY_35_40__745->GetYaxis()->SetTitle("Tracks");
   ThetaY_35_40__745->GetYaxis()->CenterTitle(true);
   ThetaY_35_40__745->GetYaxis()->SetNdivisions(4000510);
   ThetaY_35_40__745->GetYaxis()->SetLabelFont(42);
   ThetaY_35_40__745->GetYaxis()->SetTitleSize(0.04);
   ThetaY_35_40__745->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_35_40__745->GetYaxis()->SetTitleFont(42);
   ThetaY_35_40__745->GetZaxis()->SetLabelFont(42);
   ThetaY_35_40__745->GetZaxis()->SetTitleOffset(1);
   ThetaY_35_40__745->GetZaxis()->SetTitleFont(42);
   ThetaY_35_40__745->Draw("AEsame");
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
   
   Double_t _fx3249[20] = {
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
   Double_t _fy3249[20] = {
   0,
   0.6717763,
   0.7935573,
   1,
   0.9828197,
   0.7490483,
   0.7146179,
   0.7442363,
   0.9521535,
   0.7501816,
   0.5731777,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3249[20] = {
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
   Double_t _fely3249[20] = {
   0,
   0.2483488,
   0.2032209,
   0.1956328,
   0.1821687,
   0.152284,
   0.1452641,
   0.1454477,
   0.1655428,
   0.1466131,
   0.1273774,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3249[20] = {
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
   Double_t _fehy3249[20] = {
   1.064804,
   0.3633951,
   0.2634974,
   0.2383183,
   0.2195914,
   0.18696,
   0.1783343,
   0.1771314,
   0.1972198,
   0.1785519,
   0.159445,
   0.05465287,
   0.05314396,
   0.05491273,
   0.05733762,
   0.06193358,
   0.07177949,
   0.09184944,
   0.1726372,
   1.08588};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3249,_fy3249,_felx3249,_fehx3249,_fely3249,_fehy3249);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3249 = new TH1F("Graph_Graph3249","",100,-100,100);
   Graph_Graph3249->SetMinimum(0);
   Graph_Graph3249->SetMaximum(1.5);
   Graph_Graph3249->SetDirectory(0);
   Graph_Graph3249->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3249->SetLineColor(ci);
   Graph_Graph3249->GetXaxis()->SetRange(1,100);
   Graph_Graph3249->GetXaxis()->CenterTitle(true);
   Graph_Graph3249->GetXaxis()->SetLabelFont(42);
   Graph_Graph3249->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3249->GetXaxis()->SetTitleFont(42);
   Graph_Graph3249->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3249->GetYaxis()->CenterTitle(true);
   Graph_Graph3249->GetYaxis()->SetLabelFont(42);
   Graph_Graph3249->GetYaxis()->SetTitleFont(42);
   Graph_Graph3249->GetZaxis()->SetLabelFont(42);
   Graph_Graph3249->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3249->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3249);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.478025,510,"S");
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
   
   TH2D *ThetaY_vs_Y_35_40__746 = new TH2D("ThetaY_vs_Y_35_40__746","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_35_40__746->SetBinContent(7976,207);
   ThetaY_vs_Y_35_40__746->SetBinContent(8002,1242);
   ThetaY_vs_Y_35_40__746->SetBinContent(8028,2253);
   ThetaY_vs_Y_35_40__746->SetBinContent(8054,3099);
   ThetaY_vs_Y_35_40__746->SetBinContent(8080,3517);
   ThetaY_vs_Y_35_40__746->SetBinContent(8106,3819);
   ThetaY_vs_Y_35_40__746->SetBinContent(8132,4003);
   ThetaY_vs_Y_35_40__746->SetBinContent(8158,4164);
   ThetaY_vs_Y_35_40__746->SetBinContent(8184,4131);
   ThetaY_vs_Y_35_40__746->SetBinContent(8210,4131);
   ThetaY_vs_Y_35_40__746->SetBinContent(8236,4159);
   ThetaY_vs_Y_35_40__746->SetBinContent(8262,4016);
   ThetaY_vs_Y_35_40__746->SetBinContent(8288,4130);
   ThetaY_vs_Y_35_40__746->SetBinContent(8314,3997);
   ThetaY_vs_Y_35_40__746->SetBinContent(8340,3828);
   ThetaY_vs_Y_35_40__746->SetBinContent(8366,3544);
   ThetaY_vs_Y_35_40__746->SetBinContent(8392,3058);
   ThetaY_vs_Y_35_40__746->SetBinContent(8418,2390);
   ThetaY_vs_Y_35_40__746->SetBinContent(8444,1272);
   ThetaY_vs_Y_35_40__746->SetBinContent(8470,203);
   ThetaY_vs_Y_35_40__746->SetEntries(61163);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_35_40__746->SetLineColor(ci);
   ThetaY_vs_Y_35_40__746->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_35_40__746->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_35_40__746->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_35_40__746->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__746->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_35_40__746->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__746->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_35_40__746->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_35_40__746->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_35_40__746->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__746->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__746->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__746->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_35_40__746->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__746->Draw("COL");
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
   entry=leg->AddEntry("S12_ThetaY_35_40","Reco vertices","lpf");
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
