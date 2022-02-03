void S0S12S18_Ag2_vs_p_A_trackReco_WORLD_250MeV_BQ.0_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb  2 11:32:14 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.7269,-4.689812e-05,3408.028,0.0003513787);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1210[11] = {
   451.7528,
   653.2209,
   880.2011,
   1123.089,
   1371.096,
   1620.209,
   1867.233,
   2115.524,
   2362.844,
   2614.57,
   2788.405};
   Double_t Graph0_fy1210[11] = {
   -2.604217e-06,
   -3.279862e-07,
   1.315056e-07,
   -8.708799e-08,
   3.09271e-08,
   1.960221e-07,
   2.217639e-07,
   -1.201524e-08,
   -3.088995e-07,
   3.312233e-06,
   7.690663e-05};
   Double_t Graph0_fex1210[11] = {
   0.1496284,
   0.1259009,
   0.09125919,
   0.08909967,
   0.09510246,
   0.1053006,
   0.1224209,
   0.1517068,
   0.1946282,
   0.240002,
   0.2929211};
   Double_t Graph0_fey1210[11] = {
   3.848495e-06,
   2.545154e-07,
   8.546255e-08,
   7.784336e-08,
   9.50391e-08,
   1.31098e-07,
   2.130441e-07,
   4.284579e-07,
   9.907172e-07,
   2.218238e-06,
   5.449197e-05};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1210,Graph0_fy1210,Graph0_fex1210,Graph0_fey1210);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01210 = new TH1F("Graph_Graph01210","S0S12S18_",100,217.8937,3022.407);
   Graph_Graph01210->SetMinimum(-7.070433e-06);
   Graph_Graph01210->SetMaximum(0.0003115511);
   Graph_Graph01210->SetDirectory(0);
   Graph_Graph01210->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01210->SetLineColor(ci);
   Graph_Graph01210->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01210->GetXaxis()->SetRange(0,101);
   Graph_Graph01210->GetXaxis()->CenterTitle(true);
   Graph_Graph01210->GetXaxis()->SetLabelFont(42);
   Graph_Graph01210->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01210->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01210->GetXaxis()->SetTitleFont(42);
   Graph_Graph01210->GetYaxis()->SetTitle("A_{g#minus2} / 250 MeV");
   Graph_Graph01210->GetYaxis()->CenterTitle(true);
   Graph_Graph01210->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01210->GetYaxis()->SetLabelFont(42);
   Graph_Graph01210->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01210->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01210->GetYaxis()->SetTitleFont(42);
   Graph_Graph01210->GetZaxis()->SetLabelFont(42);
   Graph_Graph01210->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01210->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01210);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.3920101,0.9362587,0.6079899,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
