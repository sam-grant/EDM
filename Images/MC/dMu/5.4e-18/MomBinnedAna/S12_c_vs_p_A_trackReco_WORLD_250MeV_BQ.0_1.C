void S12_c_vs_p_A_trackReco_WORLD_250MeV_BQ.0_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb  2 11:32:03 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.4182,-0.001841864,3406.946,0.0005638466);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1097[11] = {
   451.9295,
   653.2541,
   880.1027,
   1123.321,
   1371.175,
   1620.3,
   1867.055,
   2114.96,
   2362.495,
   2614.658,
   2787.332};
   Double_t Graph0_fy1097[11] = {
   7.12404e-05,
   -1.039959e-06,
   -4.874182e-07,
   -2.831601e-07,
   -4.253803e-07,
   -1.006151e-06,
   -7.604686e-07,
   8.142139e-07,
   -2.901588e-06,
   -1.354075e-05,
   -0.0005806409};
   Double_t Graph0_fex1097[11] = {
   0.2585753,
   0.2175793,
   0.1578323,
   0.1544094,
   0.1642786,
   0.1821068,
   0.2117136,
   0.2648624,
   0.3434608,
   0.4240096,
   0.523915};
   Double_t Graph0_fey1097[11] = {
   1.440235e-05,
   9.352489e-07,
   3.143542e-07,
   2.847086e-07,
   3.458919e-07,
   4.876482e-07,
   8.054225e-07,
   1.672179e-06,
   4.097209e-06,
   9.436685e-06,
   0.0002343332};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1097,Graph0_fy1097,Graph0_fex1097,Graph0_fey1097);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01097 = new TH1F("Graph_Graph01097","S12_",100,218.0524,3021.475);
   Graph_Graph01097->SetMinimum(-0.001601293);
   Graph_Graph01097->SetMaximum(0.0003232756);
   Graph_Graph01097->SetDirectory(0);
   Graph_Graph01097->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01097->SetLineColor(ci);
   Graph_Graph01097->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01097->GetXaxis()->SetRange(0,101);
   Graph_Graph01097->GetXaxis()->CenterTitle(true);
   Graph_Graph01097->GetXaxis()->SetLabelFont(42);
   Graph_Graph01097->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01097->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01097->GetXaxis()->SetTitleFont(42);
   Graph_Graph01097->GetYaxis()->SetTitle("c / 250 MeV");
   Graph_Graph01097->GetYaxis()->CenterTitle(true);
   Graph_Graph01097->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01097->GetYaxis()->SetLabelFont(42);
   Graph_Graph01097->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01097->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01097->GetYaxis()->SetTitleFont(42);
   Graph_Graph01097->GetZaxis()->SetLabelFont(42);
   Graph_Graph01097->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01097->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01097);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
