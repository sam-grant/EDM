void S18_AEDM_vs_p_A_trackTruth_WORLD_250MeV_1000_2500_MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May  6 11:05:07 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-164.6101,-1.123065e-05,3380.686,1.988457e-05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1135[11] = {
   452.1108,
   653.3423,
   880.5733,
   1123.012,
   1370.957,
   1619.772,
   1866.605,
   2115.051,
   2363.383,
   2612.035,
   2791.903};
   Double_t Graph0_fy1135[11] = {
   1.776983e-08,
   1.266418e-07,
   8.04595e-08,
   7.609515e-08,
   1.297571e-07,
   2.181296e-07,
   3.259958e-07,
   3.581516e-07,
   8.335339e-07,
   1.679405e-06,
   4.32696e-06};
   Double_t Graph0_fex1135[11] = {
   0.09679788,
   0.08162527,
   0.05879418,
   0.057379,
   0.06148902,
   0.06814,
   0.08043393,
   0.1008042,
   0.1326158,
   0.1588366,
   0.2400074};
   Double_t Graph0_fey1135[11] = {
   1.024351e-06,
   6.762026e-08,
   2.280218e-08,
   2.069366e-08,
   2.555971e-08,
   3.490091e-08,
   5.702175e-08,
   1.100797e-07,
   2.398848e-07,
   4.449288e-07,
   1.037174e-05};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1135,Graph0_fy1135,Graph0_fex1135,Graph0_fey1135);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01135 = new TH1F("Graph_Graph01135","S18_",100,218.0011,3026.156);
   Graph_Graph01135->SetMinimum(-8.119128e-06);
   Graph_Graph01135->SetMaximum(1.677305e-05);
   Graph_Graph01135->SetDirectory(0);
   Graph_Graph01135->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01135->SetLineColor(ci);
   Graph_Graph01135->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01135->GetXaxis()->SetRange(0,100);
   Graph_Graph01135->GetXaxis()->CenterTitle(true);
   Graph_Graph01135->GetXaxis()->SetLabelFont(42);
   Graph_Graph01135->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01135->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01135->GetXaxis()->SetTitleFont(42);
   Graph_Graph01135->GetYaxis()->SetTitle("A_{EDM} / 250 MeV");
   Graph_Graph01135->GetYaxis()->CenterTitle(true);
   Graph_Graph01135->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01135->GetYaxis()->SetLabelFont(42);
   Graph_Graph01135->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01135->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01135->GetYaxis()->SetTitleFont(42);
   Graph_Graph01135->GetZaxis()->SetLabelFont(42);
   Graph_Graph01135->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01135->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01135);
   
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
