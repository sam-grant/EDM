void S12S18_c_vs_p_pmin_vertCorr_eQ_eQ_2()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  4 23:13:41 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(200,0.4148167,2600,1.534218);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1397[9] = {
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200};
   Double_t Graph0_fy1397[9] = {
   0.6246702,
   0.8450176,
   1.007154,
   1.150136,
   1.226056,
   1.310897,
   1.32097,
   1.25334,
   1.197377};
   Double_t Graph0_fex1397[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1397[9] = {
   0.02328671,
   0.02289159,
   0.02281037,
   0.02305495,
   0.02371919,
   0.02486156,
   0.02668081,
   0.02959397,
   0.03404826};
   TGraphErrors *gre = new TGraphErrors(9,Graph0_fx1397,Graph0_fy1397,Graph0_fex1397,Graph0_fey1397);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01397 = new TH1F("Graph_Graph01397","S12S18",100,440,2360);
   Graph_Graph01397->SetMinimum(0.5267568);
   Graph_Graph01397->SetMaximum(1.422277);
   Graph_Graph01397->SetDirectory(0);
   Graph_Graph01397->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01397->SetLineColor(ci);
   Graph_Graph01397->GetXaxis()->SetTitle("p_{min} MeV");
   Graph_Graph01397->GetXaxis()->CenterTitle(true);
   Graph_Graph01397->GetXaxis()->SetLabelFont(42);
   Graph_Graph01397->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01397->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01397->GetXaxis()->SetTitleFont(42);
   Graph_Graph01397->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01397->GetYaxis()->CenterTitle(true);
   Graph_Graph01397->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01397->GetYaxis()->SetLabelFont(42);
   Graph_Graph01397->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01397->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01397->GetYaxis()->SetTitleFont(42);
   Graph_Graph01397->GetZaxis()->SetLabelFont(42);
   Graph_Graph01397->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01397->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01397);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4253015,0.94,0.5746985,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
