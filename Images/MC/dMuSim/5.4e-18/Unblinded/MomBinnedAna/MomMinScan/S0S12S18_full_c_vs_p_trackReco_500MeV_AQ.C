void S0S12S18_full_c_vs_p_trackReco_500MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jun 15 13:08:34 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-374.6875,-0.4900412,3097.188,-0.07248911);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1242[6] = {
   0,
   500,
   1000,
   1500,
   2000,
   2500};
   Double_t Graph0_fy1242[6] = {
   -0.4073827,
   -0.3212116,
   -0.1910795,
   -0.1613032,
   -0.1778101,
   -0.1891808};
   Double_t Graph0_fex1242[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1242[6] = {
   0.01306649,
   0.01313888,
   0.01473009,
   0.01922207,
   0.02873933,
   0.04098168};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1242,Graph0_fy1242,Graph0_fex1242,Graph0_fey1242);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01242 = new TH1F("Graph_Graph01242","S0S12S18",100,0,2750);
   Graph_Graph01242->SetMinimum(-0.448286);
   Graph_Graph01242->SetMaximum(-0.1142443);
   Graph_Graph01242->SetDirectory(0);
   Graph_Graph01242->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01242->SetLineColor(ci);
   Graph_Graph01242->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_Graph01242->GetXaxis()->SetRange(0,100);
   Graph_Graph01242->GetXaxis()->CenterTitle(true);
   Graph_Graph01242->GetXaxis()->SetLabelFont(42);
   Graph_Graph01242->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01242->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01242->GetXaxis()->SetTitleFont(42);
   Graph_Graph01242->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01242->GetYaxis()->CenterTitle(true);
   Graph_Graph01242->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01242->GetYaxis()->SetLabelFont(42);
   Graph_Graph01242->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01242->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01242->GetYaxis()->SetTitleFont(42);
   Graph_Graph01242->GetZaxis()->SetLabelFont(42);
   Graph_Graph01242->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01242->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01242);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4033166,0.94,0.5966834,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
