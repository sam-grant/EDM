void S18_VerticalDecayPositionRatio_500_750_MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:41 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: upper_pad
   TPad *upper_pad = new TPad("upper_pad", "",0.0025,0.3,0.9975,0.9975);
   upper_pad->Draw();
   upper_pad->cd();
   upper_pad->Range(-81.25,-0.06320382,81.25,1.200873);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_Y__409 = new TH1D("S18_Y__409","",24,-60,60);
   S18_Y__409->SetBinContent(4,0.01791531);
   S18_Y__409->SetBinContent(5,0.05266015);
   S18_Y__409->SetBinContent(6,0.1042345);
   S18_Y__409->SetBinContent(7,0.2187839);
   S18_Y__409->SetBinContent(8,0.3403909);
   S18_Y__409->SetBinContent(9,0.4885993);
   S18_Y__409->SetBinContent(10,0.6824104);
   S18_Y__409->SetBinContent(11,0.864278);
   S18_Y__409->SetBinContent(12,0.9858849);
   S18_Y__409->SetBinContent(13,1);
   S18_Y__409->SetBinContent(14,0.9022801);
   S18_Y__409->SetBinContent(15,0.7111835);
   S18_Y__409->SetBinContent(16,0.5038002);
   S18_Y__409->SetBinContent(17,0.3360478);
   S18_Y__409->SetBinContent(18,0.194354);
   S18_Y__409->SetBinContent(19,0.1064061);
   S18_Y__409->SetBinContent(20,0.05266015);
   S18_Y__409->SetBinContent(21,0.01411509);
   S18_Y__409->SetBinError(4,0.003118655);
   S18_Y__409->SetBinError(5,0.005346828);
   S18_Y__409->SetBinError(6,0.007522479);
   S18_Y__409->SetBinError(7,0.0108984);
   S18_Y__409->SetBinError(8,0.0135939);
   S18_Y__409->SetBinError(9,0.01628664);
   S18_Y__409->SetBinError(10,0.01924766);
   S18_Y__409->SetBinError(11,0.02166117);
   S18_Y__409->SetBinError(12,0.02313494);
   S18_Y__409->SetBinError(13,0.02329996);
   S18_Y__409->SetBinError(14,0.02213227);
   S18_Y__409->SetBinError(15,0.01964925);
   S18_Y__409->SetBinError(16,0.01653805);
   S18_Y__409->SetBinError(17,0.0135069);
   S18_Y__409->SetBinError(18,0.01027193);
   S18_Y__409->SetBinError(19,0.007600434);
   S18_Y__409->SetBinError(20,0.005346828);
   S18_Y__409->SetBinError(21,0.002768197);
   S18_Y__409->SetEntries(13955);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_Y__409->SetLineColor(ci);
   S18_Y__409->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_Y__409->SetMarkerColor(ci);
   S18_Y__409->GetXaxis()->SetTitle("Decay y-position [mm]");
   S18_Y__409->GetXaxis()->SetRange(0,25);
   S18_Y__409->GetXaxis()->SetLabelFont(42);
   S18_Y__409->GetXaxis()->SetTitleOffset(1);
   S18_Y__409->GetXaxis()->SetTitleFont(42);
   S18_Y__409->GetYaxis()->SetTitle("Normalised entries");
   S18_Y__409->GetYaxis()->CenterTitle(true);
   S18_Y__409->GetYaxis()->SetLabelFont(42);
   S18_Y__409->GetYaxis()->SetTitleFont(42);
   S18_Y__409->GetZaxis()->SetLabelFont(42);
   S18_Y__409->GetZaxis()->SetTitleOffset(1);
   S18_Y__409->GetZaxis()->SetTitleFont(42);
   S18_Y__409->Draw("AE");
   
   TH1D *Y__410 = new TH1D("Y__410","",24,-60,60);
   Y__410->SetBinContent(4,0.02834475);
   Y__410->SetBinContent(5,0.07389082);
   Y__410->SetBinContent(6,0.1388716);
   Y__410->SetBinContent(7,0.2354676);
   Y__410->SetBinContent(8,0.371596);
   Y__410->SetBinContent(9,0.5517771);
   Y__410->SetBinContent(10,0.7461984);
   Y__410->SetBinContent(11,0.9090805);
   Y__410->SetBinContent(12,0.9998181);
   Y__410->SetBinContent(13,1);
   Y__410->SetBinContent(14,0.9086417);
   Y__410->SetBinContent(15,0.7439773);
   Y__410->SetBinContent(16,0.55096);
   Y__410->SetBinContent(17,0.37237);
   Y__410->SetBinContent(18,0.2340112);
   Y__410->SetBinContent(19,0.1390227);
   Y__410->SetBinContent(20,0.07412824);
   Y__410->SetBinContent(21,0.02810014);
   Y__410->SetBinError(4,0.0001706834);
   Y__410->SetBinError(5,0.0002755816);
   Y__410->SetBinError(6,0.0003777998);
   Y__410->SetBinError(7,0.0004919496);
   Y__410->SetBinError(8,0.0006180029);
   Y__410->SetBinError(9,0.0007530725);
   Y__410->SetBinError(10,0.000875754);
   Y__410->SetBinError(11,0.0009666208);
   Y__410->SetBinError(12,0.001013714);
   Y__410->SetBinError(13,0.001013806);
   Y__410->SetBinError(14,0.0009663875);
   Y__410->SetBinError(15,0.0008744497);
   Y__410->SetBinError(16,0.0007525147);
   Y__410->SetBinError(17,0.0006186461);
   Y__410->SetBinError(18,0.0004904258);
   Y__410->SetBinError(19,0.0003780052);
   Y__410->SetBinError(20,0.000276024);
   Y__410->SetBinError(21,0.0001699453);
   Y__410->SetEntries(7886974);

   ci = TColor::GetColor("#ff0000");
   Y__410->SetLineColor(ci);
   Y__410->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   Y__410->SetMarkerColor(ci);
   Y__410->GetXaxis()->SetTitle("Decay y-position [mm]");
   Y__410->GetXaxis()->CenterTitle(true);
   Y__410->GetXaxis()->SetLabelFont(42);
   Y__410->GetXaxis()->SetTitleSize(0.04);
   Y__410->GetXaxis()->SetTitleOffset(1.1);
   Y__410->GetXaxis()->SetTitleFont(42);
   Y__410->GetYaxis()->SetTitle("Decays");
   Y__410->GetYaxis()->CenterTitle(true);
   Y__410->GetYaxis()->SetNdivisions(4000510);
   Y__410->GetYaxis()->SetLabelFont(42);
   Y__410->GetYaxis()->SetTitleSize(0.04);
   Y__410->GetYaxis()->SetTitleOffset(1.1);
   Y__410->GetYaxis()->SetTitleFont(42);
   Y__410->GetZaxis()->SetLabelFont(42);
   Y__410->GetZaxis()->SetTitleOffset(1);
   Y__410->GetZaxis()->SetTitleFont(42);
   Y__410->Draw("AEsame");
   upper_pad->Modified();
   c->cd();
  
