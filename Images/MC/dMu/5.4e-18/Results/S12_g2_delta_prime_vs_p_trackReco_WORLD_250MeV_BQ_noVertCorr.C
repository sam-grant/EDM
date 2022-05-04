void S12_g2_delta_prime_vs_p_trackReco_WORLD_250MeV_BQ_noVertCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May  4 16:39:22 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(813.3064,-1.539647,2672.501,1.704885);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1027[6] = {
   1123.172,
   1371.155,
   1620.23,
   1866.957,
   2115.041,
   2362.635};
   Double_t _fy1027[6] = {
   -0.06541755,
   -0.2133906,
   -0.1892407,
   0.2422756,
   0.2810058,
   0.1800442};
   Double_t _fex1027[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1027[6] = {
   0.2517268,
   0.2518033,
   0.1997122,
   0.2061079,
   0.2236564,
   0.4503876};
   TGraphErrors *gre = new TGraphErrors(6,_fx1027,_fy1027,_fex1027,_fey1027);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum [MeV];#delta [mrad] / 250 MeV;");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1027 = new TH1F("Graph_Graph1027","",100,999.2259,2486.581);
   Graph_Graph1027->SetMinimum(-1.215194);
   Graph_Graph1027->SetMaximum(1.380432);
   Graph_Graph1027->SetDirectory(0);
   Graph_Graph1027->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1027->SetLineColor(ci);
   Graph_Graph1027->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1027->GetXaxis()->CenterTitle(true);
   Graph_Graph1027->GetXaxis()->SetLabelFont(42);
   Graph_Graph1027->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1027->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1027->GetXaxis()->SetTitleFont(42);
   Graph_Graph1027->GetYaxis()->SetTitle("#delta [mrad] / 250 MeV");
   Graph_Graph1027->GetYaxis()->CenterTitle(true);
   Graph_Graph1027->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1027->GetYaxis()->SetLabelFont(42);
   Graph_Graph1027->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1027->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1027->GetYaxis()->SetTitleFont(42);
   Graph_Graph1027->GetZaxis()->SetLabelFont(42);
   Graph_Graph1027->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1027->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1027);
   
   
   TF1 *pol01028 = new TF1("pol0","pol0",1000,2500, TF1::EAddToList::kNo);
   pol01028->SetFillColor(19);
   pol01028->SetFillStyle(0);
   pol01028->SetLineColor(2);
   pol01028->SetLineWidth(2);
   pol01028->SetChisquare(4.714283);
   pol01028->SetNDF(5);
   pol01028->GetXaxis()->SetLabelFont(42);
   pol01028->GetXaxis()->SetTitleOffset(1);
   pol01028->GetXaxis()->SetTitleFont(42);
   pol01028->GetYaxis()->SetLabelFont(42);
   pol01028->GetYaxis()->SetTitleFont(42);
   pol01028->SetParameter(0,0.02917486);
   pol01028->SetParError(0,0.09755001);
   pol01028->SetParLimits(0,0,0);
   pol01028->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01028);
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.11,0.75,0.59,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Sim: reco vertices","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.029
#pm0.1
 mrad","lpf");
   entry->SetFillColor(19);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
