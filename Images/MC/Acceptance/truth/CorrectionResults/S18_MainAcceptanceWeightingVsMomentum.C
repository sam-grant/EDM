void S18_MainAcceptanceWeightingVsMomentum()
{
//=========Macro generated from canvas: c/c
//=========  (Sat May  7 22:35:48 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(812.9191,0.1227086,2673.475,0.9622515);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1013[6] = {
   1123.012,
   1370.957,
   1619.772,
   1866.605,
   2115.051,
   2363.383};
   Double_t _fy1013[6] = {
   0.3303288,
   0.4721819,
   0.5170728,
   0.5551437,
   0.4625231,
   0.6875131};
   Double_t _fex1013[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1013[6] = {
   0.06769643,
   0.06954681,
   0.07387668,
   0.0820362,
   0.1175602,
   0.1348145};
   TGraphErrors *gre = new TGraphErrors(6,_fx1013,_fy1013,_fex1013,_fey1013);
   gre->SetName("");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1013 = new TH1F("Graph_Graph1013","S18",100,998.9747,2487.42);
   Graph_Graph1013->SetMinimum(0.2066629);
   Graph_Graph1013->SetMaximum(0.8782972);
   Graph_Graph1013->SetDirectory(0);
   Graph_Graph1013->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1013->SetLineColor(ci);
   Graph_Graph1013->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1013->GetXaxis()->CenterTitle(true);
   Graph_Graph1013->GetXaxis()->SetLabelFont(42);
   Graph_Graph1013->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1013->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1013->GetXaxis()->SetTitleFont(42);
   Graph_Graph1013->GetYaxis()->SetTitle("A_{EDM} acceptance fraction / 250 MeV");
   Graph_Graph1013->GetYaxis()->CenterTitle(true);
   Graph_Graph1013->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1013->GetYaxis()->SetLabelFont(42);
   Graph_Graph1013->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1013->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1013->GetYaxis()->SetTitleFont(42);
   Graph_Graph1013->GetZaxis()->SetLabelFont(42);
   Graph_Graph1013->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1013);
   
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
