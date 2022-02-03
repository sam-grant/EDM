void S18_Ag2_vs_p_A_trackReco_WORLD_250MeV_BQ.2_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb  2 11:34:04 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.195,-0.0001594861,3407.047,2.382347e-05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1136[11] = {
   452.0334,
   653.3342,
   880.5877,
   1123.032,
   1370.863,
   1619.695,
   1866.296,
   2115.184,
   2363.104,
   2612.119,
   2787.642};
   Double_t Graph0_fy1136[11] = {
   3.062256e-07,
   -4.248628e-07,
   -1.858351e-07,
   -2.738378e-08,
   2.375604e-07,
   1.950455e-07,
   -2.482672e-08,
   2.662075e-07,
   8.93824e-07,
   4.608706e-06,
   -4.766951e-05};
   Double_t Graph0_fex1136[11] = {
   0.1603305,
   0.1350596,
   0.09736021,
   0.09490607,
   0.1018511,
   0.1129718,
   0.1330762,
   0.1674427,
   0.2190467,
   0.2626988,
   0.3366573};
   Double_t Graph0_fey1136[11] = {
   4.748641e-06,
   3.11665e-07,
   1.039611e-07,
   9.429243e-08,
   1.165977e-07,
   1.624207e-07,
   2.7431e-07,
   5.726552e-07,
   1.393204e-06,
   3.09716e-06,
   9.09174e-05};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1136,Graph0_fy1136,Graph0_fex1136,Graph0_fey1136);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01136 = new TH1F("Graph_Graph01136","S18_",100,218.2625,3021.59);
   Graph_Graph01136->SetMinimum(-0.0001411552);
   Graph_Graph01136->SetMaximum(5.492505e-06);
   Graph_Graph01136->SetDirectory(0);
   Graph_Graph01136->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01136->SetLineColor(ci);
   Graph_Graph01136->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01136->GetXaxis()->SetRange(0,101);
   Graph_Graph01136->GetXaxis()->CenterTitle(true);
   Graph_Graph01136->GetXaxis()->SetLabelFont(42);
   Graph_Graph01136->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01136->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01136->GetXaxis()->SetTitleFont(42);
   Graph_Graph01136->GetYaxis()->SetTitle("A_{g#minus2} / 250 MeV");
   Graph_Graph01136->GetYaxis()->CenterTitle(true);
   Graph_Graph01136->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01136->GetYaxis()->SetLabelFont(42);
   Graph_Graph01136->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01136->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01136->GetYaxis()->SetTitleFont(42);
   Graph_Graph01136->GetZaxis()->SetLabelFont(42);
   Graph_Graph01136->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01136->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01136);
   
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
