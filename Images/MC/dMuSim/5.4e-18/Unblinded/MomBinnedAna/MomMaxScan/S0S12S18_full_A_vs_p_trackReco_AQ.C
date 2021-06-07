void S0S12S18_full_A_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May 21 13:26:32 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(250,0.1395334,3550,0.2663128);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1545[12] = {
   3000,
   2800,
   2600,
   2400,
   2200,
   2000,
   1800,
   1600,
   1400,
   1200,
   1000,
   800};
   Double_t Graph0_fy1545[12] = {
   0.1708695,
   0.1716519,
   0.1731025,
   0.1745661,
   0.1767832,
   0.1792885,
   0.1818938,
   0.1869343,
   0.1873069,
   0.1927444,
   0.2215897,
   0.2047883};
   Double_t Graph0_fex1545[12] = {
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
   Double_t Graph0_fey1545[12] = {
   0.01020624,
   0.01026296,
   0.01042659,
   0.01067749,
   0.01107831,
   0.01168406,
   0.01256807,
   0.01385092,
   0.01572493,
   0.01859592,
   0.02359316,
   0.0352395};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1545,Graph0_fy1545,Graph0_fex1545,Graph0_fey1545);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01545 = new TH1F("Graph_Graph01545","S0S12S18",100,580,3220);
   Graph_Graph01545->SetMinimum(0.1522113);
   Graph_Graph01545->SetMaximum(0.2536348);
   Graph_Graph01545->SetDirectory(0);
   Graph_Graph01545->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01545->SetLineColor(ci);
   Graph_Graph01545->GetXaxis()->SetTitle("p_{max} [MeV]");
   Graph_Graph01545->GetXaxis()->SetRange(1,100);
   Graph_Graph01545->GetXaxis()->CenterTitle(true);
   Graph_Graph01545->GetXaxis()->SetLabelFont(42);
   Graph_Graph01545->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01545->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01545->GetXaxis()->SetTitleFont(42);
   Graph_Graph01545->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01545->GetYaxis()->CenterTitle(true);
   Graph_Graph01545->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01545->GetYaxis()->SetLabelFont(42);
   Graph_Graph01545->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01545->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01545->GetYaxis()->SetTitleFont(42);
   Graph_Graph01545->GetZaxis()->SetLabelFont(42);
   Graph_Graph01545->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01545->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01545);
   
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
