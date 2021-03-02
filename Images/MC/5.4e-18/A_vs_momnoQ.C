void A_vs_momnoQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Mar  1 20:48:41 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-437.9375,-0.4314676,3941.438,4.103253);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1015[7] = {
   250,
   750,
   1250,
   1750,
   2250,
   2750,
   3250};
   Double_t Graph0_fy1015[7] = {
   0.07072133,
   0.1631844,
   0.1630478,
   0.156977,
   0.1373622,
   0.09261054,
   2.607453};
   Double_t Graph0_fex1015[7] = {
   250,
   250,
   250,
   250,
   250,
   250,
   250};
   Double_t Graph0_fey1015[7] = {
   0.04627183,
   0.01498087,
   0.01098133,
   0.009149348,
   0.008641349,
   0.01049381,
   0.7127525};
   TGraphErrors *gre = new TGraphErrors(7,Graph0_fx1015,Graph0_fy1015,Graph0_fex1015,Graph0_fey1015);
   gre->SetName("Graph0");
   gre->SetTitle(";Track momentum [MeV];A_{EDM} [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01015 = new TH1F("Graph_Graph01015","",100,0,3850);
   Graph_Graph01015->SetMinimum(0.02200455);
   Graph_Graph01015->SetMaximum(3.649781);
   Graph_Graph01015->SetDirectory(0);
   Graph_Graph01015->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01015->SetLineColor(ci);
   Graph_Graph01015->GetXaxis()->SetTitle("Track momentum [MeV]");
   Graph_Graph01015->GetXaxis()->SetRange(1,91);
   Graph_Graph01015->GetXaxis()->CenterTitle(true);
   Graph_Graph01015->GetXaxis()->SetLabelFont(42);
   Graph_Graph01015->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01015->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01015->GetXaxis()->SetTitleFont(42);
   Graph_Graph01015->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01015->GetYaxis()->CenterTitle(true);
   Graph_Graph01015->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01015->GetYaxis()->SetLabelFont(42);
   Graph_Graph01015->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01015->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01015->GetYaxis()->SetTitleFont(42);
   Graph_Graph01015->GetZaxis()->SetLabelFont(42);
   Graph_Graph01015->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01015);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
