void A_vs_time_noQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  9 17:41:24 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-96.25001,-0.9073891,866.25,0.4809099);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1015[7] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650};
   Double_t Graph0_fy1015[7] = {
   0.141704,
   0.1344917,
   0.1349019,
   0.0740251,
   0.1605478,
   -0.1858445,
   -0.2714025};
   Double_t Graph0_fex1015[7] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t Graph0_fey1015[7] = {
   0.004036921,
   0.008811429,
   0.01918281,
   0.04161802,
   0.08897894,
   0.1966024,
   0.4046035};
   TGraphErrors *gre = new TGraphErrors(7,Graph0_fx1015,Graph0_fy1015,Graph0_fex1015,Graph0_fey1015);
   gre->SetName("Graph0");
   gre->SetTitle(";Track time [#mus];A_{EDM} [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01015 = new TH1F("Graph_Graph01015","",100,0,770);
   Graph_Graph01015->SetMinimum(-0.7685592);
   Graph_Graph01015->SetMaximum(0.34208);
   Graph_Graph01015->SetDirectory(0);
   Graph_Graph01015->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01015->SetLineColor(ci);
   Graph_Graph01015->GetXaxis()->SetTitle("Track time [#mus]");
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
   Graph_Graph01015->GetYaxis()->SetTitleOffset(1.1);
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
