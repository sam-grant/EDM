void S12_VerticalDecayAngleRatio_35_40()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:03 2022) by ROOT version 6.24/06
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
   
   TH1D *S12_ThetaY_35_40__1428 = new TH1D("S12_ThetaY_35_40__1428","",630,-1575,1575);
   S12_ThetaY_35_40__1428->SetBinContent(311,1);
   S12_ThetaY_35_40__1428->SetBinContent(312,0.8571429);
   S12_ThetaY_35_40__1428->SetBinContent(313,1.714286);
   S12_ThetaY_35_40__1428->SetBinContent(314,1.857143);
   S12_ThetaY_35_40__1428->SetBinContent(315,2.142857);
   S12_ThetaY_35_40__1428->SetBinContent(316,0.7142857);
   S12_ThetaY_35_40__1428->SetBinContent(317,0.1428571);
   S12_ThetaY_35_40__1428->SetBinError(311,0.3779645);
   S12_ThetaY_35_40__1428->SetBinError(312,0.3499271);
   S12_ThetaY_35_40__1428->SetBinError(313,0.4948717);
   S12_ThetaY_35_40__1428->SetBinError(314,0.5150788);
   S12_ThetaY_35_40__1428->SetBinError(315,0.5532833);
   S12_ThetaY_35_40__1428->SetBinError(316,0.3194383);
   S12_ThetaY_35_40__1428->SetBinError(317,0.1428571);
   S12_ThetaY_35_40__1428->SetMinimum(0);
   S12_ThetaY_35_40__1428->SetMaximum(5.347967);
   S12_ThetaY_35_40__1428->SetEntries(59);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_35_40__1428->SetLineColor(ci);
   S12_ThetaY_35_40__1428->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_35_40__1428->SetMarkerColor(ci);
   S12_ThetaY_35_40__1428->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_35_40__1428->GetXaxis()->SetRange(296,335);
   S12_ThetaY_35_40__1428->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_35_40__1428->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_35_40__1428->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_35_40__1428->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_35_40__1428->GetYaxis()->CenterTitle(true);
   S12_ThetaY_35_40__1428->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_35_40__1428->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_35_40__1428->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_35_40__1428->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_35_40__1428->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_35_40__1428->Draw("AE");
   
   TH1D *ThetaY_35_40__1429 = new TH1D("ThetaY_35_40__1429","",630,-1575,1575);
   ThetaY_35_40__1429->SetBinContent(310,0.004645761);
   ThetaY_35_40__1429->SetBinContent(311,1);
   ThetaY_35_40__1429->SetBinContent(312,3.009292);
   ThetaY_35_40__1429->SetBinContent(313,4.034843);
   ThetaY_35_40__1429->SetBinContent(314,4.67712);
   ThetaY_35_40__1429->SetBinContent(315,4.796748);
   ThetaY_35_40__1429->SetBinContent(316,4.861789);
   ThetaY_35_40__1429->SetBinContent(317,4.721254);
   ThetaY_35_40__1429->SetBinContent(318,4.181185);
   ThetaY_35_40__1429->SetBinContent(319,3.051103);
   ThetaY_35_40__1429->SetBinContent(320,0.9767712);
   ThetaY_35_40__1429->SetBinContent(321,0.00116144);
   ThetaY_35_40__1429->SetBinError(310,0.00232288);
   ThetaY_35_40__1429->SetBinError(311,0.03407991);
   ThetaY_35_40__1429->SetBinError(312,0.05911947);
   ThetaY_35_40__1429->SetBinError(313,0.06845604);
   ThetaY_35_40__1429->SetBinError(314,0.07370342);
   ThetaY_35_40__1429->SetBinError(315,0.07464004);
   ThetaY_35_40__1429->SetBinError(316,0.07514437);
   ThetaY_35_40__1429->SetBinError(317,0.07405035);
   ThetaY_35_40__1429->SetBinError(318,0.06968641);
   ThetaY_35_40__1429->SetBinError(319,0.05952877);
   ThetaY_35_40__1429->SetBinError(320,0.03368177);
   ThetaY_35_40__1429->SetBinError(321,0.00116144);
   ThetaY_35_40__1429->SetEntries(30407);

   ci = TColor::GetColor("#ff0000");
   ThetaY_35_40__1429->SetLineColor(ci);
   ThetaY_35_40__1429->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_35_40__1429->SetMarkerColor(ci);
   ThetaY_35_40__1429->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_35_40__1429->GetXaxis()->CenterTitle(true);
   ThetaY_35_40__1429->GetXaxis()->SetLabelFont(42);
   ThetaY_35_40__1429->GetXaxis()->SetTitleSize(0.04);
   ThetaY_35_40__1429->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_35_40__1429->GetXaxis()->SetTitleFont(42);
   ThetaY_35_40__1429->GetYaxis()->SetTitle("Tracks");
   ThetaY_35_40__1429->GetYaxis()->CenterTitle(true);
   ThetaY_35_40__1429->GetYaxis()->SetNdivisions(4000510);
   ThetaY_35_40__1429->GetYaxis()->SetLabelFont(42);
   ThetaY_35_40__1429->GetYaxis()->SetTitleSize(0.04);
   ThetaY_35_40__1429->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_35_40__1429->GetYaxis()->SetTitleFont(42);
   ThetaY_35_40__1429->GetZaxis()->SetLabelFont(42);
   ThetaY_35_40__1429->GetZaxis()->SetTitleOffset(1);
   ThetaY_35_40__1429->GetZaxis()->SetTitleFont(42);
   ThetaY_35_40__1429->Draw("AEsame");
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
   
   Double_t _fx3477[12] = {
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
   Double_t _fy3477[12] = {
   0,
   1,
   0.2848321,
   0.4248705,
   0.3970698,
   0.4467312,
   0.1469183,
   0.0302583,
   0,
   0,
   0,
   0};
   Double_t _felx3477[12] = {
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
   Double_t _fely3477[12] = {
   0,
   0.3700904,
   0.1130921,
   0.1211134,
   0.1088582,
   0.1142412,
   0.06349111,
   0.02503224,
   0,
   0,
   0,
   0};
   Double_t _fehx3477[12] = {
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
   Double_t _fehy3477[12] = {
   71.89087,
   0.5419796,
   0.1704373,
   0.161829,
   0.1437971,
   0.1480383,
   0.09948894,
   0.06960801,
   0.06291766,
   0.08622955,
   0.2695526,
   652.2658};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3477,_fy3477,_felx3477,_fehx3477,_fely3477,_fehy3477);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3477 = new TH1F("Graph_Graph3477","",100,-100,100);
   Graph_Graph3477->SetMinimum(0);
   Graph_Graph3477->SetMaximum(1.5);
   Graph_Graph3477->SetDirectory(0);
   Graph_Graph3477->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3477->SetLineColor(ci);
   Graph_Graph3477->GetXaxis()->SetRange(1,100);
   Graph_Graph3477->GetXaxis()->CenterTitle(true);
   Graph_Graph3477->GetXaxis()->SetLabelFont(42);
   Graph_Graph3477->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3477->GetXaxis()->SetTitleFont(42);
   Graph_Graph3477->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3477->GetYaxis()->CenterTitle(true);
   Graph_Graph3477->GetYaxis()->SetLabelFont(42);
   Graph_Graph3477->GetYaxis()->SetTitleFont(42);
   Graph_Graph3477->GetZaxis()->SetLabelFont(42);
   Graph_Graph3477->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3477->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3477);
   
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
   
   TH2D *ThetaY_vs_Y_35_40__1430 = new TH2D("ThetaY_vs_Y_35_40__1430","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_35_40__1430->SetBinContent(8080,4);
   ThetaY_vs_Y_35_40__1430->SetBinContent(8106,861);
   ThetaY_vs_Y_35_40__1430->SetBinContent(8132,2591);
   ThetaY_vs_Y_35_40__1430->SetBinContent(8158,3474);
   ThetaY_vs_Y_35_40__1430->SetBinContent(8184,4027);
   ThetaY_vs_Y_35_40__1430->SetBinContent(8210,4130);
   ThetaY_vs_Y_35_40__1430->SetBinContent(8236,4186);
   ThetaY_vs_Y_35_40__1430->SetBinContent(8262,4065);
   ThetaY_vs_Y_35_40__1430->SetBinContent(8288,3600);
   ThetaY_vs_Y_35_40__1430->SetBinContent(8314,2627);
   ThetaY_vs_Y_35_40__1430->SetBinContent(8340,841);
   ThetaY_vs_Y_35_40__1430->SetBinContent(8366,1);
   ThetaY_vs_Y_35_40__1430->SetEntries(30407);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_35_40__1430->SetLineColor(ci);
   ThetaY_vs_Y_35_40__1430->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_35_40__1430->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_35_40__1430->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_35_40__1430->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__1430->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_35_40__1430->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__1430->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_35_40__1430->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_35_40__1430->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_35_40__1430->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__1430->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__1430->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__1430->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_35_40__1430->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__1430->Draw("COL");
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
