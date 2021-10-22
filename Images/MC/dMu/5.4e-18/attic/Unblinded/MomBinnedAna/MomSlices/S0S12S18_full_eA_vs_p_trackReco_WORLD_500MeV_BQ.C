void S0S12S18_full_eA_vs_p_trackReco_WORLD_500MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Aug 24 13:24:44 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-375.375,-0.02370025,3378.375,0.2279922);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1085[6] = {
   250,
   750,
   1250,
   1750,
   2250,
   2750};
   Double_t Graph0_fy1085[6] = {
   0.1860435,
   0.03149673,
   0.02003122,
   0.0182485,
   0.01978674,
   0.0258771};
   Double_t Graph0_fex1085[6] = {
   250,
   250,
   250,
   250,
   250,
   250};
   Double_t Graph0_fey1085[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1085,Graph0_fy1085,Graph0_fex1085,Graph0_fey1085);
   gre->SetName("Graph0");
   gre->SetTitle(";p [MeV]: in range p #minus 250 < p < p #plus 250 MeV;#deltaA_{EDM}");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01085 = new TH1F("Graph_Graph01085","",100,0,3300);
   Graph_Graph01085->SetMinimum(0.001469);
   Graph_Graph01085->SetMaximum(0.202823);
   Graph_Graph01085->SetDirectory(0);
   Graph_Graph01085->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01085->SetLineColor(ci);
   Graph_Graph01085->GetXaxis()->SetTitle("p [MeV]: in range p #minus 250 < p < p #plus 250 MeV");
   Graph_Graph01085->GetXaxis()->SetRange(1,91);
   Graph_Graph01085->GetXaxis()->CenterTitle(true);
   Graph_Graph01085->GetXaxis()->SetLabelFont(42);
   Graph_Graph01085->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01085->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01085->GetXaxis()->SetTitleFont(42);
   Graph_Graph01085->GetYaxis()->SetTitle("#deltaA_{EDM}");
   Graph_Graph01085->GetYaxis()->CenterTitle(true);
   Graph_Graph01085->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01085->GetYaxis()->SetLabelFont(42);
   Graph_Graph01085->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01085->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01085->GetYaxis()->SetTitleFont(42);
   Graph_Graph01085->GetZaxis()->SetLabelFont(42);
   Graph_Graph01085->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01085->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01085);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
