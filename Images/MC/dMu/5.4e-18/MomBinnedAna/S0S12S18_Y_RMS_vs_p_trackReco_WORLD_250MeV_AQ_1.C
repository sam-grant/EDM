void S0S12S18_Y_RMS_vs_p_trackReco_WORLD_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jan 19 10:50:40 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-390.0221,6.129381,3510.199,55.76948);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1222[12] = {
   194.7094,
   428.8875,
   630.8811,
   875.2126,
   1123.934,
   1373.236,
   1622.304,
   1870.749,
   2119.247,
   2366.839,
   2612.635,
   2826.058};
   Double_t Graph0_fy1222[12] = {
   27.16342,
   15.10567,
   14.05883,
   13.91322,
   13.86599,
   13.90589,
   13.97214,
   14.11262,
   14.31988,
   14.69381,
   15.39034,
   16.75059};
   Double_t Graph0_fex1222[12] = {
   0.1972581,
   0.0343386,
   0.0267645,
   0.02571254,
   0.02611506,
   0.02696982,
   0.02841741,
   0.03082187,
   0.0346825,
   0.0407705,
   0.05143143,
   0.06541943};
   Double_t Graph0_fey1222[12] = {
   0.1088541,
   0.007014862,
   0.003752838,
   0.003517982,
   0.003556444,
   0.003684985,
   0.003904614,
   0.004282672,
   0.004899253,
   0.005934353,
   0.007918582,
   0.01485729};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1222,Graph0_fy1222,Graph0_fex1222,Graph0_fey1222);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01222 = new TH1F("Graph_Graph01222","S0S12S18_",100,0,3089.284);
   Graph_Graph01222->SetMinimum(11.09339);
   Graph_Graph01222->SetMaximum(50.80547);
   Graph_Graph01222->SetDirectory(0);
   Graph_Graph01222->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01222->SetLineColor(ci);
   Graph_Graph01222->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01222->GetXaxis()->SetRange(1,101);
   Graph_Graph01222->GetXaxis()->CenterTitle(true);
   Graph_Graph01222->GetXaxis()->SetLabelFont(42);
   Graph_Graph01222->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01222->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01222->GetXaxis()->SetTitleFont(42);
   Graph_Graph01222->GetYaxis()->SetTitle("#sigma_{y} [mm] / 250 MeV");
   Graph_Graph01222->GetYaxis()->CenterTitle(true);
   Graph_Graph01222->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01222->GetYaxis()->SetLabelFont(42);
   Graph_Graph01222->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01222->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01222->GetYaxis()->SetTitleFont(42);
   Graph_Graph01222->GetZaxis()->SetLabelFont(42);
   Graph_Graph01222->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01222->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01222);
   
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
