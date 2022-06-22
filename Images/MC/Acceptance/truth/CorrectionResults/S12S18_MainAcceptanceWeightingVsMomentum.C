void S12S18_MainAcceptanceWeightingVsMomentum()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jun  3 03:41:31 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(813.104,0.2580573,2672.985,0.7772983);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1020[6] = {
   1123.084,
   1371.063,
   1619.993,
   1866.796,
   2114.997,
   2363.005};
   Double_t _fy1020[6] = {
   0.3950764,
   0.4600167,
   0.5536233,
   0.5998401,
   0.6024564,
   0.5884637};
   Double_t _fex1020[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1020[6] = {
   0.05047893,
   0.05132501,
   0.05564692,
   0.06156424,
   0.08830177,
   0.09650543};
   TGraphErrors *gre = new TGraphErrors(6,_fx1020,_fy1020,_fex1020,_fey1020);
   gre->SetName("");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1020 = new TH1F("Graph_Graph1020","S12S18",100,999.0921,2486.997);
   Graph_Graph1020->SetMinimum(0.3099814);
   Graph_Graph1020->SetMaximum(0.7253742);
   Graph_Graph1020->SetDirectory(0);
   Graph_Graph1020->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1020->SetLineColor(ci);
   Graph_Graph1020->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1020->GetXaxis()->CenterTitle(true);
   Graph_Graph1020->GetXaxis()->SetLabelFont(42);
   Graph_Graph1020->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1020->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1020->GetXaxis()->SetTitleFont(42);
   Graph_Graph1020->GetYaxis()->SetTitle("A_{EDM} acceptance factor / 250 MeV");
   Graph_Graph1020->GetYaxis()->CenterTitle(true);
   Graph_Graph1020->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1020->GetYaxis()->SetLabelFont(42);
   Graph_Graph1020->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1020->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1020->GetYaxis()->SetTitleFont(42);
   Graph_Graph1020->GetZaxis()->SetLabelFont(42);
   Graph_Graph1020->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1020->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1020);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4253015,0.94,0.5746985,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
