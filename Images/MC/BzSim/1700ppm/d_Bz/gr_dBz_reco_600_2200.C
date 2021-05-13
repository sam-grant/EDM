void gr_dBz_reco_600_2200()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May  7 08:53:02 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(365.7,0.02625,2432.7,0.16375);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1003[15] = {
   100,
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t Graph0_fy1003[15] = {
   -0.5173969,
   -0.1550602,
   0.02949106,
   0.07053397,
   0.1209595,
   0.09509567,
   0.104588,
   0.09602431,
   0.100532,
   0.09052093,
   0.06832665,
   0.07636277,
   0.06251374,
   0.0489558,
   0.01609497};
   Double_t Graph0_fex1003[15] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1003[15] = {
   -0.3947868,
   -0.0528484,
   0.01853883,
   0.01391078,
   0.01211839,
   0.0109469,
   0.01003945,
   0.00936684,
   0.008846091,
   0.008581828,
   0.008470211,
   0.008520485,
   0.008796205,
   0.009547336,
   0.01476542};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1003,Graph0_fy1003,Graph0_fex1003,Graph0_fey1003);
   gre->SetName("Graph0");
   gre->SetTitle(";p [MeV]: in range p #minus 100 < p < p #plus 100 MeV;Dilution, d_{Bz}(p)");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph010011003 = new TH1F("Graph_Graph_Graph010011003","",100,0,3180);
   Graph_Graph_Graph010011003->SetMinimum(0.04);
   Graph_Graph_Graph010011003->SetMaximum(0.15);
   Graph_Graph_Graph010011003->SetDirectory(0);
   Graph_Graph_Graph010011003->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph010011003->SetLineColor(ci);
   Graph_Graph_Graph010011003->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph_Graph010011003->GetXaxis()->SetRange(19,70);
   Graph_Graph_Graph010011003->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph010011003->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph010011003->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010011003->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010011003->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph010011003->GetYaxis()->SetTitle("Dilution, d_{Bz}(p)");
   Graph_Graph_Graph010011003->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph010011003->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph010011003->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph010011003->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010011003->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph010011003->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph010011003->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph010011003->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph010011003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph010011003);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
