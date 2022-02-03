void S18_Ag2_vs_p_A_trackReco_WORLD_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jan 19 10:50:32 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-389.9195,-2.022028e-05,3509.275,0.0001819047);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1142[12] = {
   193.627,
   428.7209,
   630.9542,
   875.1418,
   1123.931,
   1373.172,
   1622.294,
   1870.639,
   2119.126,
   2366.724,
   2612.58,
   2825.157};
   Double_t Graph0_fy1142[12] = {
   6.021916e-05,
   5.508688e-07,
   7.542768e-09,
   -1.005669e-08,
   7.025271e-09,
   1.154159e-09,
   3.094276e-09,
   7.376183e-08,
   -8.755459e-11,
   1.608783e-07,
   1.127703e-07,
   7.255736e-07};
   Double_t Graph0_fex1142[12] = {
   0.3451501,
   0.06002813,
   0.04658121,
   0.04479511,
   0.0455383,
   0.04707298,
   0.04959316,
   0.05382871,
   0.06066495,
   0.07154502,
   0.09069372,
   0.1153877};
   Double_t Graph0_fey1142[12] = {
   3.575595e-05,
   6.104169e-08,
   1.177528e-08,
   9.950051e-09,
   1.035954e-08,
   1.147101e-08,
   1.363648e-08,
   1.802702e-08,
   2.747501e-08,
   4.943815e-08,
   1.136262e-07,
   6.40036e-07};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1142,Graph0_fy1142,Graph0_fex1142,Graph0_fey1142);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01142 = new TH1F("Graph_Graph01142","S18_",100,0,3088.471);
   Graph_Graph01142->SetMinimum(-7.778501e-09);
   Graph_Graph01142->SetMaximum(0.0001616922);
   Graph_Graph01142->SetDirectory(0);
   Graph_Graph01142->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01142->SetLineColor(ci);
   Graph_Graph01142->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01142->GetXaxis()->SetRange(1,101);
   Graph_Graph01142->GetXaxis()->CenterTitle(true);
   Graph_Graph01142->GetXaxis()->SetLabelFont(42);
   Graph_Graph01142->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01142->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01142->GetXaxis()->SetTitleFont(42);
   Graph_Graph01142->GetYaxis()->SetTitle("A_{g#minus2} / 250 MeV");
   Graph_Graph01142->GetYaxis()->CenterTitle(true);
   Graph_Graph01142->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01142->GetYaxis()->SetLabelFont(42);
   Graph_Graph01142->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01142->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01142->GetYaxis()->SetTitleFont(42);
   Graph_Graph01142->GetZaxis()->SetLabelFont(42);
   Graph_Graph01142->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01142->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01142);
   
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
