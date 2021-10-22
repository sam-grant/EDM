void S0S12S18_simple_c_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May 13 01:18:45 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-850,-0.4855718,3650,0.1076666);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1405[15] = {
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
   Double_t Graph0_fy1405[15] = {
   -0.379255,
   -0.3789818,
   -0.344765,
   -0.2147306,
   -0.1649677,
   -0.1389682,
   -0.1106239,
   -0.09680543,
   -0.08113581,
   -0.07540837,
   -0.06614363,
   -0.05910415,
   -0.04002887,
   -0.04141303,
   -0.01970354};
   Double_t Graph0_fex1405[15] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t Graph0_fey1405[15] = {
   0.007443707,
   0.007443696,
   0.007423873,
   0.007314989,
   0.007244367,
   0.007282873,
   0.007438503,
   0.007735454,
   0.008213582,
   0.008928887,
   0.009963159,
   0.01145677,
   0.01364955,
   0.01733605,
   0.02849707};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1405,Graph0_fy1405,Graph0_fex1405,Graph0_fey1405);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01405 = new TH1F("Graph_Graph01405","S0S12S18",100,-400,3200);
   Graph_Graph01405->SetMinimum(-0.426248);
   Graph_Graph01405->SetMaximum(0.04834276);
   Graph_Graph01405->SetDirectory(0);
   Graph_Graph01405->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01405->SetLineColor(ci);
   Graph_Graph01405->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_Graph01405->GetXaxis()->CenterTitle(true);
   Graph_Graph01405->GetXaxis()->SetLabelFont(42);
   Graph_Graph01405->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01405->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01405->GetXaxis()->SetTitleFont(42);
   Graph_Graph01405->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01405->GetYaxis()->CenterTitle(true);
   Graph_Graph01405->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01405->GetYaxis()->SetLabelFont(42);
   Graph_Graph01405->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01405->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01405->GetYaxis()->SetTitleFont(42);
   Graph_Graph01405->GetZaxis()->SetLabelFont(42);
   Graph_Graph01405->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01405->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01405);
   
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
