void S12_AEDM_vs_p_A_trackRecoControl_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Dec  5 19:39:16 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(467.8037,-0.0009859466,3028.657,0.000142235);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1054[11] = {
   452.8872,
   656.3485,
   884.581,
   1123.521,
   1363.535,
   1601.503,
   1825.269,
   2100.54,
   2414.205,
   2638.053,
   2790.781};
   Double_t Graph0_fy1054[11] = {
   2.074289e-05,
   -1.735692e-06,
   -3.627256e-08,
   -4.565825e-07,
   -6.224014e-07,
   -2.945418e-06,
   -3.888034e-05,
   -0.001093481,
   2.541004e-05,
   -9.202776e-06,
   -0.0004531089};
   Double_t Graph0_fex1054[11] = {
   0.2848927,
   0.2126365,
   0.1423016,
   0.1309017,
   0.1503931,
   0.2140097,
   0.4416789,
   2.4969,
   1.046089,
   0.5704598,
   0.500334};
   Double_t Graph0_fey1054[11] = {
   2.686935e-05,
   1.255763e-06,
   3.271114e-07,
   2.473192e-07,
   3.871301e-07,
   1.233656e-06,
   1.740221e-05,
   0.001002598,
   0.0001544554,
   2.101166e-05,
   0.0001416551};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1054,Graph0_fy1054,Graph0_fex1054,Graph0_fey1054);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01054 = new TH1F("Graph_Graph01054","S12_",100,218.7344,3025.149);
   Graph_Graph01054->SetMinimum(-0.0008731285);
   Graph_Graph01054->SetMaximum(2.94168e-05);
   Graph_Graph01054->SetDirectory(0);
   Graph_Graph01054->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01054->SetLineColor(ci);
   Graph_Graph01054->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01054->GetXaxis()->SetRange(19,91);
   Graph_Graph01054->GetXaxis()->CenterTitle(true);
   Graph_Graph01054->GetXaxis()->SetLabelFont(42);
   Graph_Graph01054->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01054->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01054->GetXaxis()->SetTitleFont(42);
   Graph_Graph01054->GetYaxis()->SetTitle("A_{EDM} / 250 MeV");
   Graph_Graph01054->GetYaxis()->CenterTitle(true);
   Graph_Graph01054->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01054->GetYaxis()->SetLabelFont(42);
   Graph_Graph01054->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01054->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01054->GetYaxis()->SetTitleFont(42);
   Graph_Graph01054->GetZaxis()->SetLabelFont(42);
   Graph_Graph01054->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01054->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01054);
   
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
