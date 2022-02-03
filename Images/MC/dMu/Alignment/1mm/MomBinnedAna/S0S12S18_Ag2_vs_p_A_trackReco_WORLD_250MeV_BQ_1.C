void S0S12S18_Ag2_vs_p_A_trackReco_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jan 31 18:52:00 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.9133,-1.412003e-06,3408.324,4.559784e-06);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1210[11] = {
   451.6112,
   653.1541,
   880.085,
   1123.204,
   1371.069,
   1620.186,
   1867.124,
   2115.282,
   2363.183,
   2614.691,
   2788.688};
   Double_t Graph0_fy1210[11] = {
   8.414375e-07,
   -5.764414e-08,
   -5.088055e-08,
   -2.605607e-10,
   -2.89392e-08,
   -9.425042e-09,
   -7.538695e-08,
   -1.374676e-07,
   -3.530738e-07,
   -1.031177e-06,
   -4.597504e-07};
   Double_t Graph0_fex1210[11] = {
   0.1107381,
   0.09418109,
   0.06848963,
   0.06711431,
   0.07174528,
   0.07961856,
   0.09256173,
   0.1151041,
   0.1486707,
   0.1826897,
   0.2225177};
   Double_t Graph0_fey1210[11] = {
   1.581245e-06,
   1.063892e-07,
   3.620019e-08,
   3.333138e-08,
   4.073979e-08,
   5.664803e-08,
   9.215509e-08,
   1.871869e-07,
   4.409127e-07,
   9.777829e-07,
   2.361855e-05};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1210,Graph0_fy1210,Graph0_fex1210,Graph0_fey1210);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01210 = new TH1F("Graph_Graph01210","S0S12S18_",100,217.7594,3022.651);
   Graph_Graph01210->SetMinimum(-8.148246e-07);
   Graph_Graph01210->SetMaximum(3.962606e-06);
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
