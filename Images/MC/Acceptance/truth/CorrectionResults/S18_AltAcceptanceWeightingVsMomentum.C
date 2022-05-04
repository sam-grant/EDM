void S18_AltAcceptanceWeightingVsMomentum()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May  4 16:40:18 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(811.7217,0.4569023,2678.365,0.8277753);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1010[6] = {
   1122.829,
   1372.245,
   1621.478,
   1870.594,
   2119.355,
   2367.258};
   Double_t _fy1010[6] = {
   0.5449689,
   0.5570113,
   0.6066522,
   0.6169483,
   0.5822353,
   0.7097309};
   Double_t _fex1010[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1010[6] = {
   0.02625446,
   0.03605644,
   0.03661261,
   0.03943247,
   0.0459746,
   0.05623216};
   TGraphErrors *gre = new TGraphErrors(6,_fx1010,_fy1010,_fex1010,_fey1010);
   gre->SetName("");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1010 = new TH1F("Graph_Graph1010","S18",100,998.3861,2491.701);
   Graph_Graph1010->SetMinimum(0.4939896);
   Graph_Graph1010->SetMaximum(0.790688);
   Graph_Graph1010->SetDirectory(0);
   Graph_Graph1010->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1010->SetLineColor(ci);
   Graph_Graph1010->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1010->GetXaxis()->CenterTitle(true);
   Graph_Graph1010->GetXaxis()->SetLabelFont(42);
   Graph_Graph1010->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1010->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1010->GetXaxis()->SetTitleFont(42);
   Graph_Graph1010->GetYaxis()->SetTitle("Vertical angle acceptance fraction / 250 MeV");
   Graph_Graph1010->GetYaxis()->CenterTitle(true);
   Graph_Graph1010->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1010->GetYaxis()->SetLabelFont(42);
   Graph_Graph1010->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1010->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1010->GetYaxis()->SetTitleFont(42);
   Graph_Graph1010->GetZaxis()->SetLabelFont(42);
   Graph_Graph1010->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1010->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1010);
   
   gre->Draw("apl");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
