void QHV_vs_DS()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jul  6 09:52:16 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,53,800,600);
   c->SetHighLightColor(2);
   c->Range(-1.775,17.11525,15.975,20.97074);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1[13] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9,
   10,
   11,
   12,
   13};
   Double_t Graph0_fy1[13] = {
   17.75783,
   19.94706,
   20.32816,
   18.09728,
   18.29811,
   18.22069,
   18.20219,
   18.15776,
   18.23101,
   18.3098,
   18.27009,
   18.10445,
   18.20478};
   TGraph *graph = new TGraph(13,Graph0_fx1,Graph0_fy1);
   graph->SetName("Graph0");
   graph->SetTitle(";Dataset;QHV [kV]");
   graph->SetFillStyle(1000);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01 = new TH1F("Graph_Graph01","",100,0,14.2);
   Graph_Graph01->SetMinimum(17.5008);
   Graph_Graph01->SetMaximum(20.58519);
   Graph_Graph01->SetDirectory(0);
   Graph_Graph01->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01->SetLineColor(ci);
   Graph_Graph01->GetXaxis()->SetTitle("Dataset");
   Graph_Graph01->GetXaxis()->SetBinLabel(8,"1a");
   Graph_Graph01->GetXaxis()->SetBinLabel(15,"1b");
   Graph_Graph01->GetXaxis()->SetBinLabel(22,"1c");
   Graph_Graph01->GetXaxis()->SetBinLabel(29,"1d");
   Graph_Graph01->GetXaxis()->SetBinLabel(36,"2b");
   Graph_Graph01->GetXaxis()->SetBinLabel(43,"2c");
   Graph_Graph01->GetXaxis()->SetBinLabel(50,"2d");
   Graph_Graph01->GetXaxis()->SetBinLabel(57,"2e");
   Graph_Graph01->GetXaxis()->SetBinLabel(64,"2f");
   Graph_Graph01->GetXaxis()->SetBinLabel(71,"2g");
   Graph_Graph01->GetXaxis()->SetBinLabel(78,"2h");
   Graph_Graph01->GetXaxis()->SetBinLabel(85,"3N");
   Graph_Graph01->GetXaxis()->SetBinLabel(92,"3O");
   Graph_Graph01->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph01->GetXaxis()->CenterTitle(true);
   Graph_Graph01->GetXaxis()->SetLabelFont(42);
   Graph_Graph01->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01->GetXaxis()->SetTitleFont(42);
   Graph_Graph01->GetYaxis()->SetTitle("QHV [kV]");
   Graph_Graph01->GetYaxis()->CenterTitle(true);
   Graph_Graph01->GetYaxis()->SetLabelFont(42);
   Graph_Graph01->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01->GetYaxis()->SetTitleFont(42);
   Graph_Graph01->GetZaxis()->SetLabelFont(42);
   Graph_Graph01->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph01);
   
   graph->Draw("0apl");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
