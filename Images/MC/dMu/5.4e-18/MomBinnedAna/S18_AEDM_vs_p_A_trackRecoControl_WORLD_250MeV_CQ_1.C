void S18_AEDM_vs_p_A_trackRecoControl_WORLD_250MeV_CQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Dec  5 20:08:58 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(486.2651,-8.776362e-07,3033.368,4.350216e-07);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1069[12] = {
   188.9285,
   434.8157,
   652.8408,
   884.0785,
   1126.173,
   1373.702,
   1622.569,
   1870.669,
   2119.017,
   2366.486,
   2613.314,
   2823.639};
   Double_t Graph0_fy1069[12] = {
   5.550638e-05,
   3.635504e-06,
   2.084771e-07,
   -1.059048e-07,
   -1.746939e-07,
   -1.853498e-07,
   -2.369988e-07,
   -3.851999e-07,
   -4.962607e-07,
   -4.200517e-07,
   -8.192704e-07,
   -9.247572e-07};
   Double_t Graph0_fex1069[12] = {
   1.031071,
   0.2060205,
   0.1131189,
   0.07628962,
   0.07052248,
   0.07063667,
   0.07371139,
   0.0797559,
   0.09034869,
   0.1064703,
   0.1344564,
   0.1680666};
   Double_t Graph0_fey1069[12] = {
   0.0008518331,
   2.783099e-06,
   1.842381e-07,
   5.126039e-08,
   3.838116e-08,
   3.847326e-08,
   4.358564e-08,
   5.495927e-08,
   7.833143e-08,
   1.248958e-07,
   2.464157e-07,
   1.206156e-06};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1069,Graph0_fy1069,Graph0_fex1069,Graph0_fey1069);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01069 = new TH1F("Graph_Graph01069","S18_",100,0,3087.398);
   Graph_Graph01069->SetMinimum(-7.463704e-07);
   Graph_Graph01069->SetMaximum(3.037559e-07);
   Graph_Graph01069->SetDirectory(0);
   Graph_Graph01069->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01069->SetLineColor(ci);
   Graph_Graph01069->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01069->GetXaxis()->SetRange(25,90);
   Graph_Graph01069->GetXaxis()->CenterTitle(true);
   Graph_Graph01069->GetXaxis()->SetLabelFont(42);
   Graph_Graph01069->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01069->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01069->GetXaxis()->SetTitleFont(42);
   Graph_Graph01069->GetYaxis()->SetTitle("A_{EDM} / 250 MeV");
   Graph_Graph01069->GetYaxis()->CenterTitle(true);
   Graph_Graph01069->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01069->GetYaxis()->SetLabelFont(42);
   Graph_Graph01069->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01069->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01069->GetYaxis()->SetTitleFont(42);
   Graph_Graph01069->GetZaxis()->SetLabelFont(42);
   Graph_Graph01069->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01069->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01069);
   
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
