void S0S12S18_pureBz_c_vs_p_slice_eQ_2()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May  6 12:22:50 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-410,-3.155355,3690,0.6285942);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1325[14] = {
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t Graph0_fy1325[14] = {
   -2.461192,
   -1.415652,
   -0.4092943,
   -0.2525227,
   -0.1999265,
   -0.1494786,
   -0.1270976,
   -0.1128788,
   -0.09214021,
   -0.0534741,
   -0.04278015,
   -0.03201734,
   -0.05025223,
   -0.01980648};
   Double_t Graph0_fex1325[14] = {
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
   Double_t Graph0_fey1325[14] = {
   0.06350528,
   0.02229283,
   0.01671723,
   0.01455392,
   0.01314959,
   0.01206947,
   0.01125281,
   0.01063642,
   0.01031266,
   0.01016911,
   0.01021978,
   0.01056083,
   0.01150944,
   0.01774234};
   TGraphErrors *gre = new TGraphErrors(14,Graph0_fx1325,Graph0_fy1325,Graph0_fex1325,Graph0_fey1325);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01325 = new TH1F("Graph_Graph01325","S0S12S18",100,0,3280);
   Graph_Graph01325->SetMinimum(-2.77696);
   Graph_Graph01325->SetMaximum(0.2501992);
   Graph_Graph01325->SetDirectory(0);
   Graph_Graph01325->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01325->SetLineColor(ci);
   Graph_Graph01325->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01325->GetXaxis()->CenterTitle(true);
   Graph_Graph01325->GetXaxis()->SetLabelFont(42);
   Graph_Graph01325->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01325->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01325->GetXaxis()->SetTitleFont(42);
   Graph_Graph01325->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01325->GetYaxis()->CenterTitle(true);
   Graph_Graph01325->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01325->GetYaxis()->SetLabelFont(42);
   Graph_Graph01325->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01325->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01325->GetYaxis()->SetTitleFont(42);
   Graph_Graph01325->GetZaxis()->SetLabelFont(42);
   Graph_Graph01325->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01325->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01325);
   
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
