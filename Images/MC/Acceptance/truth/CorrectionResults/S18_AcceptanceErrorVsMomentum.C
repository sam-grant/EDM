void S18_AcceptanceErrorVsMomentum()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Apr 26 13:21:09 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(499.748,-0.01531746,2740.76,0.2571987);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1008[7] = {
   873.25,
   1122.829,
   1372.245,
   1621.478,
   1870.594,
   2119.355,
   2367.258};
   Double_t _fy1008[7] = {
   0.1539203,
   0.01326017,
   0.04770306,
   0.0201782,
   0.06208599,
   0.06593913,
   0.2102483};
   Double_t _fex1008[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1008[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(7,_fx1008,_fy1008,_fex1008,_fey1008);
   gre->SetName("");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1008 = new TH1F("Graph_Graph1008","S18",100,723.8492,2516.659);
   Graph_Graph1008->SetMinimum(0.01193416);
   Graph_Graph1008->SetMaximum(0.2299471);
   Graph_Graph1008->SetDirectory(0);
   Graph_Graph1008->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1008->SetLineColor(ci);
   Graph_Graph1008->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1008->GetXaxis()->CenterTitle(true);
   Graph_Graph1008->GetXaxis()->SetLabelFont(42);
   Graph_Graph1008->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1008->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1008->GetXaxis()->SetTitleFont(42);
   Graph_Graph1008->GetYaxis()->SetTitle("Acceptance fractional uncertainty / 250 MeV");
   Graph_Graph1008->GetYaxis()->CenterTitle(true);
   Graph_Graph1008->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1008->GetYaxis()->SetLabelFont(42);
   Graph_Graph1008->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1008->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1008->GetYaxis()->SetTitleFont(42);
   Graph_Graph1008->GetZaxis()->SetLabelFont(42);
   Graph_Graph1008->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1008->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1008);
   
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
