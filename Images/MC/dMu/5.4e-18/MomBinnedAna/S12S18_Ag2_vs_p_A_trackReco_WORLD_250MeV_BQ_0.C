void S12S18_Ag2_vs_p_A_trackReco_WORLD_250MeV_BQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 15:32:23 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(466.9439,-3.459188e-05,3025.006,3.871767e-06);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1085[11] = {
   451.859,
   653.3117,
   880.4285,
   1123.038,
   1370.992,
   1619.971,
   1866.545,
   2115.011,
   2362.886,
   2613.266,
   2787.684};
   Double_t Graph0_fy1085[11] = {
   -1.954162e-06,
   2.169066e-08,
   3.965626e-09,
   9.56608e-09,
   -1.312998e-09,
   -3.756493e-08,
   -1.593839e-07,
   -1.347373e-07,
   -5.02278e-07,
   -7.005633e-07,
   -2.972589e-05};
   Double_t Graph0_fex1085[11] = {
   0.09988357,
   0.08417764,
   0.06086071,
   0.05941364,
   0.06350369,
   0.07028425,
   0.08235894,
   0.1033696,
   0.1351177,
   0.1638907,
   0.205084};
   Double_t Graph0_fey1085[11] = {
   1.114249e-06,
   7.597767e-08,
   2.545235e-08,
   2.311699e-08,
   2.822068e-08,
   3.911983e-08,
   6.504674e-08,
   1.356809e-07,
   3.293647e-07,
   7.19944e-07,
   2.057153e-05};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1085,Graph0_fy1085,Graph0_fex1085,Graph0_fey1085);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01085 = new TH1F("Graph_Graph01085","S12S18_",100,218.1461,3021.502);
   Graph_Graph01085->SetMinimum(-3.074551e-05);
   Graph_Graph01085->SetMaximum(2.540242e-08);
   Graph_Graph01085->SetDirectory(0);
   Graph_Graph01085->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01085->SetLineColor(ci);
   Graph_Graph01085->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01085->GetXaxis()->SetRange(19,91);
   Graph_Graph01085->GetXaxis()->CenterTitle(true);
   Graph_Graph01085->GetXaxis()->SetLabelFont(42);
   Graph_Graph01085->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01085->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01085->GetXaxis()->SetTitleFont(42);
   Graph_Graph01085->GetYaxis()->SetTitle("A_{g#minus2} / 250 MeV");
   Graph_Graph01085->GetYaxis()->CenterTitle(true);
   Graph_Graph01085->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01085->GetYaxis()->SetLabelFont(42);
   Graph_Graph01085->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01085->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01085->GetYaxis()->SetTitleFont(42);
   Graph_Graph01085->GetZaxis()->SetLabelFont(42);
   Graph_Graph01085->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01085->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01085);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4146231,0.9362587,0.5853769,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
