void S0_c_vs_p_A_trackReco_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 02:59:04 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-164.6244,-0.0001067442,3377.861,0.0001256387);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1060[11] = {
   451.6492,
   653.2572,
   879.9206,
   1123.044,
   1371.41,
   1620.722,
   1868.001,
   2116.576,
   2363.177,
   2615.301,
   2789.538};
   Double_t Graph0_fy1060[11] = {
   8.475692e-05,
   -4.963234e-08,
   -4.599251e-07,
   -3.69405e-07,
   -3.851742e-07,
   -5.208129e-07,
   -5.774944e-07,
   -1.451028e-07,
   -8.465049e-07,
   -2.031566e-06,
   -4.109448e-05};
   Double_t Graph0_fex1060[11] = {
   0.1383671,
   0.1171129,
   0.08543187,
   0.08352476,
   0.08892344,
   0.09816877,
   0.1126998,
   0.1364134,
   0.1707334,
   0.2138205,
   0.2464947};
   Double_t Graph0_fey1060[11] = {
   2.151264e-06,
   1.452925e-07,
   4.965342e-08,
   4.54828e-08,
   5.480077e-08,
   7.491566e-08,
   1.183318e-07,
   2.333411e-07,
   5.046535e-07,
   1.171091e-06,
   2.691926e-05};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1060,Graph0_fy1060,Graph0_fex1060,Graph0_fey1060);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01060 = new TH1F("Graph_Graph01060","S0_",100,217.6834,3023.612);
   Graph_Graph01060->SetMinimum(-8.350593e-05);
   Graph_Graph01060->SetMaximum(0.0001024004);
   Graph_Graph01060->SetDirectory(0);
   Graph_Graph01060->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01060->SetLineColor(ci);
   Graph_Graph01060->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01060->GetXaxis()->SetRange(0,100);
   Graph_Graph01060->GetXaxis()->CenterTitle(true);
   Graph_Graph01060->GetXaxis()->SetLabelFont(42);
   Graph_Graph01060->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01060->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01060->GetXaxis()->SetTitleFont(42);
   Graph_Graph01060->GetYaxis()->SetTitle("c / 250 MeV");
   Graph_Graph01060->GetYaxis()->CenterTitle(true);
   Graph_Graph01060->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01060->GetYaxis()->SetLabelFont(42);
   Graph_Graph01060->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01060->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01060->GetYaxis()->SetTitleFont(42);
   Graph_Graph01060->GetZaxis()->SetLabelFont(42);
   Graph_Graph01060->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01060->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01060);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4567085,0.9362587,0.5432915,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