// ------------>Primitives in pad: lower_pad
   TPad *lower_pad = new TPad("lower_pad", "",0.0025,0.0025,0.9975,0.3);
   lower_pad->Draw();
   lower_pad->cd();
   lower_pad->Range(-81.25,-0.5769231,81.25,1.346154);
   lower_pad->SetFillColor(0);
   lower_pad->SetBorderMode(0);
   lower_pad->SetBorderSize(2);
   lower_pad->SetTopMargin(0.05);
   lower_pad->SetBottomMargin(0.3);
   lower_pad->SetFrameBorderMode(0);
   lower_pad->SetFrameBorderMode(0);
   
   Double_t _fx3137[18] = {
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
   Double_t _fy3137[18] = {
   0.6320503,
   0.7126752,
   0.7505819,
   0.9291465,
   0.916024,
   0.8855013,
   0.914516,
   0.9507166,
   0.9860643,
   1,
   0.9929989,
   0.9559209,
   0.9144043,
   0.9024567,
   0.8305326,
   0.7653864,
   0.7103926,
   0.502314};
   Double_t _felx3137[18] = {
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
   Double_t _fely3137[18] = {
   0.109529,
   0.0722845,
   0.05415965,
   0.04630547,
   0.03660438,
   0.02953593,
   0.02581317,
   0.02384648,
   0.02315859,
   0.02331988,
   0.02437795,
   0.02643159,
   0.03003733,
   0.03629393,
   0.04390891,
   0.05466318,
   0.07205283,
   0.0979191};
   Double_t _fehx3137[18] = {
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
   Double_t _fehy3137[18] = {
   0.1303838,
   0.08001721,
   0.05821651,
   0.04867296,
   0.03809726,
   0.03053798,
   0.0265523,
   0.02445227,
   0.02370901,
   0.02387017,
   0.02498393,
   0.02717278,
   0.03104067,
   0.03778385,
   0.04629422,
   0.0587143,
   0.07976073,
   0.1191634};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3137,_fy3137,_felx3137,_fehx3137,_fely3137,_fehy3137);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3137 = new TH1F("Graph_Graph3137","",100,-65,65);
   Graph_Graph3137->SetMinimum(0);
   Graph_Graph3137->SetMaximum(1.25);
   Graph_Graph3137->SetDirectory(0);
   Graph_Graph3137->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3137->SetLineColor(ci);
   Graph_Graph3137->GetXaxis()->SetRange(1,100);
   Graph_Graph3137->GetXaxis()->CenterTitle(true);
   Graph_Graph3137->GetXaxis()->SetLabelFont(42);
   Graph_Graph3137->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3137->GetXaxis()->SetTitleFont(42);
   Graph_Graph3137->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3137->GetYaxis()->CenterTitle(true);
   Graph_Graph3137->GetYaxis()->SetLabelFont(42);
   Graph_Graph3137->GetYaxis()->SetTitleFont(42);
   Graph_Graph3137->GetZaxis()->SetLabelFont(42);
   Graph_Graph3137->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3137->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3137);
   
   grae->Draw("iaap");
   TLine *line = new TLine(-65,0.7,65,0.7);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-65,1,65,1);
   line->SetLineStyle(2);
   line->Draw();
   lower_pad->Modified();
   c->cd();
  
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
   TGaxis *gaxis = new TGaxis(0.1,0.335,0.9,0.335,-65,65,510,"+U");
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.074465,510,"S");
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
   gaxis = new TGaxis(0.1,0.09000001,0.9,0.09000001,-65,65,510,"+S");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.035);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0);
   gaxis->SetTitleOffset(1);
   gaxis->SetTitleSize(0.035);
   gaxis->SetTitleColor(1);
   gaxis->SetTitleFont(42);
   gaxis->SetTitle("Decay y-position [mm]");
   gaxis->SetLabelFont(42);
   gaxis->Draw();
   gaxis = new TGaxis(0.1,0.09000001,0.1,0.285,0,1.25,510,"-S");
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
   c->cd();
//Primitive: TRatioPlot/A ratio of histograms. You must implement TRatioPlot::SavePrimitive
   
   TLegend *leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(24);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Y","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_Y","Truth vertices","lpf");
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
