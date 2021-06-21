void S0S12S18_full_c_vs_p_trackReco_500MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jun 15 13:08:35 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(500,-0.6244806,3500,-0.1968054);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1254[5] = {
   3000,
   2500,
   2000,
   1500,
   1000};
   Double_t Graph0_fy1254[5] = {
   -0.281352,
   -0.2863393,
   -0.3055921,
   -0.3749999,
   -0.5242803};
   Double_t Graph0_fex1254[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1254[5] = {
   0.01326743,
   0.01379868,
   0.0150483,
   0.01836677,
   0.0289211};
   TGraphErrors *gre = new TGraphErrors(5,Graph0_fx1254,Graph0_fy1254,Graph0_fex1254,Graph0_fey1254);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01254 = new TH1F("Graph_Graph01254","S0S12S18",100,800,3200);
   Graph_Graph01254->SetMinimum(-0.5817131);
   Graph_Graph01254->SetMaximum(-0.2395729);
   Graph_Graph01254->SetDirectory(0);
   Graph_Graph01254->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01254->SetLineColor(ci);
   Graph_Graph01254->GetXaxis()->SetTitle("p_{max} [MeV]");
   Graph_Graph01254->GetXaxis()->SetRange(1,100);
   Graph_Graph01254->GetXaxis()->CenterTitle(true);
   Graph_Graph01254->GetXaxis()->SetLabelFont(42);
   Graph_Graph01254->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01254->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01254->GetXaxis()->SetTitleFont(42);
   Graph_Graph01254->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01254->GetYaxis()->CenterTitle(true);
   Graph_Graph01254->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01254->GetYaxis()->SetLabelFont(42);
   Graph_Graph01254->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01254->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01254->GetYaxis()->SetTitleFont(42);
   Graph_Graph01254->GetZaxis()->SetLabelFont(42);
   Graph_Graph01254->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01254->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01254);
   
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
