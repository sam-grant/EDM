void S18_c_vs_p_A_trackReco_AAR_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 22 14:14:41 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(7.864962,-0.002191146,3231.605,0.001349389);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1066[11] = {
   451.9573,
   653.0238,
   880.3556,
   1123.064,
   1370.991,
   1620.028,
   1866.786,
   2115.026,
   2363.175,
   2612.864,
   2787.25};
   Double_t Graph0_fy1066[11] = {
   0.0007247077,
   1.652174e-07,
   -6.582144e-06,
   -7.045633e-06,
   -6.475506e-06,
   -6.380362e-06,
   -8.220711e-06,
   -1.049854e-05,
   -9.539114e-06,
   -6.038151e-05,
   -0.0008643376};
   Double_t Graph0_fex1066[11] = {
   0.2439991,
   0.2051239,
   0.1477598,
   0.1442241,
   0.155108,
   0.1715808,
   0.2026935,
   0.2526546,
   0.3343213,
   0.4019184,
   0.507219};
   Double_t Graph0_fey1066[11] = {
   3.459217e-05,
   2.332717e-06,
   7.742363e-07,
   6.988131e-07,
   8.786847e-07,
   1.209297e-06,
   2.08728e-06,
   4.345526e-06,
   1.100181e-05,
   2.410518e-05,
   0.0007367191};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1066,Graph0_fy1066,Graph0_fex1066,Graph0_fey1066);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01066 = new TH1F("Graph_Graph01066","S18_",100,218.1089,3021.361);
   Graph_Graph01066->SetMinimum(-0.001837092);
   Graph_Graph01066->SetMaximum(0.0009953355);
   Graph_Graph01066->SetDirectory(0);
   Graph_Graph01066->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01066->SetLineColor(ci);
   Graph_Graph01066->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01066->GetXaxis()->SetRange(5,96);
   Graph_Graph01066->GetXaxis()->CenterTitle(true);
   Graph_Graph01066->GetXaxis()->SetLabelFont(42);
   Graph_Graph01066->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01066->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01066->GetXaxis()->SetTitleFont(42);
   Graph_Graph01066->GetYaxis()->SetTitle("c / 250 MeV");
   Graph_Graph01066->GetYaxis()->CenterTitle(true);
   Graph_Graph01066->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01066->GetYaxis()->SetLabelFont(42);
   Graph_Graph01066->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01066->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01066->GetYaxis()->SetTitleFont(42);
   Graph_Graph01066->GetZaxis()->SetLabelFont(42);
   Graph_Graph01066->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01066->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01066);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
