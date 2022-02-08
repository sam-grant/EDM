void S0S12S18_Ag2_vs_p_A_trackReco_WORLD_500MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Feb  7 14:58:38 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-126.7881,-5.759763e-06,3212.301,6.438931e-07);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1160[6] = {
   451.6584,
   805.6381,
   1238.897,
   1725.211,
   2208.051,
   2633.759};
   Double_t Graph0_fy1160[6] = {
   -2.507587e-06,
   -1.044641e-08,
   3.041683e-09,
   -4.200127e-08,
   -2.190644e-07,
   -1.618e-06};
   Double_t Graph0_fex1160[6] = {
   0.1075792,
   0.09683756,
   0.09387275,
   0.1144096,
   0.1699271,
   0.203104};
   Double_t Graph0_fey1160[6] = {
   1.41287e-06,
   1.797887e-08,
   1.160637e-08,
   2.218255e-08,
   8.392471e-08,
   7.192419e-07};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1160,Graph0_fy1160,Graph0_fex1160,Graph0_fey1160);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01160 = new TH1F("Graph_Graph01160","S0S12S18_",100,233.3097,2852.203);
   Graph_Graph01160->SetMinimum(-5.119398e-06);
   Graph_Graph01160->SetMaximum(3.527428e-09);
   Graph_Graph01160->SetDirectory(0);
   Graph_Graph01160->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01160->SetLineColor(ci);
   Graph_Graph01160->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01160->GetXaxis()->SetRange(0,101);
   Graph_Graph01160->GetXaxis()->CenterTitle(true);
   Graph_Graph01160->GetXaxis()->SetLabelFont(42);
   Graph_Graph01160->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01160->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01160->GetXaxis()->SetTitleFont(42);
   Graph_Graph01160->GetYaxis()->SetTitle("A_{g#minus2} / 500 MeV");
   Graph_Graph01160->GetYaxis()->CenterTitle(true);
   Graph_Graph01160->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01160->GetYaxis()->SetLabelFont(42);
   Graph_Graph01160->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01160->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01160->GetYaxis()->SetTitleFont(42);
   Graph_Graph01160->GetZaxis()->SetLabelFont(42);
   Graph_Graph01160->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01160->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01160);
   
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
