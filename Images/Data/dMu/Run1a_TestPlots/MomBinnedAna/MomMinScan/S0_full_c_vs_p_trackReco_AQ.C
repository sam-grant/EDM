void S0_full_c_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jun  7 14:57:42 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-419.65,1.680511e-06,3468.85,2.277709e-06);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1089[15] = {
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
   Double_t Graph0_fy1089[15] = {
   1.97911e-06,
   1.97911e-06,
   1.97911e-06,
   1.97911e-06,
   1.97911e-06,
   1.97911e-06,
   1.97911e-06,
   1.97911e-06,
   1.97911e-06,
   1.97911e-06,
   1.97911e-06,
   1.97911e-06,
   1.97911e-06,
   1.97911e-06,
   1.97911e-06};
   Double_t Graph0_fex1089[15] = {
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
   Double_t Graph0_fey1089[15] = {
   1.990659e-07,
   1.990659e-07,
   1.990659e-07,
   1.990659e-07,
   1.990659e-07,
   1.990659e-07,
   1.990659e-07,
   1.990659e-07,
   1.990659e-07,
   1.990659e-07,
   1.990659e-07,
   1.990659e-07,
   1.990659e-07,
   1.990659e-07,
   1.990659e-07};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1089,Graph0_fy1089,Graph0_fex1089,Graph0_fey1089);
   gre->SetName("Graph0");
   gre->SetTitle("S0");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01089 = new TH1F("Graph_Graph01089","S0",100,0,3080);
   Graph_Graph01089->SetMinimum(1.740231e-06);
   Graph_Graph01089->SetMaximum(2.217989e-06);
   Graph_Graph01089->SetDirectory(0);
   Graph_Graph01089->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01089->SetLineColor(ci);
   Graph_Graph01089->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_Graph01089->GetXaxis()->SetRange(0,100);
   Graph_Graph01089->GetXaxis()->CenterTitle(true);
   Graph_Graph01089->GetXaxis()->SetLabelFont(42);
   Graph_Graph01089->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01089->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01089->GetXaxis()->SetTitleFont(42);
   Graph_Graph01089->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01089->GetYaxis()->CenterTitle(true);
   Graph_Graph01089->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01089->GetYaxis()->SetLabelFont(42);
   Graph_Graph01089->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01089->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01089->GetYaxis()->SetTitleFont(42);
   Graph_Graph01089->GetZaxis()->SetLabelFont(42);
   Graph_Graph01089->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01089->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01089);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4680151,0.94,0.5319849,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
