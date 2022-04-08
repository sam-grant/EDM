void S0S12S18_c_vs_p_A_trackTruth_WORLD_250MeV_BQ_noVertCorr_1mm_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Apr  6 12:55:09 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-165.0369,-4.234895e-05,3380.183,4.763915e-05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1208[11] = {
   451.6625,
   653.2306,
   880.1522,
   1123.109,
   1371.16,
   1620.232,
   1867.231,
   2115.224,
   2363.097,
   2614.532,
   2791.457};
   Double_t Graph0_fy1208[11] = {
   3.208734e-05,
   -2.262893e-07,
   -2.653298e-07,
   -2.593111e-07,
   -2.329627e-07,
   -3.393984e-07,
   -3.721032e-07,
   -4.362029e-07,
   -1.074583e-06,
   -2.064612e-06,
   -1.863365e-05};
   Double_t Graph0_fex1208[11] = {
   0.08852516,
   0.07493234,
   0.05436515,
   0.05319776,
   0.05691237,
   0.06298955,
   0.07334976,
   0.09100092,
   0.1180313,
   0.1452257,
   0.1956995};
   Double_t Graph0_fey1208[11] = {
   5.537933e-07,
   3.789823e-08,
   1.282356e-08,
   1.170417e-08,
   1.435508e-08,
   1.986954e-08,
   3.272718e-08,
   6.775201e-08,
   1.646115e-07,
   3.748692e-07,
   8.717282e-06};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1208,Graph0_fy1208,Graph0_fex1208,Graph0_fey1208);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01208 = new TH1F("Graph_Graph01208","S0S12S18_",100,217.5661,3025.661);
   Graph_Graph01208->SetMinimum(-3.335014e-05);
   Graph_Graph01208->SetMaximum(3.864034e-05);
   Graph_Graph01208->SetDirectory(0);
   Graph_Graph01208->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01208->SetLineColor(ci);
   Graph_Graph01208->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01208->GetXaxis()->SetRange(0,100);
   Graph_Graph01208->GetXaxis()->CenterTitle(true);
   Graph_Graph01208->GetXaxis()->SetLabelFont(42);
   Graph_Graph01208->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01208->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01208->GetXaxis()->SetTitleFont(42);
   Graph_Graph01208->GetYaxis()->SetTitle("c / 250 MeV");
   Graph_Graph01208->GetYaxis()->CenterTitle(true);
   Graph_Graph01208->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01208->GetYaxis()->SetLabelFont(42);
   Graph_Graph01208->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01208->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01208->GetYaxis()->SetTitleFont(42);
   Graph_Graph01208->GetZaxis()->SetLabelFont(42);
   Graph_Graph01208->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01208->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01208);
   
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
