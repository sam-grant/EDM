void S0S12S18_full_A_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May 21 13:26:27 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-419.65,-0.04946974,3468.85,0.2271783);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1519[15] = {
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
   Double_t Graph0_fy1519[15] = {
   0.1530641,
   0.1536256,
   0.1554924,
   0.1708641,
   0.1642295,
   0.1467522,
   0.1516034,
   0.1470205,
   0.1335394,
   0.1291265,
   0.1181647,
   0.1062946,
   0.09506827,
   0.06996007,
   0.0300586};
   Double_t Graph0_fex1519[15] = {
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
   Double_t Graph0_fey1519[15] = {
   0.0103934,
   0.01039331,
   0.01036469,
   0.01020615,
   0.01009415,
   0.0101186,
   0.01029404,
   0.01064425,
   0.0112143,
   0.01205959,
   0.01326371,
   0.01494486,
   0.01736332,
   0.02124101,
   0.03342033};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1519,Graph0_fy1519,Graph0_fex1519,Graph0_fey1519);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01519 = new TH1F("Graph_Graph01519","S0S12S18",100,0,3080);
   Graph_Graph01519->SetMinimum(-0.02180494);
   Graph_Graph01519->SetMaximum(0.1995135);
   Graph_Graph01519->SetDirectory(0);
   Graph_Graph01519->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01519->SetLineColor(ci);
   Graph_Graph01519->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_Graph01519->GetXaxis()->SetRange(0,100);
   Graph_Graph01519->GetXaxis()->CenterTitle(true);
   Graph_Graph01519->GetXaxis()->SetLabelFont(42);
   Graph_Graph01519->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01519->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01519->GetXaxis()->SetTitleFont(42);
   Graph_Graph01519->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01519->GetYaxis()->CenterTitle(true);
   Graph_Graph01519->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01519->GetYaxis()->SetLabelFont(42);
   Graph_Graph01519->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01519->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01519->GetYaxis()->SetTitleFont(42);
   Graph_Graph01519->GetZaxis()->SetLabelFont(42);
   Graph_Graph01519->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01519->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01519);
   
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
