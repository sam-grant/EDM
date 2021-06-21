void S12_full_c_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jun 15 11:30:10 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-419.65,-0.1343226,3468.85,0.6022173);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1195[15] = {
   0,
   200,
   400,
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200,
   2400,
   2600,
   2800};
   Double_t Graph0_fy1195[15] = {
   0.466629,
   0.4664451,
   0.4350502,
   0.3203201,
   0.2548309,
   0.2141474,
   0.1972477,
   0.1813073,
   0.1651184,
   0.1380458,
   0.1241072,
   0.1340496,
   0.1239157,
   0.1231342,
   0.04601486};
   Double_t Graph0_fex1195[15] = {
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
   Double_t Graph0_fey1195[15] = {
   0.01283158,
   0.0128315,
   0.01280156,
   0.01262751,
   0.01254331,
   0.0126455,
   0.01294885,
   0.01351896,
   0.01443559,
   0.01581827,
   0.01787966,
   0.02091395,
   0.02561339,
   0.03360807,
   0.05758084};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1195,Graph0_fy1195,Graph0_fex1195,Graph0_fey1195);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01195 = new TH1F("Graph_Graph01195","S12",100,0,3080);
   Graph_Graph01195->SetMinimum(-0.06066865);
   Graph_Graph01195->SetMaximum(0.5285633);
   Graph_Graph01195->SetDirectory(0);
   Graph_Graph01195->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01195->SetLineColor(ci);
   Graph_Graph01195->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_Graph01195->GetXaxis()->SetRange(0,100);
   Graph_Graph01195->GetXaxis()->CenterTitle(true);
   Graph_Graph01195->GetXaxis()->SetLabelFont(42);
   Graph_Graph01195->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01195->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01195->GetXaxis()->SetTitleFont(42);
   Graph_Graph01195->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01195->GetYaxis()->CenterTitle(true);
   Graph_Graph01195->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01195->GetYaxis()->SetLabelFont(42);
   Graph_Graph01195->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01195->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01195->GetYaxis()->SetTitleFont(42);
   Graph_Graph01195->GetZaxis()->SetLabelFont(42);
   Graph_Graph01195->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01195->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01195);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
