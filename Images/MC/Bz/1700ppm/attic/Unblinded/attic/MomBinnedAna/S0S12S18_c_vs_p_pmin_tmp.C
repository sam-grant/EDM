void S0S12S18_c_vs_p_pmin_tmp()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  4 23:01:23 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(200,0.352097,2600,1.116165);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1493[9] = {
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200};
   Double_t Graph0_fy1493[9] = {
   0.4983864,
   0.6598142,
   0.7851532,
   0.8810828,
   0.9257956,
   0.9686046,
   0.9612078,
   0.9168183,
   0.8964007};
   Double_t Graph0_fex1493[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1493[9] = {
   0.01894487,
   0.01860914,
   0.01853991,
   0.01874047,
   0.01927426,
   0.02021526,
   0.02171633,
   0.02404215,
   0.02771363};
   TGraphErrors *gre = new TGraphErrors(9,Graph0_fx1493,Graph0_fy1493,Graph0_fex1493,Graph0_fey1493);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01493 = new TH1F("Graph_Graph01493","S0S12S18",100,440,2360);
   Graph_Graph01493->SetMinimum(0.4285037);
   Graph_Graph01493->SetMaximum(1.039758);
   Graph_Graph01493->SetDirectory(0);
   Graph_Graph01493->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01493->SetLineColor(ci);
   Graph_Graph01493->GetXaxis()->SetTitle("p_{min} MeV");
   Graph_Graph01493->GetXaxis()->CenterTitle(true);
   Graph_Graph01493->GetXaxis()->SetLabelFont(42);
   Graph_Graph01493->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01493->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01493->GetXaxis()->SetTitleFont(42);
   Graph_Graph01493->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01493->GetYaxis()->CenterTitle(true);
   Graph_Graph01493->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01493->GetYaxis()->SetLabelFont(42);
   Graph_Graph01493->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01493->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01493->GetYaxis()->SetTitleFont(42);
   Graph_Graph01493->GetZaxis()->SetLabelFont(42);
   Graph_Graph01493->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01493->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01493);
   
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
