void S12S18_c_vs_p_slice_eQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May  6 19:12:59 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-412.5,-3.446385,3712.5,0.6868427);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1141[15] = {
   100,
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
   Double_t Graph0_fy1141[15] = {
   -2.024698,
   -2.680356,
   -1.493497,
   -0.5396327,
   -0.3592241,
   -0.2729035,
   -0.2288299,
   -0.1828029,
   -0.1474986,
   -0.1220318,
   -0.09284981,
   -0.07494671,
   -0.05614291,
   -0.06433637,
   -0.02407787};
   Double_t Graph0_fex1141[15] = {
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
   Double_t Graph0_fey1141[15] = {
   0.5816513,
   0.07715759,
   0.02735524,
   0.02048497,
   0.01786541,
   0.01614764,
   0.0148188,
   0.01382474,
   0.01307411,
   0.01268412,
   0.01251316,
   0.01258155,
   0.01304673,
   0.01425951,
   0.02204923};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1141,Graph0_fy1141,Graph0_fex1141,Graph0_fey1141);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01141 = new TH1F("Graph_Graph01141","S12S18",100,0,3300);
   Graph_Graph01141->SetMinimum(-3.033062);
   Graph_Graph01141->SetMaximum(0.2735199);
   Graph_Graph01141->SetDirectory(0);
   Graph_Graph01141->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01141->SetLineColor(ci);
   Graph_Graph01141->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01141->GetXaxis()->CenterTitle(true);
   Graph_Graph01141->GetXaxis()->SetLabelFont(42);
   Graph_Graph01141->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01141->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01141->GetXaxis()->SetTitleFont(42);
   Graph_Graph01141->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01141->GetYaxis()->CenterTitle(true);
   Graph_Graph01141->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01141->GetYaxis()->SetLabelFont(42);
   Graph_Graph01141->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01141->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01141->GetYaxis()->SetTitleFont(42);
   Graph_Graph01141->GetZaxis()->SetLabelFont(42);
   Graph_Graph01141->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01141->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01141);
   
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
