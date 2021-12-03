void S0_Ag2_vs_p_A_trackRecoControl_WORLD_250MeV_BQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 15:33:54 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(468.1968,-0.0004757885,3029.484,0.001581918);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1040[11] = {
   453.2736,
   656.6675,
   884.0536,
   1123.281,
   1363.384,
   1601.719,
   1825.372,
   2101.358,
   2414.029,
   2640.443,
   2791.648};
   Double_t Graph0_fy1040[11] = {
   3.194104e-05,
   3.81426e-06,
   -2.018362e-07,
   6.740422e-09,
   -2.270646e-08,
   1.153889e-06,
   2.77013e-05,
   0.001152324,
   8.249859e-05,
   4.988391e-05,
   -0.0002436549};
   Double_t Graph0_fex1040[11] = {
   0.2807713,
   0.2103466,
   0.1422069,
   0.130941,
   0.1513813,
   0.2158623,
   0.4409652,
   2.537895,
   1.001244,
   0.5214554,
   0.4195432};
   Double_t Graph0_fey1040[11] = {
   2.633909e-05,
   1.247038e-06,
   3.283996e-07,
   2.514347e-07,
   3.944834e-07,
   1.300099e-06,
   1.654941e-05,
   0.001065754,
   0.0001799668,
   2.50168e-05,
   0.0001458785};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1040,Graph0_fy1040,Graph0_fex1040,Graph0_fey1040);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01040 = new TH1F("Graph_Graph01040","S0_",100,219.0854,3025.975);
   Graph_Graph01040->SetMinimum(-0.0002700179);
   Graph_Graph01040->SetMaximum(0.001376147);
   Graph_Graph01040->SetDirectory(0);
   Graph_Graph01040->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01040->SetLineColor(ci);
   Graph_Graph01040->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01040->GetXaxis()->SetRange(19,91);
   Graph_Graph01040->GetXaxis()->CenterTitle(true);
   Graph_Graph01040->GetXaxis()->SetLabelFont(42);
   Graph_Graph01040->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01040->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01040->GetXaxis()->SetTitleFont(42);
   Graph_Graph01040->GetYaxis()->SetTitle("A_{g#minus2} / 250 MeV");
   Graph_Graph01040->GetYaxis()->CenterTitle(true);
   Graph_Graph01040->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01040->GetYaxis()->SetLabelFont(42);
   Graph_Graph01040->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01040->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01040->GetYaxis()->SetTitleFont(42);
   Graph_Graph01040->GetZaxis()->SetLabelFont(42);
   Graph_Graph01040->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01040->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01040);
   
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
