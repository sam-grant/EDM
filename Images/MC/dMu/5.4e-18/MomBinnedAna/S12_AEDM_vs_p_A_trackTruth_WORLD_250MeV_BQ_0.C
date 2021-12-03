void S12_AEDM_vs_p_A_trackTruth_WORLD_250MeV_BQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 15:36:09 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(466.8109,-6.310196e-06,3029.776,5.855642e-05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1054[11] = {
   451.738,
   653.3893,
   880.2527,
   1123.051,
   1371.173,
   1620.272,
   1866.762,
   2114.836,
   2362.621,
   2614.182,
   2791.874};
   Double_t Graph0_fy1054[11] = {
   7.202881e-07,
   4.54962e-07,
   2.672981e-07,
   2.199883e-07,
   2.553579e-07,
   3.102639e-07,
   9.816016e-07,
   1.155135e-06,
   4.517129e-07,
   4.671372e-06,
   3.513955e-05};
   Double_t Graph0_fex1054[11] = {
   0.1410646,
   0.1188845,
   0.08610507,
   0.08408914,
   0.08950778,
   0.0988963,
   0.1153279,
   0.1440033,
   0.1882858,
   0.2317094,
   0.3300425};
   Double_t Graph0_fey1054[11] = {
   3.070366e-06,
   2.099773e-07,
   7.12474e-08,
   6.512772e-08,
   7.897036e-08,
   1.064126e-07,
   1.678557e-07,
   3.197625e-07,
   6.929343e-07,
   1.335708e-06,
   2.837336e-05};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1054,Graph0_fy1054,Graph0_fex1054,Graph0_fey1054);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01054 = new TH1F("Graph_Graph01054","S12_",100,217.5362,3026.265);
   Graph_Graph01054->SetMinimum(1.764662e-07);
   Graph_Graph01054->SetMaximum(5.206976e-05);
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
